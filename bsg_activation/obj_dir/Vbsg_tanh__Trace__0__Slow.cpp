// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_tanh__Syms.h"


VL_ATTR_COLD void Vbsg_tanh___024root__trace_init_sub__TOP__0(Vbsg_tanh___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBus(c+566,"ang_i", false,-1, 20,0);
    tracep->declBit(c+567,"ready_i", false,-1);
    tracep->declBit(c+568,"val_i", false,-1);
    tracep->declBit(c+569,"reset_i", false,-1);
    tracep->declBit(c+570,"tanh_sel_i", false,-1);
    tracep->declBit(c+571,"neg_sel_i", false,-1);
    tracep->declBus(c+572,"data_o", false,-1, 31,0);
    tracep->declBit(c+573,"ready_o", false,-1);
    tracep->declBit(c+574,"val_o", false,-1);
    tracep->pushNamePrefix("bsg_tanh ");
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+578,"precision", false,-1, 31,0);
    tracep->declBus(c+579,"thresh_tanh_p", false,-1, 4,0);
    tracep->declBus(c+580,"thresh_sig_p", false,-1, 4,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBus(c+566,"ang_i", false,-1, 20,0);
    tracep->declBit(c+567,"ready_i", false,-1);
    tracep->declBit(c+568,"val_i", false,-1);
    tracep->declBit(c+569,"reset_i", false,-1);
    tracep->declBit(c+570,"tanh_sel_i", false,-1);
    tracep->declBit(c+571,"neg_sel_i", false,-1);
    tracep->declBus(c+572,"data_o", false,-1, 31,0);
    tracep->declBit(c+573,"ready_o", false,-1);
    tracep->declBit(c+574,"val_o", false,-1);
    tracep->declBus(c+578,"SHFT_AMT", false,-1, 31,0);
    tracep->declBus(c+1,"ang_r", false,-1, 20,0);
    tracep->declBus(c+2,"sinh_lo", false,-1, 31,0);
    tracep->declBus(c+3,"cosh_lo", false,-1, 31,0);
    tracep->declBus(c+4,"negExp", false,-1, 31,0);
    tracep->declBus(c+5,"data_r", false,-1, 31,0);
    tracep->declBus(c+427,"data_n", false,-1, 31,0);
    tracep->declQuad(c+428,"dividend_li", false,-1, 47,0);
    tracep->declQuad(c+430,"divisor_li", false,-1, 47,0);
    tracep->declQuad(c+6,"remainder_lo", false,-1, 47,0);
    tracep->declQuad(c+8,"divider_lo", false,-1, 47,0);
    tracep->declBit(c+575,"sincos_v_i", false,-1);
    tracep->declBit(c+10,"sincos_ready_o", false,-1);
    tracep->declBit(c+11,"sincos_v_o", false,-1);
    tracep->declBit(c+432,"divider_v_i", false,-1);
    tracep->declBit(c+12,"divider_ready_o", false,-1);
    tracep->declBit(c+13,"divider_v_o", false,-1);
    tracep->declBit(c+433,"bypass", false,-1);
    tracep->declBit(c+434,"load_ang", false,-1);
    tracep->declBit(c+435,"divider_sel", false,-1);
    tracep->declBus(c+581,"thresh_tanh", false,-1, 20,0);
    tracep->declBus(c+582,"thresh_sig", false,-1, 20,0);
    tracep->declBus(c+14,"state_r", false,-1, 1,0);
    tracep->declBus(c+436,"state_n", false,-1, 1,0);
    tracep->pushNamePrefix("divider ");
    tracep->declBus(c+583,"width_p", false,-1, 31,0);
    tracep->declBus(c+584,"bitstack_p", false,-1, 31,0);
    tracep->declBus(c+585,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBit(c+569,"reset_i", false,-1);
    tracep->declBit(c+432,"v_i", false,-1);
    tracep->declBit(c+12,"ready_and_o", false,-1);
    tracep->declQuad(c+428,"dividend_i", false,-1, 47,0);
    tracep->declQuad(c+430,"divisor_i", false,-1, 47,0);
    tracep->declBit(c+586,"signed_div_i", false,-1);
    tracep->declBit(c+13,"v_o", false,-1);
    tracep->declQuad(c+8,"quotient_o", false,-1, 47,0);
    tracep->declQuad(c+6,"remainder_o", false,-1, 47,0);
    tracep->declBit(c+567,"yumi_i", false,-1);
    tracep->declQuad(c+15,"opA_r", false,-1, 48,0);
    tracep->declQuad(c+17,"opC_r", false,-1, 48,0);
    tracep->declBit(c+19,"signed_div_r", false,-1);
    tracep->declBit(c+437,"divisor_msb", false,-1);
    tracep->declBit(c+438,"dividend_msb", false,-1);
    tracep->declBit(c+439,"latch_signed_div_lo", false,-1);
    tracep->declBit(c+20,"zero_divisor_li", false,-1);
    tracep->declBus(c+440,"opA_sel_lo", false,-1, 1,0);
    tracep->declQuad(c+441,"opA_mux", false,-1, 48,0);
    tracep->declQuad(c+21,"add1_out", false,-1, 48,0);
    tracep->declQuad(c+587,"add2_out", false,-1, 48,0);
    tracep->declQuad(c+23,"opB_mux", false,-1, 48,0);
    tracep->declQuad(c+443,"opC_mux", false,-1, 48,0);
    tracep->declBus(c+25,"opB_sel_lo", false,-1, 2,0);
    tracep->declBus(c+445,"opC_sel_lo", false,-1, 2,0);
    tracep->declBit(c+446,"opA_ld_lo", false,-1);
    tracep->declBit(c+26,"opB_ld_lo", false,-1);
    tracep->declQuad(c+27,"opB_r", false,-1, 48,0);
    tracep->declBit(c+447,"opC_ld_lo", false,-1);
    tracep->declBit(c+29,"opA_inv_lo", false,-1);
    tracep->declBit(c+30,"opB_inv_lo", false,-1);
    tracep->declBit(c+31,"opA_clr_lo", false,-1);
    tracep->declBit(c+32,"opB_clr_lo", false,-1);
    tracep->declQuad(c+33,"add1_in0", false,-1, 48,0);
    tracep->declQuad(c+35,"add1_in1", false,-1, 48,0);
    tracep->declQuad(c+589,"add2_in0", false,-1, 48,0);
    tracep->declQuad(c+591,"add2_in1", false,-1, 48,0);
    tracep->declBit(c+37,"adder1_cin_lo", false,-1);
    tracep->pushNamePrefix("adder1 ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declQuad(c+33,"a_i", false,-1, 48,0);
    tracep->declQuad(c+35,"b_i", false,-1, 48,0);
    tracep->declBit(c+37,"cin_i", false,-1);
    tracep->declQuad(c+21,"o", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+583,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBit(c+569,"reset_i", false,-1);
    tracep->declBit(c+432,"v_i", false,-1);
    tracep->declBit(c+12,"ready_and_o", false,-1);
    tracep->declBit(c+20,"zero_divisor_i", false,-1);
    tracep->declBit(c+19,"signed_div_r_i", false,-1);
    tracep->declBit(c+38,"adder1_result_is_neg_i", false,-1);
    tracep->declBit(c+594,"adder2_result_is_neg_i", false,-1);
    tracep->declBit(c+39,"opA_is_neg_i", false,-1);
    tracep->declBit(c+40,"opC_is_neg_i", false,-1);
    tracep->declBus(c+440,"opA_sel_o", false,-1, 1,0);
    tracep->declBit(c+446,"opA_ld_o", false,-1);
    tracep->declBit(c+29,"opA_inv_o", false,-1);
    tracep->declBit(c+31,"opA_clr_l_o", false,-1);
    tracep->declBus(c+25,"opB_sel_o", false,-1, 2,0);
    tracep->declBit(c+26,"opB_ld_o", false,-1);
    tracep->declBit(c+30,"opB_inv_o", false,-1);
    tracep->declBit(c+32,"opB_clr_l_o", false,-1);
    tracep->declBus(c+445,"opC_sel_o", false,-1, 2,0);
    tracep->declBit(c+447,"opC_ld_o", false,-1);
    tracep->declBit(c+439,"latch_signed_div_o", false,-1);
    tracep->declBit(c+37,"adder1_cin_o", false,-1);
    tracep->declBit(c+13,"v_o", false,-1);
    tracep->declBit(c+567,"yumi_i", false,-1);
    tracep->declBit(c+41,"q_neg_r", false,-1);
    tracep->declBit(c+42,"r_neg_r", false,-1);
    tracep->declBit(c+43,"neg_ld", false,-1);
    tracep->declBit(c+44,"add1_neg_last_r", false,-1);
    tracep->declBit(c+45,"add2_neg_last_r", false,-1);
    tracep->declBus(c+46,"state", false,-1, 5,0);
    tracep->declBus(c+448,"next_state", false,-1, 5,0);
    tracep->declBus(c+47,"calc_cnt", false,-1, 5,0);
    tracep->declBit(c+48,"calc_up_li", false,-1);
    tracep->declBit(c+49,"calc_done", false,-1);
    tracep->pushNamePrefix("calc_counter ");
    tracep->declBus(c+583,"max_val_p", false,-1, 31,0);
    tracep->declBus(c+584,"init_val_p", false,-1, 31,0);
    tracep->declBus(c+595,"ptr_width_lp", false,-1, 31,0);
    tracep->declBus(c+585,"disable_overflow_warning_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBit(c+569,"reset_i", false,-1);
    tracep->declBit(c+49,"clear_i", false,-1);
    tracep->declBit(c+48,"up_i", false,-1);
    tracep->declBus(c+47,"count_o", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("muxB ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+596,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+50,"data_i", false,-1, 146,0);
    tracep->declBus(c+25,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+23,"data_o", false,-1, 48,0);
    tracep->declArray(c+55,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+60,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+61,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+62,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+63,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+64,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+65,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+66,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+67,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+68,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+69,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+70,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+71,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+72,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+73,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+74,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+75,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+76,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+77,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+78,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+79,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+80,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+81,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+82,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+83,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+84,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+85,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+86,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+87,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+88,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+89,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+90,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+91,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+92,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+93,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+94,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+95,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+96,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+97,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+98,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+99,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+100,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+101,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+102,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+103,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+104,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+105,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+106,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+107,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+108,"gather", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("muxC ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+596,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+449,"data_i", false,-1, 146,0);
    tracep->declBus(c+445,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+443,"data_o", false,-1, 48,0);
    tracep->declArray(c+454,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+459,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+460,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+461,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+462,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+463,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+464,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+465,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+466,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+467,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+468,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+469,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+470,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+471,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+472,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+473,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+474,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+475,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+476,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+477,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+478,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+479,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+480,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+481,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+482,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+483,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+484,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+485,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+486,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+487,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+488,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+489,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+490,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+491,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+492,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+493,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+494,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+495,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+496,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+497,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+498,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+499,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+500,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+501,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+502,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+503,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+504,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+505,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+506,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+507,"gather", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("muxA ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+597,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+508,"data_i", false,-1, 97,0);
    tracep->declBus(c+440,"sel_one_hot_i", false,-1, 1,0);
    tracep->declQuad(c+441,"data_o", false,-1, 48,0);
    tracep->declArray(c+512,"data_masked", false,-1, 97,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+516,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+517,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+518,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+519,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+520,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+521,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+522,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+523,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+524,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+525,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+526,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+527,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+528,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+529,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+530,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+531,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+532,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+533,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+534,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+535,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+536,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+537,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+538,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+539,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+540,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+541,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+542,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+543,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+544,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+545,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+546,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+547,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+548,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+549,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+550,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+551,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+552,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+553,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+554,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+555,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+556,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+557,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+558,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+559,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+560,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+561,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+562,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+563,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+564,"gather", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("opA_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declQuad(c+441,"data_i", false,-1, 48,0);
    tracep->declBit(c+446,"en_i", false,-1);
    tracep->declQuad(c+15,"data_o", false,-1, 48,0);
    tracep->declQuad(c+15,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opB_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declQuad(c+23,"data_i", false,-1, 48,0);
    tracep->declBit(c+26,"en_i", false,-1);
    tracep->declQuad(c+27,"data_o", false,-1, 48,0);
    tracep->declQuad(c+27,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opC_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declQuad(c+443,"data_i", false,-1, 48,0);
    tracep->declBit(c+447,"en_i", false,-1);
    tracep->declQuad(c+17,"data_o", false,-1, 48,0);
    tracep->declQuad(c+17,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_reg ");
    tracep->declBus(c+585,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBus(c+586,"data_i", false,-1, 0,0);
    tracep->declBit(c+439,"en_i", false,-1);
    tracep->declBus(c+19,"data_o", false,-1, 0,0);
    tracep->declBus(c+19,"data_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sinhcosh ");
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+598,"posi_prec_p", false,-1, 31,0);
    tracep->declBus(c+585,"extr_iter_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBit(c+565,"clk_i", false,-1);
    tracep->declBus(c+1,"ang_i", false,-1, 20,0);
    tracep->declBit(c+12,"ready_i", false,-1);
    tracep->declBit(c+575,"val_i", false,-1);
    tracep->declBus(c+2,"sinh_o", false,-1, 31,0);
    tracep->declBus(c+3,"cosh_o", false,-1, 31,0);
    tracep->declBit(c+10,"ready_o", false,-1);
    tracep->declBit(c+11,"val_o", false,-1);
    tracep->declArray(c+109,"x", false,-1, 671,0);
    tracep->declArray(c+130,"y", false,-1, 671,0);
    tracep->declArray(c+151,"ang", false,-1, 440,0);
    tracep->declBus(c+165,"val", false,-1, 20,0);
    tracep->declArray(c+166,"x_ans", false,-1, 639,0);
    tracep->declArray(c+186,"y_ans", false,-1, 639,0);
    tracep->declArray(c+206,"ang_ans", false,-1, 419,0);
    tracep->declBus(c+220,"val_ans", false,-1, 19,0);
    tracep->declBit(c+221,"stall_pipe", false,-1);
    tracep->declArray(c+599,"ang_lookup_lp", false,-1, 398,0);
    tracep->declBus(c+612,"x_start", false,-1, 31,0);
    tracep->declBus(c+613,"y_start", false,-1, 31,0);
    tracep->pushNamePrefix("stage_neg[0] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+584,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+222,"x_i", false,-1, 31,0);
    tracep->declBus(c+223,"y_i", false,-1, 31,0);
    tracep->declBus(c+224,"ang_i", false,-1, 20,0);
    tracep->declBus(c+614,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+225,"val_i", false,-1);
    tracep->declBus(c+226,"x_o", false,-1, 31,0);
    tracep->declBus(c+227,"y_o", false,-1, 31,0);
    tracep->declBus(c+228,"ang_o", false,-1, 20,0);
    tracep->declBit(c+225,"val_o", false,-1);
    tracep->declBus(c+229,"y_shift", false,-1, 31,0);
    tracep->declBus(c+230,"x_shift", false,-1, 31,0);
    tracep->declBit(c+231,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[1] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+585,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+232,"x_i", false,-1, 31,0);
    tracep->declBus(c+233,"y_i", false,-1, 31,0);
    tracep->declBus(c+234,"ang_i", false,-1, 20,0);
    tracep->declBus(c+615,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+235,"val_i", false,-1);
    tracep->declBus(c+236,"x_o", false,-1, 31,0);
    tracep->declBus(c+237,"y_o", false,-1, 31,0);
    tracep->declBus(c+238,"ang_o", false,-1, 20,0);
    tracep->declBit(c+235,"val_o", false,-1);
    tracep->declBus(c+239,"y_shift", false,-1, 31,0);
    tracep->declBus(c+240,"x_shift", false,-1, 31,0);
    tracep->declBit(c+241,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[2] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+597,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+242,"x_i", false,-1, 31,0);
    tracep->declBus(c+243,"y_i", false,-1, 31,0);
    tracep->declBus(c+244,"ang_i", false,-1, 20,0);
    tracep->declBus(c+616,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+245,"val_i", false,-1);
    tracep->declBus(c+246,"x_o", false,-1, 31,0);
    tracep->declBus(c+247,"y_o", false,-1, 31,0);
    tracep->declBus(c+248,"ang_o", false,-1, 20,0);
    tracep->declBit(c+245,"val_o", false,-1);
    tracep->declBus(c+249,"y_shift", false,-1, 31,0);
    tracep->declBus(c+250,"x_shift", false,-1, 31,0);
    tracep->declBit(c+251,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[3] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+596,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+252,"x_i", false,-1, 31,0);
    tracep->declBus(c+253,"y_i", false,-1, 31,0);
    tracep->declBus(c+254,"ang_i", false,-1, 20,0);
    tracep->declBus(c+617,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+255,"val_i", false,-1);
    tracep->declBus(c+256,"x_o", false,-1, 31,0);
    tracep->declBus(c+257,"y_o", false,-1, 31,0);
    tracep->declBus(c+258,"ang_o", false,-1, 20,0);
    tracep->declBit(c+255,"val_o", false,-1);
    tracep->declBus(c+259,"y_shift", false,-1, 31,0);
    tracep->declBus(c+260,"x_shift", false,-1, 31,0);
    tracep->declBit(c+261,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[4] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+618,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+262,"x_i", false,-1, 31,0);
    tracep->declBus(c+263,"y_i", false,-1, 31,0);
    tracep->declBus(c+264,"ang_i", false,-1, 20,0);
    tracep->declBus(c+619,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+265,"val_i", false,-1);
    tracep->declBus(c+266,"x_o", false,-1, 31,0);
    tracep->declBus(c+267,"y_o", false,-1, 31,0);
    tracep->declBus(c+268,"ang_o", false,-1, 20,0);
    tracep->declBit(c+265,"val_o", false,-1);
    tracep->declBus(c+269,"y_shift", false,-1, 31,0);
    tracep->declBus(c+270,"x_shift", false,-1, 31,0);
    tracep->declBit(c+271,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[5] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+620,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+272,"x_i", false,-1, 31,0);
    tracep->declBus(c+273,"y_i", false,-1, 31,0);
    tracep->declBus(c+274,"ang_i", false,-1, 20,0);
    tracep->declBus(c+621,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+275,"val_i", false,-1);
    tracep->declBus(c+276,"x_o", false,-1, 31,0);
    tracep->declBus(c+277,"y_o", false,-1, 31,0);
    tracep->declBus(c+278,"ang_o", false,-1, 20,0);
    tracep->declBit(c+275,"val_o", false,-1);
    tracep->declBus(c+279,"y_shift", false,-1, 31,0);
    tracep->declBus(c+280,"x_shift", false,-1, 31,0);
    tracep->declBit(c+281,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[6] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+595,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+282,"x_i", false,-1, 31,0);
    tracep->declBus(c+283,"y_i", false,-1, 31,0);
    tracep->declBus(c+284,"ang_i", false,-1, 20,0);
    tracep->declBus(c+622,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+285,"val_i", false,-1);
    tracep->declBus(c+286,"x_o", false,-1, 31,0);
    tracep->declBus(c+287,"y_o", false,-1, 31,0);
    tracep->declBus(c+288,"ang_o", false,-1, 20,0);
    tracep->declBit(c+285,"val_o", false,-1);
    tracep->declBus(c+289,"y_shift", false,-1, 31,0);
    tracep->declBus(c+290,"x_shift", false,-1, 31,0);
    tracep->declBit(c+291,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_pos[10] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+623,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+292,"x_i", false,-1, 31,0);
    tracep->declBus(c+293,"y_i", false,-1, 31,0);
    tracep->declBus(c+294,"ang_i", false,-1, 20,0);
    tracep->declBus(c+624,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+295,"val_i", false,-1);
    tracep->declBus(c+296,"x_o", false,-1, 31,0);
    tracep->declBus(c+297,"y_o", false,-1, 31,0);
    tracep->declBus(c+298,"ang_o", false,-1, 20,0);
    tracep->declBit(c+295,"val_o", false,-1);
    tracep->declBus(c+299,"y_shift", false,-1, 31,0);
    tracep->declBus(c+300,"x_shift", false,-1, 31,0);
    tracep->declBit(c+301,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+623,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+302,"x_i", false,-1, 31,0);
    tracep->declBus(c+303,"y_i", false,-1, 31,0);
    tracep->declBus(c+304,"ang_i", false,-1, 20,0);
    tracep->declBus(c+624,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+305,"val_i", false,-1);
    tracep->declBus(c+306,"x_o", false,-1, 31,0);
    tracep->declBus(c+307,"y_o", false,-1, 31,0);
    tracep->declBus(c+308,"ang_o", false,-1, 20,0);
    tracep->declBit(c+305,"val_o", false,-1);
    tracep->declBus(c+309,"y_shift", false,-1, 31,0);
    tracep->declBus(c+310,"x_shift", false,-1, 31,0);
    tracep->declBit(c+311,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[11] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+625,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+312,"x_i", false,-1, 31,0);
    tracep->declBus(c+313,"y_i", false,-1, 31,0);
    tracep->declBus(c+314,"ang_i", false,-1, 20,0);
    tracep->declBus(c+626,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+315,"val_i", false,-1);
    tracep->declBus(c+316,"x_o", false,-1, 31,0);
    tracep->declBus(c+317,"y_o", false,-1, 31,0);
    tracep->declBus(c+318,"ang_o", false,-1, 20,0);
    tracep->declBit(c+315,"val_o", false,-1);
    tracep->declBus(c+319,"y_shift", false,-1, 31,0);
    tracep->declBus(c+320,"x_shift", false,-1, 31,0);
    tracep->declBit(c+321,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[12] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+598,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+322,"x_i", false,-1, 31,0);
    tracep->declBus(c+323,"y_i", false,-1, 31,0);
    tracep->declBus(c+324,"ang_i", false,-1, 20,0);
    tracep->declBus(c+627,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+325,"val_i", false,-1);
    tracep->declBus(c+326,"x_o", false,-1, 31,0);
    tracep->declBus(c+327,"y_o", false,-1, 31,0);
    tracep->declBus(c+328,"ang_o", false,-1, 20,0);
    tracep->declBit(c+325,"val_o", false,-1);
    tracep->declBus(c+329,"y_shift", false,-1, 31,0);
    tracep->declBus(c+330,"x_shift", false,-1, 31,0);
    tracep->declBit(c+331,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[13] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+628,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+332,"x_i", false,-1, 31,0);
    tracep->declBus(c+333,"y_i", false,-1, 31,0);
    tracep->declBus(c+334,"ang_i", false,-1, 20,0);
    tracep->declBus(c+629,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+335,"val_i", false,-1);
    tracep->declBus(c+336,"x_o", false,-1, 31,0);
    tracep->declBus(c+337,"y_o", false,-1, 31,0);
    tracep->declBus(c+338,"ang_o", false,-1, 20,0);
    tracep->declBit(c+335,"val_o", false,-1);
    tracep->declBus(c+339,"y_shift", false,-1, 31,0);
    tracep->declBus(c+340,"x_shift", false,-1, 31,0);
    tracep->declBit(c+341,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[14] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+630,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+342,"x_i", false,-1, 31,0);
    tracep->declBus(c+343,"y_i", false,-1, 31,0);
    tracep->declBus(c+344,"ang_i", false,-1, 20,0);
    tracep->declBus(c+631,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+345,"val_i", false,-1);
    tracep->declBus(c+346,"x_o", false,-1, 31,0);
    tracep->declBus(c+347,"y_o", false,-1, 31,0);
    tracep->declBus(c+348,"ang_o", false,-1, 20,0);
    tracep->declBit(c+345,"val_o", false,-1);
    tracep->declBus(c+349,"y_shift", false,-1, 31,0);
    tracep->declBus(c+350,"x_shift", false,-1, 31,0);
    tracep->declBit(c+351,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[15] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+632,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+352,"x_i", false,-1, 31,0);
    tracep->declBus(c+353,"y_i", false,-1, 31,0);
    tracep->declBus(c+354,"ang_i", false,-1, 20,0);
    tracep->declBus(c+633,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+355,"val_i", false,-1);
    tracep->declBus(c+356,"x_o", false,-1, 31,0);
    tracep->declBus(c+357,"y_o", false,-1, 31,0);
    tracep->declBus(c+358,"ang_o", false,-1, 20,0);
    tracep->declBit(c+355,"val_o", false,-1);
    tracep->declBus(c+359,"y_shift", false,-1, 31,0);
    tracep->declBus(c+360,"x_shift", false,-1, 31,0);
    tracep->declBit(c+361,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[16] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+578,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+362,"x_i", false,-1, 31,0);
    tracep->declBus(c+363,"y_i", false,-1, 31,0);
    tracep->declBus(c+364,"ang_i", false,-1, 20,0);
    tracep->declBus(c+634,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+365,"val_i", false,-1);
    tracep->declBus(c+366,"x_o", false,-1, 31,0);
    tracep->declBus(c+367,"y_o", false,-1, 31,0);
    tracep->declBus(c+368,"ang_o", false,-1, 20,0);
    tracep->declBit(c+365,"val_o", false,-1);
    tracep->declBus(c+369,"y_shift", false,-1, 31,0);
    tracep->declBus(c+370,"x_shift", false,-1, 31,0);
    tracep->declBit(c+371,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[17] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+635,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+372,"x_i", false,-1, 31,0);
    tracep->declBus(c+373,"y_i", false,-1, 31,0);
    tracep->declBus(c+374,"ang_i", false,-1, 20,0);
    tracep->declBus(c+636,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+375,"val_i", false,-1);
    tracep->declBus(c+376,"x_o", false,-1, 31,0);
    tracep->declBus(c+377,"y_o", false,-1, 31,0);
    tracep->declBus(c+378,"ang_o", false,-1, 20,0);
    tracep->declBit(c+375,"val_o", false,-1);
    tracep->declBus(c+379,"y_shift", false,-1, 31,0);
    tracep->declBus(c+380,"x_shift", false,-1, 31,0);
    tracep->declBit(c+381,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[18] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+637,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+372,"x_i", false,-1, 31,0);
    tracep->declBus(c+373,"y_i", false,-1, 31,0);
    tracep->declBus(c+374,"ang_i", false,-1, 20,0);
    tracep->declBus(c+638,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+375,"val_i", false,-1);
    tracep->declBus(c+382,"x_o", false,-1, 31,0);
    tracep->declBus(c+383,"y_o", false,-1, 31,0);
    tracep->declBus(c+384,"ang_o", false,-1, 20,0);
    tracep->declBit(c+375,"val_o", false,-1);
    tracep->declBus(c+385,"y_shift", false,-1, 31,0);
    tracep->declBus(c+386,"x_shift", false,-1, 31,0);
    tracep->declBit(c+381,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+637,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+387,"x_i", false,-1, 31,0);
    tracep->declBus(c+388,"y_i", false,-1, 31,0);
    tracep->declBus(c+389,"ang_i", false,-1, 20,0);
    tracep->declBus(c+638,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+390,"val_i", false,-1);
    tracep->declBus(c+391,"x_o", false,-1, 31,0);
    tracep->declBus(c+392,"y_o", false,-1, 31,0);
    tracep->declBus(c+393,"ang_o", false,-1, 20,0);
    tracep->declBit(c+390,"val_o", false,-1);
    tracep->declBus(c+394,"y_shift", false,-1, 31,0);
    tracep->declBus(c+395,"x_shift", false,-1, 31,0);
    tracep->declBit(c+396,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[7] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+639,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+397,"x_i", false,-1, 31,0);
    tracep->declBus(c+398,"y_i", false,-1, 31,0);
    tracep->declBus(c+399,"ang_i", false,-1, 20,0);
    tracep->declBus(c+640,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+400,"val_i", false,-1);
    tracep->declBus(c+401,"x_o", false,-1, 31,0);
    tracep->declBus(c+402,"y_o", false,-1, 31,0);
    tracep->declBus(c+403,"ang_o", false,-1, 20,0);
    tracep->declBit(c+400,"val_o", false,-1);
    tracep->declBus(c+404,"y_shift", false,-1, 31,0);
    tracep->declBus(c+405,"x_shift", false,-1, 31,0);
    tracep->declBit(c+406,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[8] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+641,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+407,"x_i", false,-1, 31,0);
    tracep->declBus(c+408,"y_i", false,-1, 31,0);
    tracep->declBus(c+409,"ang_i", false,-1, 20,0);
    tracep->declBus(c+642,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+410,"val_i", false,-1);
    tracep->declBus(c+411,"x_o", false,-1, 31,0);
    tracep->declBus(c+412,"y_o", false,-1, 31,0);
    tracep->declBus(c+413,"ang_o", false,-1, 20,0);
    tracep->declBit(c+410,"val_o", false,-1);
    tracep->declBus(c+414,"y_shift", false,-1, 31,0);
    tracep->declBus(c+415,"x_shift", false,-1, 31,0);
    tracep->declBit(c+416,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[9] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+643,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+417,"x_i", false,-1, 31,0);
    tracep->declBus(c+418,"y_i", false,-1, 31,0);
    tracep->declBus(c+419,"ang_i", false,-1, 20,0);
    tracep->declBus(c+644,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+420,"val_i", false,-1);
    tracep->declBus(c+421,"x_o", false,-1, 31,0);
    tracep->declBus(c+422,"y_o", false,-1, 31,0);
    tracep->declBus(c+423,"ang_o", false,-1, 20,0);
    tracep->declBit(c+420,"val_o", false,-1);
    tracep->declBus(c+424,"y_shift", false,-1, 31,0);
    tracep->declBus(c+425,"x_shift", false,-1, 31,0);
    tracep->declBit(c+426,"rot_op", false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vbsg_tanh___024root__trace_init_top(Vbsg_tanh___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_init_top\n"); );
    // Body
    Vbsg_tanh___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbsg_tanh___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_tanh___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_tanh___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbsg_tanh___024root__trace_register(Vbsg_tanh___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbsg_tanh___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbsg_tanh___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbsg_tanh___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbsg_tanh___024root__trace_full_sub_0(Vbsg_tanh___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbsg_tanh___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_full_top_0\n"); );
    // Init
    Vbsg_tanh___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_tanh___024root*>(voidSelf);
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbsg_tanh___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<13>/*415:0*/ Vbsg_tanh__ConstPool__CONST_h154117da_0;

VL_ATTR_COLD void Vbsg_tanh___024root__trace_full_sub_0(Vbsg_tanh___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->bsg_tanh__DOT__ang_r),21);
    bufp->fullIData(oldp+2,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
    bufp->fullIData(oldp+3,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
    bufp->fullIData(oldp+4,(vlSelf->bsg_tanh__DOT__negExp),32);
    bufp->fullIData(oldp+5,(vlSelf->bsg_tanh__DOT__data_r),32);
    bufp->fullQData(oldp+6,((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
    bufp->fullQData(oldp+8,((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
    bufp->fullBit(oldp+10,((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
    bufp->fullBit(oldp+11,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                  >> 0x14U))));
    bufp->fullBit(oldp+12,((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
    bufp->fullBit(oldp+13,((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
    bufp->fullCData(oldp+14,(vlSelf->bsg_tanh__DOT__state_r),2);
    bufp->fullQData(oldp+15,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
    bufp->fullQData(oldp+17,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
    bufp->fullBit(oldp+19,(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
    bufp->fullBit(oldp+20,((1U & (~ (IData)((0U != vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
    bufp->fullQData(oldp+21,(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out),49);
    bufp->fullQData(oldp+23,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux),49);
    bufp->fullCData(oldp+25,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
    bufp->fullBit(oldp+26,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
    bufp->fullQData(oldp+27,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
    bufp->fullBit(oldp+29,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
    bufp->fullBit(oldp+30,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
    bufp->fullBit(oldp+31,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
    bufp->fullBit(oldp+32,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
    bufp->fullQData(oldp+33,((0x1ffffffffffffULL & 
                              ((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                               & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
    bufp->fullQData(oldp+35,((0x1ffffffffffffULL & 
                              ((vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                               & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
    bufp->fullBit(oldp+37,(vlSelf->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
    bufp->fullBit(oldp+38,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+39,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+40,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+41,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
    bufp->fullBit(oldp+42,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
    bufp->fullBit(oldp+43,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
    bufp->fullBit(oldp+44,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
    bufp->fullBit(oldp+45,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
    bufp->fullCData(oldp+46,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
    bufp->fullCData(oldp+47,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
    bufp->fullBit(oldp+48,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
    bufp->fullBit(oldp+49,((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
    bufp->fullWData(oldp+50,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i),147);
    bufp->fullWData(oldp+55,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked),147);
    bufp->fullCData(oldp+60,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                              | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        >> 0x10U)) 
                                 | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U])))),3);
    bufp->fullCData(oldp+61,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xaU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1aU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xaU))))),3);
    bufp->fullCData(oldp+62,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xbU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1bU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xbU))))),3);
    bufp->fullCData(oldp+63,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xcU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xcU))))),3);
    bufp->fullCData(oldp+64,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xdU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xdU))))),3);
    bufp->fullCData(oldp+65,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xeU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xeU))))),3);
    bufp->fullCData(oldp+66,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xfU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xfU))))),3);
    bufp->fullCData(oldp+67,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x10U)) | (
                                                   (2U 
                                                    & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U]) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+68,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x11U))))),3);
    bufp->fullCData(oldp+69,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x12U))))),3);
    bufp->fullCData(oldp+70,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x13U))))),3);
    bufp->fullCData(oldp+71,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x11U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 1U))))),3);
    bufp->fullCData(oldp+72,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x14U))))),3);
    bufp->fullCData(oldp+73,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x15U))))),3);
    bufp->fullCData(oldp+74,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x16U))))),3);
    bufp->fullCData(oldp+75,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x17U))))),3);
    bufp->fullCData(oldp+76,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x18U))))),3);
    bufp->fullCData(oldp+77,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x19U))))),3);
    bufp->fullCData(oldp+78,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1aU))))),3);
    bufp->fullCData(oldp+79,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1bU))))),3);
    bufp->fullCData(oldp+80,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1cU))))),3);
    bufp->fullCData(oldp+81,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xdU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1dU))))),3);
    bufp->fullCData(oldp+82,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x12U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 2U))))),3);
    bufp->fullCData(oldp+83,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     << 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0xeU)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 0x1eU))))),3);
    bufp->fullCData(oldp+84,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     << 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0xfU)) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0x1fU)))),3);
    bufp->fullCData(oldp+85,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U]) 
                              | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                        >> 0x10U)) 
                                 | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U])))),3);
    bufp->fullCData(oldp+86,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x11U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 1U))))),3);
    bufp->fullCData(oldp+87,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x12U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 2U))))),3);
    bufp->fullCData(oldp+88,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 3U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x13U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 3U))))),3);
    bufp->fullCData(oldp+89,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 4U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 4U))))),3);
    bufp->fullCData(oldp+90,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 5U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x15U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 5U))))),3);
    bufp->fullCData(oldp+91,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 6U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x16U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 6U))))),3);
    bufp->fullCData(oldp+92,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 7U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x17U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 7U))))),3);
    bufp->fullCData(oldp+93,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 3U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x13U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 3U))))),3);
    bufp->fullCData(oldp+94,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 8U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x18U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 8U))))),3);
    bufp->fullCData(oldp+95,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 9U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x19U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 9U))))),3);
    bufp->fullCData(oldp+96,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 0xaU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      >> 0x1aU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                        >> 0xaU))))),3);
    bufp->fullCData(oldp+97,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 0xbU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      >> 0x1bU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                        >> 0xbU))))),3);
    bufp->fullCData(oldp+98,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 0xcU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                        >> 0xcU))))),3);
    bufp->fullCData(oldp+99,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 0xdU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                        >> 0xdU))))),3);
    bufp->fullCData(oldp+100,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+101,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+102,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+103,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+104,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+105,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+106,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+107,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+108,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 9U))))),3);
    bufp->fullWData(oldp+109,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x),672);
    bufp->fullWData(oldp+130,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y),672);
    bufp->fullWData(oldp+151,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
    bufp->fullIData(oldp+165,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val),21);
    bufp->fullWData(oldp+166,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
    bufp->fullWData(oldp+186,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
    bufp->fullWData(oldp+206,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
    bufp->fullIData(oldp+220,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
    bufp->fullBit(oldp+221,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
    bufp->fullIData(oldp+222,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
    bufp->fullIData(oldp+223,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
    bufp->fullIData(oldp+224,((0x1fffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
    bufp->fullBit(oldp+225,((1U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val)));
    bufp->fullIData(oldp+226,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
    bufp->fullIData(oldp+227,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
    bufp->fullIData(oldp+228,((0x1fffffU & (((0x100000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x31e41U) 
                                                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                             : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                - (IData)(0x31e41U))))),21);
    bufp->fullIData(oldp+229,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
    bufp->fullIData(oldp+230,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
    bufp->fullBit(oldp+231,(((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+232,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
    bufp->fullIData(oldp+233,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
    bufp->fullIData(oldp+234,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0xbU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x15U)))),21);
    bufp->fullBit(oldp+235,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 1U))));
    bufp->fullIData(oldp+236,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
    bufp->fullIData(oldp+237,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
    bufp->fullIData(oldp+238,((0x1fffffU & (((0x200U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x2c548U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                      >> 0x15U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0xbU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                    >> 0x15U)) 
                                                - (IData)(0x2c548U))))),21);
    bufp->fullIData(oldp+239,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
    bufp->fullIData(oldp+240,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
    bufp->fullBit(oldp+241,(((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+242,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
    bufp->fullIData(oldp+243,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
    bufp->fullIData(oldp+244,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                            >> 0xaU))),21);
    bufp->fullBit(oldp+245,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 2U))));
    bufp->fullIData(oldp+246,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
    bufp->fullIData(oldp+247,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
    bufp->fullIData(oldp+248,((0x1fffffU & (((0x40000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x26c0eU) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                      >> 0xaU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0x16U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0xaU)) 
                                                - (IData)(0x26c0eU))))),21);
    bufp->fullIData(oldp+249,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
    bufp->fullIData(oldp+250,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
    bufp->fullBit(oldp+251,(((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+252,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
    bufp->fullIData(oldp+253,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
    bufp->fullIData(oldp+254,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                             << 1U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0x1fU)))),21);
    bufp->fullBit(oldp+255,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 3U))));
    bufp->fullIData(oldp+256,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
    bufp->fullIData(oldp+257,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
    bufp->fullIData(oldp+258,((0x1fffffU & (((0x80000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x21252U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                      >> 0x1fU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                  << 1U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0x1fU)) 
                                                - (IData)(0x21252U))))),21);
    bufp->fullIData(oldp+259,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
    bufp->fullIData(oldp+260,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
    bufp->fullBit(oldp+261,(((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+262,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
    bufp->fullIData(oldp+263,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
    bufp->fullIData(oldp+264,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0xcU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x14U)))),21);
    bufp->fullBit(oldp+265,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 4U))));
    bufp->fullIData(oldp+266,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
    bufp->fullIData(oldp+267,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
    bufp->fullIData(oldp+268,((0x1fffffU & (((0x100U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x1b78cU) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                      >> 0x14U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0xcU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                    >> 0x14U)) 
                                                - (IData)(0x1b78cU))))),21);
    bufp->fullIData(oldp+269,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
    bufp->fullIData(oldp+270,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
    bufp->fullBit(oldp+271,(((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+272,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
    bufp->fullIData(oldp+273,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
    bufp->fullIData(oldp+274,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                            >> 9U))),21);
    bufp->fullBit(oldp+275,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 5U))));
    bufp->fullIData(oldp+276,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
    bufp->fullIData(oldp+277,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
    bufp->fullIData(oldp+278,((0x1fffffU & (((0x20000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x15aa1U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                      >> 9U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0x17U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 9U)) 
                                                - (IData)(0x15aa1U))))),21);
    bufp->fullIData(oldp+279,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
    bufp->fullIData(oldp+280,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
    bufp->fullBit(oldp+281,(((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+282,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
    bufp->fullIData(oldp+283,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
    bufp->fullIData(oldp+284,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                             << 2U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 0x1eU)))),21);
    bufp->fullBit(oldp+285,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 6U))));
    bufp->fullIData(oldp+286,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
    bufp->fullIData(oldp+287,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
    bufp->fullIData(oldp+288,((0x1fffffU & (((0x40000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                              ? 1U : 0U)
                                             ? ((IData)(0xf913U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                      >> 0x1eU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                  << 2U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 0x1eU)) 
                                                - (IData)(0xf913U))))),21);
    bufp->fullIData(oldp+289,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
    bufp->fullIData(oldp+290,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
    bufp->fullBit(oldp+291,(((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+292,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
    bufp->fullIData(oldp+293,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
    bufp->fullIData(oldp+294,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                             << 0xeU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               >> 0x12U)))),21);
    bufp->fullBit(oldp+295,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xaU))));
    bufp->fullIData(oldp+296,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
    bufp->fullIData(oldp+297,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
    bufp->fullIData(oldp+298,((0x1fffffU & (((0x40U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x1005U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                      >> 0x12U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                  << 0xeU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                    >> 0x12U)) 
                                                - (IData)(0x1005U))))),21);
    bufp->fullIData(oldp+299,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
    bufp->fullIData(oldp+300,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
    bufp->fullBit(oldp+301,(((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+302,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
    bufp->fullIData(oldp+303,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
    bufp->fullIData(oldp+304,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            >> 7U))),21);
    bufp->fullBit(oldp+305,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xbU))));
    bufp->fullIData(oldp+306,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
    bufp->fullIData(oldp+307,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
    bufp->fullIData(oldp+308,((0x1fffffU & (((0x8000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x1005U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                      >> 7U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                  << 0x19U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    >> 7U)) 
                                                - (IData)(0x1005U))))),21);
    bufp->fullIData(oldp+309,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
    bufp->fullIData(oldp+310,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
    bufp->fullBit(oldp+311,(((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+312,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
    bufp->fullIData(oldp+313,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
    bufp->fullIData(oldp+314,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                             << 4U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 0x1cU)))),21);
    bufp->fullBit(oldp+315,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xcU))));
    bufp->fullIData(oldp+316,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
    bufp->fullIData(oldp+317,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
    bufp->fullIData(oldp+318,((0x1fffffU & (((0x10000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x800U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                      >> 0x1cU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                  << 4U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    >> 0x1cU)) 
                                                - (IData)(0x800U))))),21);
    bufp->fullIData(oldp+319,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
    bufp->fullIData(oldp+320,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
    bufp->fullBit(oldp+321,(((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+322,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
    bufp->fullIData(oldp+323,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
    bufp->fullIData(oldp+324,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                             << 0xfU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               >> 0x11U)))),21);
    bufp->fullBit(oldp+325,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xdU))));
    bufp->fullIData(oldp+326,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
    bufp->fullIData(oldp+327,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
    bufp->fullIData(oldp+328,((0x1fffffU & (((0x20U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x400U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                      >> 0x11U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                  << 0xfU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                    >> 0x11U)) 
                                                - (IData)(0x400U))))),21);
    bufp->fullIData(oldp+329,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
    bufp->fullIData(oldp+330,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
    bufp->fullBit(oldp+331,(((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+332,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
    bufp->fullIData(oldp+333,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
    bufp->fullIData(oldp+334,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            >> 6U))),21);
    bufp->fullBit(oldp+335,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xeU))));
    bufp->fullIData(oldp+336,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
    bufp->fullIData(oldp+337,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
    bufp->fullIData(oldp+338,((0x1fffffU & (((0x4000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x200U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                      >> 6U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                    >> 6U)) 
                                                - (IData)(0x200U))))),21);
    bufp->fullIData(oldp+339,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
    bufp->fullIData(oldp+340,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
    bufp->fullBit(oldp+341,(((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+342,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
    bufp->fullIData(oldp+343,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
    bufp->fullIData(oldp+344,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                             << 5U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 0x1bU)))),21);
    bufp->fullBit(oldp+345,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xfU))));
    bufp->fullIData(oldp+346,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
    bufp->fullIData(oldp+347,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
    bufp->fullIData(oldp+348,((0x1fffffU & (((0x8000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x100U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                      >> 0x1bU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                  << 5U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                    >> 0x1bU)) 
                                                - (IData)(0x100U))))),21);
    bufp->fullIData(oldp+349,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
    bufp->fullIData(oldp+350,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
    bufp->fullBit(oldp+351,(((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+352,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
    bufp->fullIData(oldp+353,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
    bufp->fullIData(oldp+354,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               >> 0x10U)))),21);
    bufp->fullBit(oldp+355,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x10U))));
    bufp->fullIData(oldp+356,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
    bufp->fullIData(oldp+357,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
    bufp->fullIData(oldp+358,((0x1fffffU & (((0x10U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x80U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                      >> 0x10U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    >> 0x10U)) 
                                                - (IData)(0x80U))))),21);
    bufp->fullIData(oldp+359,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
    bufp->fullIData(oldp+360,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
    bufp->fullBit(oldp+361,(((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+362,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
    bufp->fullIData(oldp+363,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
    bufp->fullIData(oldp+364,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            >> 5U))),21);
    bufp->fullBit(oldp+365,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x11U))));
    bufp->fullIData(oldp+366,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+367,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+368,((0x1fffffU & (((0x2000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x40U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 5U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 5U)) 
                                                - (IData)(0x40U))))),21);
    bufp->fullIData(oldp+369,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
    bufp->fullIData(oldp+370,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
    bufp->fullBit(oldp+371,(((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+372,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
    bufp->fullIData(oldp+373,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
    bufp->fullIData(oldp+374,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                             << 6U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                               >> 0x1aU)))),21);
    bufp->fullBit(oldp+375,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x12U))));
    bufp->fullIData(oldp+376,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+377,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+378,((0x1fffffU & (((0x4000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x20U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)) 
                                                - (IData)(0x20U))))),21);
    bufp->fullIData(oldp+379,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
    bufp->fullIData(oldp+380,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
    bufp->fullBit(oldp+381,(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+382,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+383,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+384,((0x1fffffU & (((0x4000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x10U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)) 
                                                - (IData)(0x10U))))),21);
    bufp->fullIData(oldp+385,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+386,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+387,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
    bufp->fullIData(oldp+388,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
    bufp->fullIData(oldp+389,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                             << 0x11U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               >> 0xfU)))),21);
    bufp->fullBit(oldp+390,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x13U))));
    bufp->fullIData(oldp+391,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+392,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+393,((0x1fffffU & (((8U & 
                                              vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                              ? 1U : 0U)
                                             ? ((IData)(0x10U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                      >> 0xfU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    >> 0xfU)) 
                                                - (IData)(0x10U))))),21);
    bufp->fullIData(oldp+394,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
    bufp->fullIData(oldp+395,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
    bufp->fullBit(oldp+396,(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+397,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
    bufp->fullIData(oldp+398,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
    bufp->fullIData(oldp+399,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                             << 0xdU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               >> 0x13U)))),21);
    bufp->fullBit(oldp+400,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 7U))));
    bufp->fullIData(oldp+401,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
    bufp->fullIData(oldp+402,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
    bufp->fullIData(oldp+403,((0x1fffffU & (((0x80U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x8c9fU) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                      >> 0x13U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0xdU) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                    >> 0x13U)) 
                                                - (IData)(0x8c9fU))))),21);
    bufp->fullIData(oldp+404,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
    bufp->fullIData(oldp+405,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
    bufp->fullBit(oldp+406,(((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+407,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
    bufp->fullIData(oldp+408,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
    bufp->fullIData(oldp+409,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            >> 8U))),21);
    bufp->fullBit(oldp+410,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 8U))));
    bufp->fullIData(oldp+411,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
    bufp->fullIData(oldp+412,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
    bufp->fullIData(oldp+413,((0x1fffffU & (((0x10000000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x4162U) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                      >> 8U)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 8U)) 
                                                - (IData)(0x4162U))))),21);
    bufp->fullIData(oldp+414,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
    bufp->fullIData(oldp+415,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
    bufp->fullBit(oldp+416,(((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+417,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
    bufp->fullIData(oldp+418,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
    bufp->fullIData(oldp+419,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                             << 3U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 0x1dU)))),21);
    bufp->fullBit(oldp+420,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 9U))));
    bufp->fullIData(oldp+421,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
    bufp->fullIData(oldp+422,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
    bufp->fullIData(oldp+423,((0x1fffffU & (((0x20000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x202bU) 
                                                + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                      >> 0x1dU)))
                                             : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                  << 3U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 0x1dU)) 
                                                - (IData)(0x202bU))))),21);
    bufp->fullIData(oldp+424,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
    bufp->fullIData(oldp+425,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
    bufp->fullBit(oldp+426,(((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+427,(vlSelf->bsg_tanh__DOT__data_n),32);
    bufp->fullQData(oldp+428,(vlSelf->bsg_tanh__DOT__dividend_li),48);
    bufp->fullQData(oldp+430,(vlSelf->bsg_tanh__DOT__divisor_li),48);
    bufp->fullBit(oldp+432,(vlSelf->bsg_tanh__DOT__divider_v_i));
    bufp->fullBit(oldp+433,(vlSelf->bsg_tanh__DOT__bypass));
    bufp->fullBit(oldp+434,(vlSelf->bsg_tanh__DOT__load_ang));
    bufp->fullBit(oldp+435,(vlSelf->bsg_tanh__DOT__divider_sel));
    bufp->fullCData(oldp+436,(vlSelf->bsg_tanh__DOT__state_n),2);
    bufp->fullBit(oldp+437,((1U & (IData)((vlSelf->bsg_tanh__DOT__divisor_li 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+438,((1U & (IData)((vlSelf->bsg_tanh__DOT__dividend_li 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+439,(vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
    bufp->fullCData(oldp+440,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
    bufp->fullQData(oldp+441,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_mux),49);
    bufp->fullQData(oldp+443,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux),49);
    bufp->fullCData(oldp+445,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
    bufp->fullBit(oldp+446,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
    bufp->fullBit(oldp+447,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
    bufp->fullCData(oldp+448,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
    bufp->fullWData(oldp+449,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i),147);
    bufp->fullWData(oldp+454,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked),147);
    bufp->fullCData(oldp+459,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                               | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U])))),3);
    bufp->fullCData(oldp+460,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xaU))))),3);
    bufp->fullCData(oldp+461,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xbU))))),3);
    bufp->fullCData(oldp+462,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xcU))))),3);
    bufp->fullCData(oldp+463,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xdU))))),3);
    bufp->fullCData(oldp+464,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+465,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+466,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+467,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x11U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x11U))))),3);
    bufp->fullCData(oldp+468,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x12U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x12U))))),3);
    bufp->fullCData(oldp+469,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x13U))))),3);
    bufp->fullCData(oldp+470,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x11U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 1U))))),3);
    bufp->fullCData(oldp+471,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x14U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x14U))))),3);
    bufp->fullCData(oldp+472,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x15U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x15U))))),3);
    bufp->fullCData(oldp+473,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x16U))))),3);
    bufp->fullCData(oldp+474,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x17U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x17U))))),3);
    bufp->fullCData(oldp+475,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x18U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x18U))))),3);
    bufp->fullCData(oldp+476,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x19U))))),3);
    bufp->fullCData(oldp+477,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1aU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1aU))))),3);
    bufp->fullCData(oldp+478,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1bU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xbU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1bU))))),3);
    bufp->fullCData(oldp+479,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1cU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xcU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1cU))))),3);
    bufp->fullCData(oldp+480,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1dU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xdU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1dU))))),3);
    bufp->fullCData(oldp+481,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x12U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 2U))))),3);
    bufp->fullCData(oldp+482,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0xeU)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 0x1eU))))),3);
    bufp->fullCData(oldp+483,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0xfU)) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1fU)))),3);
    bufp->fullCData(oldp+484,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U]) 
                               | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U])))),3);
    bufp->fullCData(oldp+485,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x11U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 1U))))),3);
    bufp->fullCData(oldp+486,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x12U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 2U))))),3);
    bufp->fullCData(oldp+487,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 3U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x13U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 3U))))),3);
    bufp->fullCData(oldp+488,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+489,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+490,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+491,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+492,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 3U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x13U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 3U))))),3);
    bufp->fullCData(oldp+493,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+494,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 9U))))),3);
    bufp->fullCData(oldp+495,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xaU))))),3);
    bufp->fullCData(oldp+496,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xbU))))),3);
    bufp->fullCData(oldp+497,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xcU))))),3);
    bufp->fullCData(oldp+498,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xdU))))),3);
    bufp->fullCData(oldp+499,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+500,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+501,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+502,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+503,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+504,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+505,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+506,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+507,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 9U))))),3);
    bufp->fullWData(oldp+508,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
    bufp->fullWData(oldp+512,(vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
    bufp->fullCData(oldp+516,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x10U)) | 
                               (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U]))),2);
    bufp->fullCData(oldp+517,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1aU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xaU)))),2);
    bufp->fullCData(oldp+518,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xbU)))),2);
    bufp->fullCData(oldp+519,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1cU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xcU)))),2);
    bufp->fullCData(oldp+520,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1dU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+521,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1eU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+522,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      << 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0xfU)))),2);
    bufp->fullCData(oldp+523,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U]) 
                               | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                        >> 0x10U)))),2);
    bufp->fullCData(oldp+524,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x11U)))),2);
    bufp->fullCData(oldp+525,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 2U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x12U)))),2);
    bufp->fullCData(oldp+526,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 3U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x13U)))),2);
    bufp->fullCData(oldp+527,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x11U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 1U)))),2);
    bufp->fullCData(oldp+528,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x14U)))),2);
    bufp->fullCData(oldp+529,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 5U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x15U)))),2);
    bufp->fullCData(oldp+530,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 6U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x16U)))),2);
    bufp->fullCData(oldp+531,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 7U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x17U)))),2);
    bufp->fullCData(oldp+532,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 8U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x18U)))),2);
    bufp->fullCData(oldp+533,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 9U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x19U)))),2);
    bufp->fullCData(oldp+534,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xaU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1aU)))),2);
    bufp->fullCData(oldp+535,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xbU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1bU)))),2);
    bufp->fullCData(oldp+536,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xcU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1cU)))),2);
    bufp->fullCData(oldp+537,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xdU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1dU)))),2);
    bufp->fullCData(oldp+538,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x12U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 2U)))),2);
    bufp->fullCData(oldp+539,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xeU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1eU)))),2);
    bufp->fullCData(oldp+540,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xfU)) | (
                                                   vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                   >> 0x1fU))),2);
    bufp->fullCData(oldp+541,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x10U)) | 
                               (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]))),2);
    bufp->fullCData(oldp+542,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x11U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 1U)))),2);
    bufp->fullCData(oldp+543,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x12U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 2U)))),2);
    bufp->fullCData(oldp+544,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 3U)))),2);
    bufp->fullCData(oldp+545,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x14U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 4U)))),2);
    bufp->fullCData(oldp+546,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x15U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 5U)))),2);
    bufp->fullCData(oldp+547,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x16U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 6U)))),2);
    bufp->fullCData(oldp+548,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x17U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 7U)))),2);
    bufp->fullCData(oldp+549,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 3U)))),2);
    bufp->fullCData(oldp+550,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x18U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 8U)))),2);
    bufp->fullCData(oldp+551,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x19U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 9U)))),2);
    bufp->fullCData(oldp+552,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1aU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xaU)))),2);
    bufp->fullCData(oldp+553,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xbU)))),2);
    bufp->fullCData(oldp+554,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1cU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xcU)))),2);
    bufp->fullCData(oldp+555,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1dU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+556,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1eU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+557,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
                                      << 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                                    >> 0xfU)))),2);
    bufp->fullCData(oldp+558,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U]) 
                               | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                        >> 0x10U)))),2);
    bufp->fullCData(oldp+559,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x14U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 4U)))),2);
    bufp->fullCData(oldp+560,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x15U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 5U)))),2);
    bufp->fullCData(oldp+561,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x16U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 6U)))),2);
    bufp->fullCData(oldp+562,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x17U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 7U)))),2);
    bufp->fullCData(oldp+563,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x18U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 8U)))),2);
    bufp->fullCData(oldp+564,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x19U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 9U)))),2);
    bufp->fullBit(oldp+565,(vlSelf->clk_i));
    bufp->fullIData(oldp+566,(vlSelf->ang_i),21);
    bufp->fullBit(oldp+567,(vlSelf->ready_i));
    bufp->fullBit(oldp+568,(vlSelf->val_i));
    bufp->fullBit(oldp+569,(vlSelf->reset_i));
    bufp->fullBit(oldp+570,(vlSelf->tanh_sel_i));
    bufp->fullBit(oldp+571,(vlSelf->neg_sel_i));
    bufp->fullIData(oldp+572,(vlSelf->data_o),32);
    bufp->fullBit(oldp+573,(vlSelf->ready_o));
    bufp->fullBit(oldp+574,(vlSelf->val_o));
    bufp->fullBit(oldp+575,(((1U == (IData)(vlSelf->bsg_tanh__DOT__state_r)) 
                             & (~ (IData)(vlSelf->bsg_tanh__DOT__bypass)))));
    bufp->fullIData(oldp+576,(0x20U),32);
    bufp->fullIData(oldp+577,(0x15U),32);
    bufp->fullIData(oldp+578,(0x10U),32);
    bufp->fullCData(oldp+579,(4U),5);
    bufp->fullCData(oldp+580,(7U),5);
    bufp->fullIData(oldp+581,(0x40000U),21);
    bufp->fullIData(oldp+582,(0x70000U),21);
    bufp->fullIData(oldp+583,(0x30U),32);
    bufp->fullIData(oldp+584,(0U),32);
    bufp->fullIData(oldp+585,(1U),32);
    bufp->fullBit(oldp+586,(1U));
    bufp->fullQData(oldp+587,(0ULL),49);
    bufp->fullQData(oldp+589,(vlSelf->bsg_tanh__DOT__divider__DOT__add2_in0),49);
    bufp->fullQData(oldp+591,(vlSelf->bsg_tanh__DOT__divider__DOT__add2_in1),49);
    bufp->fullIData(oldp+593,(0x31U),32);
    bufp->fullBit(oldp+594,(0U));
    bufp->fullIData(oldp+595,(6U),32);
    bufp->fullIData(oldp+596,(3U),32);
    bufp->fullIData(oldp+597,(2U),32);
    bufp->fullIData(oldp+598,(0xcU),32);
    bufp->fullWData(oldp+599,(Vbsg_tanh__ConstPool__CONST_h154117da_0),399);
    bufp->fullIData(oldp+612,(0x57ce0293U),32);
    bufp->fullIData(oldp+613,(0U),32);
    bufp->fullIData(oldp+614,(0x31e41U),21);
    bufp->fullIData(oldp+615,(0x2c548U),21);
    bufp->fullIData(oldp+616,(0x26c0eU),21);
    bufp->fullIData(oldp+617,(0x21252U),21);
    bufp->fullIData(oldp+618,(4U),32);
    bufp->fullIData(oldp+619,(0x1b78cU),21);
    bufp->fullIData(oldp+620,(5U),32);
    bufp->fullIData(oldp+621,(0x15aa1U),21);
    bufp->fullIData(oldp+622,(0xf913U),21);
    bufp->fullIData(oldp+623,(0xaU),32);
    bufp->fullIData(oldp+624,(0x1005U),21);
    bufp->fullIData(oldp+625,(0xbU),32);
    bufp->fullIData(oldp+626,(0x800U),21);
    bufp->fullIData(oldp+627,(0x400U),21);
    bufp->fullIData(oldp+628,(0xdU),32);
    bufp->fullIData(oldp+629,(0x200U),21);
    bufp->fullIData(oldp+630,(0xeU),32);
    bufp->fullIData(oldp+631,(0x100U),21);
    bufp->fullIData(oldp+632,(0xfU),32);
    bufp->fullIData(oldp+633,(0x80U),21);
    bufp->fullIData(oldp+634,(0x40U),21);
    bufp->fullIData(oldp+635,(0x11U),32);
    bufp->fullIData(oldp+636,(0x20U),21);
    bufp->fullIData(oldp+637,(0x12U),32);
    bufp->fullIData(oldp+638,(0x10U),21);
    bufp->fullIData(oldp+639,(7U),32);
    bufp->fullIData(oldp+640,(0x8c9fU),21);
    bufp->fullIData(oldp+641,(8U),32);
    bufp->fullIData(oldp+642,(0x4162U),21);
    bufp->fullIData(oldp+643,(9U),32);
    bufp->fullIData(oldp+644,(0x202bU),21);
}
