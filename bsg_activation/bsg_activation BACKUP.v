
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
         ans_width_p = 32
        ,ang_width_p = 21
        ,precision = 16
        /*
        THRESHOLD PARAMETERS: Input as an 8 bit binary value, xxxx.xxxx ; if the
        input angle is greater than this value, the module will output 1 and bypass
        any calculations. Could increase size of parameter to allow more precise threshold.
        */
        ,parameter [7:0] thresh_tanh_p = 8'b00111100 //3.75 decimal
        ,parameter [7:0] thresh_sig_p = 8'b01110000 //7.00 decimal
    ) (
     input clk_i
    ,input signed [ang_width_p-1:0] ang_i
    ,input ready_i
    ,input val_i
    ,input reset_i
    ,input tanh_sel_i
    ,output signed [ans_width_p-1:0] data_o
    ,output ready_o
    ,output val_o
    );

    parameter SHFT_AMT = 16;

    logic signed [ang_width_p-1:0] ang_n, ang_r;
    logic signed [ans_width_p-1:0] sinh_lo, cosh_lo, negExp, data_r, data_n; //negExp = e^-x
    logic signed [ans_width_p+SHFT_AMT-1:0] dividend_li, divisor_li, remainder_lo, divider_lo;    //larger signals to account for shifting
    logic sincos_v_i, sincos_ready_o, sincos_v_o, divider_v_i, divider_ready_o, divider_v_o; //handshake signals
    logic bypass, load_ang, divider_sel; //control signals

    wire [ang_width_p-1:0] thresh_tanh = {(ang_width_p-precision-4)'('d0), thresh_tanh_p, (precision-4)'('d0)};
    wire [ang_width_p-1:0] thresh_sig = {(ang_width_p-precision-4)'('d0), thresh_sig_p, (precision-4)'('d0)};
    
  
    /* state logic */
    enum logic [1:0] {e_IDLE, e_SINCOS, e_DIVIDE, e_DONE} state_r, state_n;

    always_comb begin
        state_n = state_r;
        case (state_r)
            e_IDLE: begin
                if (ready_o && val_i) begin 
                    if (bypass) state_n = e_DONE;
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
        bypass = 0;
        load_ang = 0;
        divider_sel = 0;
        case (state_r)
            e_IDLE: begin 
                if (val_i && ready_o) load_ang = 1;
                if (ang_n > (tanh_sel_i ? thresh_tanh : thresh_sig)) bypass = 1;
            end
            e_SINCOS: if (tanh_sel_i) divider_sel = 1;
            default: begin
                bypass = 0;
                load_ang = 0;
                divider_sel = 0;
            end
        endcase
    end

    /* bypass sincos/divider if needed */
    assign sincos_v_i = (state_r == e_SINCOS) && ~bypass;
    assign divider_v_i = (state_r == e_DIVIDE) && ~bypass;

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
    bsg_cordic_sine_cosine_hyperbolic #(.neg_prec_p(6), .posi_prec_p(12), .extr_iter_p(1), .ans_width_p, .ang_width_p) sinhcosh
    (.clk_i
    ,.ang_i     (ang_r)
    ,.ready_i   (divider_ready_o)
    ,.val_i     (sincos_v_i)
    ,.sinh_o    (sinh_lo)
    ,.cosh_o    (cosh_lo)
    ,.ready_o   (sincos_ready_o)
    ,.val_o     (sincos_v_o)
    );

    assign negExp = cosh_lo - sinh_lo;
    /* tan divider unit */
    /*format: tanh_sel_i (high is for tanh, low is for sigmoid)
                first term: numerator (sinh for tanh, 1 for sigmoid)
                second term: denominator (cosh for tanh, 1 + e^-x for sigmoid)
    */
    assign dividend_li = tanh_sel_i ? {SHFT_AMT'('d0), sinh_lo} << SHFT_AMT : {(ans_width_p-1)'('d0), 1'b1, SHFT_AMT'('d0)} << SHFT_AMT;
    assign divisor_li = tanh_sel_i ? {SHFT_AMT'('d0), cosh_lo} : {SHFT_AMT'('d0), negExp[ans_width_p-1:SHFT_AMT] + 1'b1, negExp[SHFT_AMT-1:0]};

    bsg_idiv_iterative #(.width_p(ans_width_p+SHFT_AMT)) divider
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
    // {{ans_width_p-SHFT_AMT-1{1'b0}}, 1'b1, {SHFT_AMT{1'b0}}}
    
    /* outbound signals */
    always_comb begin
        //if value of output exceeds 1 (decimal) then hard set to 1, otherwise keep normal output
        if (divider_lo[ans_width_p+SHFT_AMT-1:SHFT_AMT] >= 'd1 || bypass)    data_n = {{ans_width_p-SHFT_AMT-1{1'b0}}, 1'b1, {SHFT_AMT{1'b0}}};
        else                                        data_n = divider_lo[ans_width_p-1:0];
    end

    always_ff @(posedge clk_i) begin
        if (divider_v_o || bypass)  begin
            //if sigmoid and negative input, correct by subtracting divider output from 1
            if (ang_i[ang_width_p-1] && ~tanh_sel_i) data_r <= {{ans_width_p-SHFT_AMT-1{1'b0}}, 1'b1, {SHFT_AMT{1'b0}}} - data_n;
            //if tanh and negative input, flip back to negative
            else            data_r <= ang_i[ang_width_p-1] ? ~data_n + 1'b1 : data_n;
            end
        else                data_r <= data_r;
    end

    assign data_o = data_r;
    assign val_o = state_r == e_DONE;
    assign ready_o = (state_r == e_IDLE) && (sincos_ready_o);
    
    endmodule
