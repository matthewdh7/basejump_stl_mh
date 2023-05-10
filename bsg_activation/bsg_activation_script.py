import sys, math

def bsg_exponential_main_initial(angbitlen, ansbitlen, negprec, posprec, extriter, precision):
    print("""
/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
`include "bsg_defines.v"
`include "../bsg_misc/bsg_idiv_iterative.v"
`include "../bsg_misc/bsg_dff_en.v"
`include "../bsg_misc/bsg_mux_one_hot.v"
`include "../bsg_misc/bsg_adder_cin.v"
`include "../bsg_misc/bsg_idiv_iterative_controller.v"
`include "../bsg_misc/bsg_counter_clear_up.v"
/* verilator lint_on WIDTH */
/* verilator lint_on CASEINCOMPLETE */

module bsg_activation #( 
    parameter ang_width_p = %(g)d      //input size; at instantiation, should not go below default value
    ,precision = %(c)d                 //affects precision of intermediate calculations and final data
    /*
    THRESHOLD PARAMETERS: Input as an 7 bit binary value, xxx.xxxx ; if the
    input angle is greater than this value, the module will output 1 and bypass
    any calculations. Could increase size of parameter to allow more precise threshold, 
    depends also on precision and bit width of input.
    */
    ,parameter [6:0] thresh_tanh_p = 7'b0111100 //3.75 decimal
    ,parameter [6:0] thresh_sig_p = 7'b1110000 //7.00 decimal
    ,parameter [5:0] thresh_zero_p = 6'b010100 //bottom bits of decimal, depends on precision
) (
    input clk_i
,input signed [ang_width_p-1:0] ang_i
,input ready_i
,input val_i
,input reset_i
,input tanh_sel_i
,output signed [precision:0] data_o
,output ready_o
,output val_o
);

parameter cordic_width_lp = %(s)d;          //only affects sincos/divider calculations, not final data
parameter shft_amt_lp = precision;
parameter ans_width_lp = precision+1;       //used for final output (decimal bits + 1 integer bit)
parameter internal_width_lp = precision+4;  //used for truncated sinh, cosh
parameter [ang_width_p-1:0] ZERO_THRESH = {(ang_width_p-6)'(0), thresh_zero_p}; //can be adjusted based on precision chosen

logic one_bypass, load_ang, divider_sel, zero_bypass;   //control signals

wire [ang_width_p-1:0] thresh_tanh = {(ang_width_p-precision-3)'(0), thresh_tanh_p, (precision-4)'(0)};
wire [ang_width_p-1:0] thresh_sig = {(ang_width_p-precision-3)'(0), thresh_sig_p, (precision-4)'(0)};
""" %{'s':ansbitlen, 'g':angbitlen, 'c':precision})
    return

def main_body_print():
    print("""  
/* state logic */
enum {e_IDLE, e_SINCOS, e_DIVIDE, e_DONE} state_r, state_n;

always_comb begin
    state_n = state_r;
    unique case (state_r)
        e_IDLE: begin
            if (ready_o && val_i) begin 
                if (one_bypass || zero_bypass) state_n = e_DONE;
                else        state_n = e_SINCOS;
            end
        end
        e_SINCOS: begin
            if (sincos_v_o && divider_ready_o) state_n = e_DIVIDE;
        end
        e_DIVIDE: begin
            if (divider_v_o) state_n = e_DONE;
        end
        e_DONE: begin
            if (ready_i) state_n = e_IDLE;
        end
        default: state_n = e_IDLE;
    endcase
end

always_ff @(posedge clk_i) begin
    state_r <= state_n;
end

/* control signals */
always_comb begin
    one_bypass = 0;
    zero_bypass = 0;
    load_ang = 0;
    divider_sel = 0;
    unique case (state_r)
        e_IDLE: begin 
            if (val_i && ready_o) load_ang = 1;
            if (ang_n > (tanh_sel_i ? thresh_tanh : thresh_sig)) one_bypass = 1;
            if (ang_n < ZERO_THRESH) zero_bypass = 1;
        end
        e_SINCOS: if (tanh_sel_i) divider_sel = 1;
        default: begin
            one_bypass = 0;
            zero_bypass = 0;
            load_ang = 0;
            divider_sel = 0;
        end
    endcase
end

/* internal handshake signals */
wire sincos_ready_o, sincos_v_o, divider_ready_o, divider_v_o;
wire sincos_v_i = (state_r == e_SINCOS) && ~one_bypass && ~zero_bypass;
wire divider_v_i = (state_r == e_DIVIDE) && ~one_bypass && ~zero_bypass;

/* input register */
logic signed [ang_width_p-1:0] ang_n, ang_r;  
assign ang_n = ang_i[ang_width_p-1] ? ~ang_i + 1'b1 : ang_i; //if negative, flip using 2s comp and compute abs value

always_ff @(posedge clk_i) begin
    if (reset_i)        ang_r <= 0;
    //occurs if val_i and ready_o
    else if (load_ang)  ang_r <= ang_n;
    else                ang_r <= ang_r;
end

/* sinh cosh module */
logic signed [cordic_width_lp-1:0] sinh_lo, cosh_lo;     //direct outputs from cordic
logic signed [internal_width_lp-1:0] sinh, cosh, negExp; //negExp = e^-x

bsg_cordic_sine_cosine_hyperbolic #(.neg_prec_p(6), .posi_prec_p(12), .extr_iter_p(1), .ans_width_p(cordic_width_lp), .ang_width_p(ang_width_p)) sinhcosh
(.clk_i
,.ang_i     (ang_r)
,.ready_i   (divider_ready_o)
,.val_i     (sincos_v_i)
,.sinh_o    (sinh_lo)
,.cosh_o    (cosh_lo)
,.ready_o   (sincos_ready_o)
,.val_o     (sincos_v_o)
);

assign sinh = sinh_lo[0+:internal_width_lp];
assign cosh = cosh_lo[0+:internal_width_lp];
assign negExp = cosh - sinh;

/* tan divider unit */
// format: tanh_sel_i (high is for tanh, low is for sigmoid)
//     first term: numerator (sinh for tanh, 1 for sigmoid)
//     second term: denominator (cosh for tanh, 1 + e^-x for sigmoid)
wire signed [internal_width_lp+shft_amt_lp-1:0] dividend_li = tanh_sel_i ? {shft_amt_lp'(0), sinh} << shft_amt_lp : {(internal_width_lp-1)'('d0), 1'b1, precision'('d0)} << shft_amt_lp;
wire signed [internal_width_lp+shft_amt_lp-1:0] divisor_li = tanh_sel_i ? {shft_amt_lp'(0), cosh} : {shft_amt_lp'(0), negExp[internal_width_lp-1:shft_amt_lp] + 1'b1, negExp[0+:shft_amt_lp]};
wire signed [internal_width_lp+shft_amt_lp-1:0] remainder_lo, divider_lo;

bsg_idiv_iterative #(.width_p(internal_width_lp+shft_amt_lp)) divider
(.clk_i
,.reset_i       

,.v_i           (divider_v_i)
,.ready_and_o   (divider_ready_o) 

,.dividend_i    (dividend_li)
,.divisor_i     (divisor_li)
,.signed_div_i  (1)

,.v_o           (divider_v_o)
,.quotient_o    (divider_lo)
,.remainder_o   (remainder_lo)
,.yumi_i        (ready_i)
);

/* outbound signals */
always_comb begin
    //if value of output exceeds 1 (decimal) then hard set to 1, otherwise keep normal output
    if (zero_bypass) data_n = 'd0;
    else if (sinh_lo[cordic_width_lp-1:precision+4] > 'd0 && tanh_sel_i)      data_n = {1'b1, precision'(0)};
    else if (divider_lo[internal_width_lp-1:precision] >= 'd1 || one_bypass)    data_n = {1'b1, precision'(0)};
    else             data_n = divider_lo[0+:ans_width_lp];
end

logic signed [ans_width_lp-1:0] data_r, data_n;
always_ff @(posedge clk_i) begin
    if (divider_v_o || one_bypass || zero_bypass)  begin
        //if sigmoid and negative input, correct by subtracting divider output from 1
        if (ang_i[ang_width_p-1] && ~tanh_sel_i) data_r <= {1'b1, shft_amt_lp'(0)} - data_n;
        //if tanh and negative input, flip back to negative
        else            data_r <= ang_i[ang_width_p-1] ? ~data_n + 1'b1 : data_n;
        end
    else                data_r <= data_r;
end

assign data_o = data_r;
assign val_o = state_r == e_DONE;
assign ready_o = (state_r == e_IDLE) && (sincos_ready_o);

endmodule""")
    return
    
angbitlen = (int)(sys.argv[1])
# Determined by the maximum input quantity into the module decided by the
# number of iterations and the corresponding maximum theta_max. Determine this
# length as 1-sign + 1-overflow bit + bit-length of [theta_max] + 'precision' bits.

ansbitlen = (int)(sys.argv[2])
# Determine this length by finding out the maximum of the sine and cosine hyperbolic
# corresponding to the theta_max. `ansbitlen` is equal to 1-sign + 1-overflow bit
# + bit-length of [sinh(theta_max)] + 'precision' bits.

negprec = (int)(sys.argv[3])
# Determine this by deciding the theta_max and `negprec` is the corresponding 'M' value.

posprec = (int)(sys.argv[4])

precision = (int)(sys.argv[5])

extriter = 1

bsg_exponential_main_initial(angbitlen, ansbitlen, negprec, posprec, extriter, precision)
main_body_print()

# This file object is used to create a header file facilitating the passing of parameters of the module to
# Verilator for testing purposes. 
f_params = open("params_def.h","w+")
f_params.write('#ifndef PARAMS_DEF\n')
f_params.write('#define PARAMS_DEF\n')
f_params.write('int anglen = %(g)d;\n'%{'g':angbitlen})
f_params.write('int anslen = %(s)d;\n'%{'s':ansbitlen})
f_params.write('int posiprec = %(p)d;\n'%{'p':posprec})
f_params.write('int negprec = %(n)d;\n'%{'n':negprec})
f_params.write('int precision = %(p)d;\n'%{'p':precision})
f_params.write('#endif')
f_params.close()
