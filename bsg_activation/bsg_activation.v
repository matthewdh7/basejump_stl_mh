
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

    module bsg_activation #(parameter 
         cordic_width_p = 32   //only affects sincos/divider calculations, not final data
        ,ang_width_p = 16
        ,precision = 10     //affects precision of intermediate calculations and final data
        /*
        THRESHOLD PARAMETERS: Input as an 8 bit binary value, xxx.xxxx ; if the
        input angle is greater than this value, the module will output 1 and bypass
        any calculations. Could increase size of parameter to allow more precise threshold.
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

    parameter SHFT_AMT = precision;
    parameter ans_width = precision+1; //default 17
    parameter internal_width = precision+4; //default 20
    parameter [ang_width_p-1:0] ZERO_THRESH = {(ang_width_p-6)'('d0), thresh_zero_p}; //can be adjusted based on precision chosen

    logic signed [ang_width_p-1:0] ang_n, ang_r;
    logic signed [cordic_width_p-1:0] sinh_lo, cosh_lo; 
    logic signed [internal_width-1:0] sinh, cosh, negExp; //negExp = e^-x
    logic signed [ans_width-1:0] data_r, data_n; 

    logic signed [internal_width+SHFT_AMT-1:0] dividend_li, divisor_li, remainder_lo, divider_lo;    //larger signals to account for shifting

    logic sincos_v_i, sincos_ready_o, sincos_v_o, divider_v_i, divider_ready_o, divider_v_o; //handshake signals
    logic one_bypass, load_ang, divider_sel, zero_bypass; //control signals

    wire [ang_width_p-1:0] thresh_tanh = {(ang_width_p-precision-3)'('d0), thresh_tanh_p, (precision-4)'('d0)};
    wire [ang_width_p-1:0] thresh_sig = {(ang_width_p-precision-3)'('d0), thresh_sig_p, (precision-4)'('d0)};
    
  
    /* state logic */
    enum {e_IDLE, e_SINCOS, e_DIVIDE, e_DONE} state_r, state_n;

    always_comb begin
        state_n = state_r;
        case (state_r)
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
        case (state_r)
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

    /* bypass sincos/divider if needed */
    assign sincos_v_i = (state_r == e_SINCOS) && ~one_bypass && ~zero_bypass;
    //assign sincos_v_i = 1;
    assign divider_v_i = (state_r == e_DIVIDE) && ~one_bypass && ~zero_bypass;

    /* input register */
    //if negative, flip using 2s comp and compute abs value
    assign ang_n = ang_i[ang_width_p-1] ? ~ang_i + 1'b1 : ang_i;

    always_ff @(posedge clk_i) begin
        if (reset_i)        ang_r <= 0;
        //occurs if val_i and ready_o
        else if (load_ang)  ang_r <= ang_n;
        else                ang_r <= ang_r;
    end

    /* sinh cosh module */
    bsg_cordic_sine_cosine_hyperbolic #(.neg_prec_p(6), .posi_prec_p(12), .extr_iter_p(1), .ans_width_p(cordic_width_p), .ang_width_p) sinhcosh
    (.clk_i
    ,.ang_i     (ang_r)
    ,.ready_i   (divider_ready_o)
    ,.val_i     (sincos_v_i)
    ,.sinh_o    (sinh_lo)
    ,.cosh_o    (cosh_lo)
    ,.ready_o   (sincos_ready_o)
    ,.val_o     (sincos_v_o)
    );
    //default 20 bits (16 decimal, 4 integer)
    assign sinh = sinh_lo[internal_width-1:0];
    assign cosh = cosh_lo[internal_width-1:0];
    assign negExp = cosh - sinh;
    /* tan divider unit */
    /*
    format: tanh_sel_i (high is for tanh, low is for sigmoid)
        first term: numerator (sinh for tanh, 1 for sigmoid)
        second term: denominator (cosh for tanh, 1 + e^-x for sigmoid)
    */
    assign dividend_li = tanh_sel_i ? {SHFT_AMT'('d0), sinh} << SHFT_AMT : {(internal_width-1)'('d0), 1'b1, precision'('d0)} << SHFT_AMT;
    assign divisor_li = tanh_sel_i ? {SHFT_AMT'('d0), cosh} : {SHFT_AMT'('d0), negExp[internal_width-1:SHFT_AMT] + 1'b1, negExp[SHFT_AMT-1:0]};

    bsg_idiv_iterative #(.width_p(internal_width+SHFT_AMT)) divider
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

    //this value is equal to 1 in the fixed point notation, determined by shftamt and ans_width:
    // {{cordic_width_p-SHFT_AMT-1{1'b0}}, 1'b1, {SHFT_AMT{1'b0}}}
    
    /* outbound signals */
    always_comb begin
        //if value of output exceeds 1 (decimal) then hard set to 1, otherwise keep normal output
        if (zero_bypass) data_n = 'd0;
        else if (sinh_lo[cordic_width_p-1:precision+4] > 'd0 && tanh_sel_i)      data_n = {1'b1, {precision{1'b0}}};
        else if (divider_lo[internal_width-1:precision] >= 'd1 || one_bypass)    data_n = {1'b1, {precision{1'b0}}};
        else             data_n = divider_lo[ans_width-1:0];
    end

    always_ff @(posedge clk_i) begin
        if (divider_v_o || one_bypass || zero_bypass)  begin
            //if sigmoid and negative input, correct by subtracting divider output from 1
            if (ang_i[ang_width_p-1] && ~tanh_sel_i) data_r <= {1'b1, {SHFT_AMT{1'b0}}} - data_n;
            //if tanh and negative input, flip back to negative
            else            data_r <= ang_i[ang_width_p-1] ? ~data_n + 1'b1 : data_n;
            end
        else                data_r <= data_r;
    end

    assign data_o = data_r;
    assign val_o = state_r == e_DONE;
    assign ready_o = (state_r == e_IDLE) && (sincos_ready_o);
    
    endmodule
