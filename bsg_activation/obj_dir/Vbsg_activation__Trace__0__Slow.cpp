// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_activation__Syms.h"


VL_ATTR_COLD void Vbsg_activation___024root__trace_init_sub__TOP__0(Vbsg_activation___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+561,"ang_i", false,-1, 20,0);
    tracep->declBit(c+562,"ready_i", false,-1);
    tracep->declBit(c+563,"val_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+565,"tanh_sel_i", false,-1);
    tracep->declBus(c+566,"data_o", false,-1, 31,0);
    tracep->declBit(c+567,"ready_o", false,-1);
    tracep->declBit(c+568,"val_o", false,-1);
    tracep->pushNamePrefix("bsg_activation ");
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+578,"precision", false,-1, 31,0);
    tracep->declBus(c+579,"thresh_tanh_p", false,-1, 7,0);
    tracep->declBus(c+580,"thresh_sig_p", false,-1, 7,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+561,"ang_i", false,-1, 20,0);
    tracep->declBit(c+562,"ready_i", false,-1);
    tracep->declBit(c+563,"val_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+565,"tanh_sel_i", false,-1);
    tracep->declBus(c+566,"data_o", false,-1, 31,0);
    tracep->declBit(c+567,"ready_o", false,-1);
    tracep->declBit(c+568,"val_o", false,-1);
    tracep->declBus(c+578,"SHFT_AMT", false,-1, 31,0);
    tracep->declBus(c+569,"ang_n", false,-1, 20,0);
    tracep->declBus(c+134,"ang_r", false,-1, 20,0);
    tracep->declBus(c+135,"sinh_lo", false,-1, 31,0);
    tracep->declBus(c+136,"cosh_lo", false,-1, 31,0);
    tracep->declBus(c+137,"negExp", false,-1, 31,0);
    tracep->declBus(c+138,"data_r", false,-1, 31,0);
    tracep->declBus(c+1,"data_n", false,-1, 31,0);
    tracep->declQuad(c+2,"dividend_li", false,-1, 47,0);
    tracep->declQuad(c+4,"divisor_li", false,-1, 47,0);
    tracep->declQuad(c+139,"remainder_lo", false,-1, 47,0);
    tracep->declQuad(c+141,"divider_lo", false,-1, 47,0);
    tracep->declBit(c+6,"sincos_v_i", false,-1);
    tracep->declBit(c+143,"sincos_ready_o", false,-1);
    tracep->declBit(c+144,"sincos_v_o", false,-1);
    tracep->declBit(c+7,"divider_v_i", false,-1);
    tracep->declBit(c+145,"divider_ready_o", false,-1);
    tracep->declBit(c+146,"divider_v_o", false,-1);
    tracep->declBit(c+8,"bypass", false,-1);
    tracep->declBit(c+9,"load_ang", false,-1);
    tracep->declBit(c+10,"divider_sel", false,-1);
    tracep->declBus(c+581,"thresh_tanh", false,-1, 20,0);
    tracep->declBus(c+582,"thresh_sig", false,-1, 20,0);
    tracep->declBus(c+147,"state_r", false,-1, 1,0);
    tracep->declBus(c+11,"state_n", false,-1, 1,0);
    tracep->pushNamePrefix("divider ");
    tracep->declBus(c+583,"width_p", false,-1, 31,0);
    tracep->declBus(c+584,"bitstack_p", false,-1, 31,0);
    tracep->declBus(c+585,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+7,"v_i", false,-1);
    tracep->declBit(c+145,"ready_and_o", false,-1);
    tracep->declQuad(c+2,"dividend_i", false,-1, 47,0);
    tracep->declQuad(c+4,"divisor_i", false,-1, 47,0);
    tracep->declBit(c+586,"signed_div_i", false,-1);
    tracep->declBit(c+146,"v_o", false,-1);
    tracep->declQuad(c+141,"quotient_o", false,-1, 47,0);
    tracep->declQuad(c+139,"remainder_o", false,-1, 47,0);
    tracep->declBit(c+562,"yumi_i", false,-1);
    tracep->declQuad(c+148,"opA_r", false,-1, 48,0);
    tracep->declQuad(c+150,"opC_r", false,-1, 48,0);
    tracep->declBit(c+152,"signed_div_r", false,-1);
    tracep->declBit(c+12,"divisor_msb", false,-1);
    tracep->declBit(c+570,"dividend_msb", false,-1);
    tracep->declBit(c+13,"latch_signed_div_lo", false,-1);
    tracep->declBit(c+153,"zero_divisor_li", false,-1);
    tracep->declBus(c+14,"opA_sel_lo", false,-1, 1,0);
    tracep->declQuad(c+15,"opA_mux", false,-1, 48,0);
    tracep->declQuad(c+154,"add1_out", false,-1, 48,0);
    tracep->declQuad(c+587,"add2_out", false,-1, 48,0);
    tracep->declQuad(c+156,"opB_mux", false,-1, 48,0);
    tracep->declQuad(c+17,"opC_mux", false,-1, 48,0);
    tracep->declBus(c+158,"opB_sel_lo", false,-1, 2,0);
    tracep->declBus(c+19,"opC_sel_lo", false,-1, 2,0);
    tracep->declBit(c+20,"opA_ld_lo", false,-1);
    tracep->declBit(c+159,"opB_ld_lo", false,-1);
    tracep->declQuad(c+160,"opB_r", false,-1, 48,0);
    tracep->declBit(c+21,"opC_ld_lo", false,-1);
    tracep->declBit(c+162,"opA_inv_lo", false,-1);
    tracep->declBit(c+163,"opB_inv_lo", false,-1);
    tracep->declBit(c+164,"opA_clr_lo", false,-1);
    tracep->declBit(c+165,"opB_clr_lo", false,-1);
    tracep->declQuad(c+166,"add1_in0", false,-1, 48,0);
    tracep->declQuad(c+168,"add1_in1", false,-1, 48,0);
    tracep->declQuad(c+589,"add2_in0", false,-1, 48,0);
    tracep->declQuad(c+591,"add2_in1", false,-1, 48,0);
    tracep->declBit(c+170,"adder1_cin_lo", false,-1);
    tracep->pushNamePrefix("adder1 ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declQuad(c+166,"a_i", false,-1, 48,0);
    tracep->declQuad(c+168,"b_i", false,-1, 48,0);
    tracep->declBit(c+170,"cin_i", false,-1);
    tracep->declQuad(c+154,"o", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+583,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+7,"v_i", false,-1);
    tracep->declBit(c+145,"ready_and_o", false,-1);
    tracep->declBit(c+153,"zero_divisor_i", false,-1);
    tracep->declBit(c+152,"signed_div_r_i", false,-1);
    tracep->declBit(c+171,"adder1_result_is_neg_i", false,-1);
    tracep->declBit(c+594,"adder2_result_is_neg_i", false,-1);
    tracep->declBit(c+172,"opA_is_neg_i", false,-1);
    tracep->declBit(c+173,"opC_is_neg_i", false,-1);
    tracep->declBus(c+14,"opA_sel_o", false,-1, 1,0);
    tracep->declBit(c+20,"opA_ld_o", false,-1);
    tracep->declBit(c+162,"opA_inv_o", false,-1);
    tracep->declBit(c+164,"opA_clr_l_o", false,-1);
    tracep->declBus(c+158,"opB_sel_o", false,-1, 2,0);
    tracep->declBit(c+159,"opB_ld_o", false,-1);
    tracep->declBit(c+163,"opB_inv_o", false,-1);
    tracep->declBit(c+165,"opB_clr_l_o", false,-1);
    tracep->declBus(c+19,"opC_sel_o", false,-1, 2,0);
    tracep->declBit(c+21,"opC_ld_o", false,-1);
    tracep->declBit(c+13,"latch_signed_div_o", false,-1);
    tracep->declBit(c+170,"adder1_cin_o", false,-1);
    tracep->declBit(c+146,"v_o", false,-1);
    tracep->declBit(c+562,"yumi_i", false,-1);
    tracep->declBit(c+174,"q_neg_r", false,-1);
    tracep->declBit(c+175,"r_neg_r", false,-1);
    tracep->declBit(c+176,"neg_ld", false,-1);
    tracep->declBit(c+177,"add1_neg_last_r", false,-1);
    tracep->declBit(c+178,"add2_neg_last_r", false,-1);
    tracep->declBus(c+179,"state", false,-1, 5,0);
    tracep->declBus(c+22,"next_state", false,-1, 5,0);
    tracep->declBus(c+180,"calc_cnt", false,-1, 5,0);
    tracep->declBit(c+181,"calc_up_li", false,-1);
    tracep->declBit(c+182,"calc_done", false,-1);
    tracep->pushNamePrefix("calc_counter ");
    tracep->declBus(c+583,"max_val_p", false,-1, 31,0);
    tracep->declBus(c+584,"init_val_p", false,-1, 31,0);
    tracep->declBus(c+595,"ptr_width_lp", false,-1, 31,0);
    tracep->declBus(c+585,"disable_overflow_warning_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+182,"clear_i", false,-1);
    tracep->declBit(c+181,"up_i", false,-1);
    tracep->declBus(c+180,"count_o", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("muxB ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+596,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+183,"data_i", false,-1, 146,0);
    tracep->declBus(c+158,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+156,"data_o", false,-1, 48,0);
    tracep->declArray(c+188,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+193,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+194,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+195,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+196,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+197,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+198,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+199,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+200,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+201,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+202,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+203,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+204,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+205,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+206,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+207,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+208,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+209,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+210,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+211,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+212,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+213,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+214,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+215,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+216,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+217,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+218,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+219,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+220,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+221,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+222,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+223,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+224,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+225,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+226,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+227,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+228,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+229,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+230,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+231,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+232,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+233,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+234,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+235,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+236,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+237,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+238,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+239,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+240,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+241,"gather", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("muxC ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+596,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+571,"data_i", false,-1, 146,0);
    tracep->declBus(c+19,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+17,"data_o", false,-1, 48,0);
    tracep->declArray(c+23,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+28,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+29,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+30,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+31,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+32,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+33,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+34,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+35,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+36,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+37,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+38,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+39,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+40,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+41,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+42,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+43,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+44,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+45,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+46,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+47,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+48,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+49,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+50,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+51,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+52,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+53,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+54,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+55,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+56,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+57,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+58,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+59,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+60,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+61,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+62,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+63,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+64,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+65,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+66,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+67,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+68,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+69,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+70,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+71,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+72,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+73,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+74,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+75,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+76,"gather", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("muxA ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+597,"els_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declArray(c+77,"data_i", false,-1, 97,0);
    tracep->declBus(c+14,"sel_one_hot_i", false,-1, 1,0);
    tracep->declQuad(c+15,"data_o", false,-1, 48,0);
    tracep->declArray(c+81,"data_masked", false,-1, 97,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+85,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+86,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+87,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+88,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+89,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+90,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+91,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+92,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+93,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+94,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+95,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+96,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+97,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+98,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+99,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+100,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+101,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+102,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+103,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+104,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+105,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+106,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+107,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+108,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+109,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+110,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+111,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+112,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+113,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+114,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+115,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+116,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+117,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+118,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+119,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+120,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+121,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+122,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+123,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+124,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+125,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+126,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+127,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+128,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+129,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+130,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+131,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+132,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+133,"gather", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("opA_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+15,"data_i", false,-1, 48,0);
    tracep->declBit(c+20,"en_i", false,-1);
    tracep->declQuad(c+148,"data_o", false,-1, 48,0);
    tracep->declQuad(c+148,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opB_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+156,"data_i", false,-1, 48,0);
    tracep->declBit(c+159,"en_i", false,-1);
    tracep->declQuad(c+160,"data_o", false,-1, 48,0);
    tracep->declQuad(c+160,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opC_reg ");
    tracep->declBus(c+593,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+17,"data_i", false,-1, 48,0);
    tracep->declBit(c+21,"en_i", false,-1);
    tracep->declQuad(c+150,"data_o", false,-1, 48,0);
    tracep->declQuad(c+150,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_reg ");
    tracep->declBus(c+585,"width_p", false,-1, 31,0);
    tracep->declBus(c+585,"harden_p", false,-1, 31,0);
    tracep->declBus(c+585,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+586,"data_i", false,-1, 0,0);
    tracep->declBit(c+13,"en_i", false,-1);
    tracep->declBus(c+152,"data_o", false,-1, 0,0);
    tracep->declBus(c+152,"data_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sinhcosh ");
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+598,"posi_prec_p", false,-1, 31,0);
    tracep->declBus(c+585,"extr_iter_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+134,"ang_i", false,-1, 20,0);
    tracep->declBit(c+145,"ready_i", false,-1);
    tracep->declBit(c+6,"val_i", false,-1);
    tracep->declBus(c+135,"sinh_o", false,-1, 31,0);
    tracep->declBus(c+136,"cosh_o", false,-1, 31,0);
    tracep->declBit(c+143,"ready_o", false,-1);
    tracep->declBit(c+144,"val_o", false,-1);
    tracep->declArray(c+242,"x", false,-1, 671,0);
    tracep->declArray(c+263,"y", false,-1, 671,0);
    tracep->declArray(c+284,"ang", false,-1, 440,0);
    tracep->declBus(c+298,"val", false,-1, 20,0);
    tracep->declArray(c+299,"x_ans", false,-1, 639,0);
    tracep->declArray(c+319,"y_ans", false,-1, 639,0);
    tracep->declArray(c+339,"ang_ans", false,-1, 419,0);
    tracep->declBus(c+353,"val_ans", false,-1, 19,0);
    tracep->declBit(c+354,"stall_pipe", false,-1);
    tracep->declArray(c+599,"ang_lookup_lp", false,-1, 398,0);
    tracep->declBus(c+612,"x_start", false,-1, 31,0);
    tracep->declBus(c+613,"y_start", false,-1, 31,0);
    tracep->pushNamePrefix("stage_neg[0] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+584,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+355,"x_i", false,-1, 31,0);
    tracep->declBus(c+356,"y_i", false,-1, 31,0);
    tracep->declBus(c+357,"ang_i", false,-1, 20,0);
    tracep->declBus(c+614,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+358,"val_i", false,-1);
    tracep->declBus(c+359,"x_o", false,-1, 31,0);
    tracep->declBus(c+360,"y_o", false,-1, 31,0);
    tracep->declBus(c+361,"ang_o", false,-1, 20,0);
    tracep->declBit(c+358,"val_o", false,-1);
    tracep->declBus(c+362,"y_shift", false,-1, 31,0);
    tracep->declBus(c+363,"x_shift", false,-1, 31,0);
    tracep->declBit(c+364,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[1] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+585,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+365,"x_i", false,-1, 31,0);
    tracep->declBus(c+366,"y_i", false,-1, 31,0);
    tracep->declBus(c+367,"ang_i", false,-1, 20,0);
    tracep->declBus(c+615,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+368,"val_i", false,-1);
    tracep->declBus(c+369,"x_o", false,-1, 31,0);
    tracep->declBus(c+370,"y_o", false,-1, 31,0);
    tracep->declBus(c+371,"ang_o", false,-1, 20,0);
    tracep->declBit(c+368,"val_o", false,-1);
    tracep->declBus(c+372,"y_shift", false,-1, 31,0);
    tracep->declBus(c+373,"x_shift", false,-1, 31,0);
    tracep->declBit(c+374,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[2] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+597,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+375,"x_i", false,-1, 31,0);
    tracep->declBus(c+376,"y_i", false,-1, 31,0);
    tracep->declBus(c+377,"ang_i", false,-1, 20,0);
    tracep->declBus(c+616,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+378,"val_i", false,-1);
    tracep->declBus(c+379,"x_o", false,-1, 31,0);
    tracep->declBus(c+380,"y_o", false,-1, 31,0);
    tracep->declBus(c+381,"ang_o", false,-1, 20,0);
    tracep->declBit(c+378,"val_o", false,-1);
    tracep->declBus(c+382,"y_shift", false,-1, 31,0);
    tracep->declBus(c+383,"x_shift", false,-1, 31,0);
    tracep->declBit(c+384,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[3] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+596,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+385,"x_i", false,-1, 31,0);
    tracep->declBus(c+386,"y_i", false,-1, 31,0);
    tracep->declBus(c+387,"ang_i", false,-1, 20,0);
    tracep->declBus(c+617,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+388,"val_i", false,-1);
    tracep->declBus(c+389,"x_o", false,-1, 31,0);
    tracep->declBus(c+390,"y_o", false,-1, 31,0);
    tracep->declBus(c+391,"ang_o", false,-1, 20,0);
    tracep->declBit(c+388,"val_o", false,-1);
    tracep->declBus(c+392,"y_shift", false,-1, 31,0);
    tracep->declBus(c+393,"x_shift", false,-1, 31,0);
    tracep->declBit(c+394,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[4] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+618,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+395,"x_i", false,-1, 31,0);
    tracep->declBus(c+396,"y_i", false,-1, 31,0);
    tracep->declBus(c+397,"ang_i", false,-1, 20,0);
    tracep->declBus(c+619,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+398,"val_i", false,-1);
    tracep->declBus(c+399,"x_o", false,-1, 31,0);
    tracep->declBus(c+400,"y_o", false,-1, 31,0);
    tracep->declBus(c+401,"ang_o", false,-1, 20,0);
    tracep->declBit(c+398,"val_o", false,-1);
    tracep->declBus(c+402,"y_shift", false,-1, 31,0);
    tracep->declBus(c+403,"x_shift", false,-1, 31,0);
    tracep->declBit(c+404,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[5] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+620,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+405,"x_i", false,-1, 31,0);
    tracep->declBus(c+406,"y_i", false,-1, 31,0);
    tracep->declBus(c+407,"ang_i", false,-1, 20,0);
    tracep->declBus(c+621,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+408,"val_i", false,-1);
    tracep->declBus(c+409,"x_o", false,-1, 31,0);
    tracep->declBus(c+410,"y_o", false,-1, 31,0);
    tracep->declBus(c+411,"ang_o", false,-1, 20,0);
    tracep->declBit(c+408,"val_o", false,-1);
    tracep->declBus(c+412,"y_shift", false,-1, 31,0);
    tracep->declBus(c+413,"x_shift", false,-1, 31,0);
    tracep->declBit(c+414,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[6] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+595,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+415,"x_i", false,-1, 31,0);
    tracep->declBus(c+416,"y_i", false,-1, 31,0);
    tracep->declBus(c+417,"ang_i", false,-1, 20,0);
    tracep->declBus(c+622,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+418,"val_i", false,-1);
    tracep->declBus(c+419,"x_o", false,-1, 31,0);
    tracep->declBus(c+420,"y_o", false,-1, 31,0);
    tracep->declBus(c+421,"ang_o", false,-1, 20,0);
    tracep->declBit(c+418,"val_o", false,-1);
    tracep->declBus(c+422,"y_shift", false,-1, 31,0);
    tracep->declBus(c+423,"x_shift", false,-1, 31,0);
    tracep->declBit(c+424,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_pos[10] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+623,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+425,"x_i", false,-1, 31,0);
    tracep->declBus(c+426,"y_i", false,-1, 31,0);
    tracep->declBus(c+427,"ang_i", false,-1, 20,0);
    tracep->declBus(c+624,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+428,"val_i", false,-1);
    tracep->declBus(c+429,"x_o", false,-1, 31,0);
    tracep->declBus(c+430,"y_o", false,-1, 31,0);
    tracep->declBus(c+431,"ang_o", false,-1, 20,0);
    tracep->declBit(c+428,"val_o", false,-1);
    tracep->declBus(c+432,"y_shift", false,-1, 31,0);
    tracep->declBus(c+433,"x_shift", false,-1, 31,0);
    tracep->declBit(c+434,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+623,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+435,"x_i", false,-1, 31,0);
    tracep->declBus(c+436,"y_i", false,-1, 31,0);
    tracep->declBus(c+437,"ang_i", false,-1, 20,0);
    tracep->declBus(c+624,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+438,"val_i", false,-1);
    tracep->declBus(c+439,"x_o", false,-1, 31,0);
    tracep->declBus(c+440,"y_o", false,-1, 31,0);
    tracep->declBus(c+441,"ang_o", false,-1, 20,0);
    tracep->declBit(c+438,"val_o", false,-1);
    tracep->declBus(c+442,"y_shift", false,-1, 31,0);
    tracep->declBus(c+443,"x_shift", false,-1, 31,0);
    tracep->declBit(c+444,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[11] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+625,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+445,"x_i", false,-1, 31,0);
    tracep->declBus(c+446,"y_i", false,-1, 31,0);
    tracep->declBus(c+447,"ang_i", false,-1, 20,0);
    tracep->declBus(c+626,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+448,"val_i", false,-1);
    tracep->declBus(c+449,"x_o", false,-1, 31,0);
    tracep->declBus(c+450,"y_o", false,-1, 31,0);
    tracep->declBus(c+451,"ang_o", false,-1, 20,0);
    tracep->declBit(c+448,"val_o", false,-1);
    tracep->declBus(c+452,"y_shift", false,-1, 31,0);
    tracep->declBus(c+453,"x_shift", false,-1, 31,0);
    tracep->declBit(c+454,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[12] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+598,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+455,"x_i", false,-1, 31,0);
    tracep->declBus(c+456,"y_i", false,-1, 31,0);
    tracep->declBus(c+457,"ang_i", false,-1, 20,0);
    tracep->declBus(c+627,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+458,"val_i", false,-1);
    tracep->declBus(c+459,"x_o", false,-1, 31,0);
    tracep->declBus(c+460,"y_o", false,-1, 31,0);
    tracep->declBus(c+461,"ang_o", false,-1, 20,0);
    tracep->declBit(c+458,"val_o", false,-1);
    tracep->declBus(c+462,"y_shift", false,-1, 31,0);
    tracep->declBus(c+463,"x_shift", false,-1, 31,0);
    tracep->declBit(c+464,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[13] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+628,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+465,"x_i", false,-1, 31,0);
    tracep->declBus(c+466,"y_i", false,-1, 31,0);
    tracep->declBus(c+467,"ang_i", false,-1, 20,0);
    tracep->declBus(c+629,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+468,"val_i", false,-1);
    tracep->declBus(c+469,"x_o", false,-1, 31,0);
    tracep->declBus(c+470,"y_o", false,-1, 31,0);
    tracep->declBus(c+471,"ang_o", false,-1, 20,0);
    tracep->declBit(c+468,"val_o", false,-1);
    tracep->declBus(c+472,"y_shift", false,-1, 31,0);
    tracep->declBus(c+473,"x_shift", false,-1, 31,0);
    tracep->declBit(c+474,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[14] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+630,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+475,"x_i", false,-1, 31,0);
    tracep->declBus(c+476,"y_i", false,-1, 31,0);
    tracep->declBus(c+477,"ang_i", false,-1, 20,0);
    tracep->declBus(c+631,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+478,"val_i", false,-1);
    tracep->declBus(c+479,"x_o", false,-1, 31,0);
    tracep->declBus(c+480,"y_o", false,-1, 31,0);
    tracep->declBus(c+481,"ang_o", false,-1, 20,0);
    tracep->declBit(c+478,"val_o", false,-1);
    tracep->declBus(c+482,"y_shift", false,-1, 31,0);
    tracep->declBus(c+483,"x_shift", false,-1, 31,0);
    tracep->declBit(c+484,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[15] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+632,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+485,"x_i", false,-1, 31,0);
    tracep->declBus(c+486,"y_i", false,-1, 31,0);
    tracep->declBus(c+487,"ang_i", false,-1, 20,0);
    tracep->declBus(c+633,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+488,"val_i", false,-1);
    tracep->declBus(c+489,"x_o", false,-1, 31,0);
    tracep->declBus(c+490,"y_o", false,-1, 31,0);
    tracep->declBus(c+491,"ang_o", false,-1, 20,0);
    tracep->declBit(c+488,"val_o", false,-1);
    tracep->declBus(c+492,"y_shift", false,-1, 31,0);
    tracep->declBus(c+493,"x_shift", false,-1, 31,0);
    tracep->declBit(c+494,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[16] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+578,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+495,"x_i", false,-1, 31,0);
    tracep->declBus(c+496,"y_i", false,-1, 31,0);
    tracep->declBus(c+497,"ang_i", false,-1, 20,0);
    tracep->declBus(c+634,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+498,"val_i", false,-1);
    tracep->declBus(c+499,"x_o", false,-1, 31,0);
    tracep->declBus(c+500,"y_o", false,-1, 31,0);
    tracep->declBus(c+501,"ang_o", false,-1, 20,0);
    tracep->declBit(c+498,"val_o", false,-1);
    tracep->declBus(c+502,"y_shift", false,-1, 31,0);
    tracep->declBus(c+503,"x_shift", false,-1, 31,0);
    tracep->declBit(c+504,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[17] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+635,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+505,"x_i", false,-1, 31,0);
    tracep->declBus(c+506,"y_i", false,-1, 31,0);
    tracep->declBus(c+507,"ang_i", false,-1, 20,0);
    tracep->declBus(c+636,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+508,"val_i", false,-1);
    tracep->declBus(c+509,"x_o", false,-1, 31,0);
    tracep->declBus(c+510,"y_o", false,-1, 31,0);
    tracep->declBus(c+511,"ang_o", false,-1, 20,0);
    tracep->declBit(c+508,"val_o", false,-1);
    tracep->declBus(c+512,"y_shift", false,-1, 31,0);
    tracep->declBus(c+513,"x_shift", false,-1, 31,0);
    tracep->declBit(c+514,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[18] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+637,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+505,"x_i", false,-1, 31,0);
    tracep->declBus(c+506,"y_i", false,-1, 31,0);
    tracep->declBus(c+507,"ang_i", false,-1, 20,0);
    tracep->declBus(c+638,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+508,"val_i", false,-1);
    tracep->declBus(c+515,"x_o", false,-1, 31,0);
    tracep->declBus(c+516,"y_o", false,-1, 31,0);
    tracep->declBus(c+517,"ang_o", false,-1, 20,0);
    tracep->declBit(c+508,"val_o", false,-1);
    tracep->declBus(c+518,"y_shift", false,-1, 31,0);
    tracep->declBus(c+519,"x_shift", false,-1, 31,0);
    tracep->declBit(c+514,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+637,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+520,"x_i", false,-1, 31,0);
    tracep->declBus(c+521,"y_i", false,-1, 31,0);
    tracep->declBus(c+522,"ang_i", false,-1, 20,0);
    tracep->declBus(c+638,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+523,"val_i", false,-1);
    tracep->declBus(c+524,"x_o", false,-1, 31,0);
    tracep->declBus(c+525,"y_o", false,-1, 31,0);
    tracep->declBus(c+526,"ang_o", false,-1, 20,0);
    tracep->declBit(c+523,"val_o", false,-1);
    tracep->declBus(c+527,"y_shift", false,-1, 31,0);
    tracep->declBus(c+528,"x_shift", false,-1, 31,0);
    tracep->declBit(c+529,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[7] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+639,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+530,"x_i", false,-1, 31,0);
    tracep->declBus(c+531,"y_i", false,-1, 31,0);
    tracep->declBus(c+532,"ang_i", false,-1, 20,0);
    tracep->declBus(c+640,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+533,"val_i", false,-1);
    tracep->declBus(c+534,"x_o", false,-1, 31,0);
    tracep->declBus(c+535,"y_o", false,-1, 31,0);
    tracep->declBus(c+536,"ang_o", false,-1, 20,0);
    tracep->declBit(c+533,"val_o", false,-1);
    tracep->declBus(c+537,"y_shift", false,-1, 31,0);
    tracep->declBus(c+538,"x_shift", false,-1, 31,0);
    tracep->declBit(c+539,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[8] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+641,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+540,"x_i", false,-1, 31,0);
    tracep->declBus(c+541,"y_i", false,-1, 31,0);
    tracep->declBus(c+542,"ang_i", false,-1, 20,0);
    tracep->declBus(c+642,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+543,"val_i", false,-1);
    tracep->declBus(c+544,"x_o", false,-1, 31,0);
    tracep->declBus(c+545,"y_o", false,-1, 31,0);
    tracep->declBus(c+546,"ang_o", false,-1, 20,0);
    tracep->declBit(c+543,"val_o", false,-1);
    tracep->declBus(c+547,"y_shift", false,-1, 31,0);
    tracep->declBus(c+548,"x_shift", false,-1, 31,0);
    tracep->declBit(c+549,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[9] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+643,"stage_p", false,-1, 31,0);
    tracep->declBus(c+595,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+576,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+577,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+550,"x_i", false,-1, 31,0);
    tracep->declBus(c+551,"y_i", false,-1, 31,0);
    tracep->declBus(c+552,"ang_i", false,-1, 20,0);
    tracep->declBus(c+644,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+553,"val_i", false,-1);
    tracep->declBus(c+554,"x_o", false,-1, 31,0);
    tracep->declBus(c+555,"y_o", false,-1, 31,0);
    tracep->declBus(c+556,"ang_o", false,-1, 20,0);
    tracep->declBit(c+553,"val_o", false,-1);
    tracep->declBus(c+557,"y_shift", false,-1, 31,0);
    tracep->declBus(c+558,"x_shift", false,-1, 31,0);
    tracep->declBit(c+559,"rot_op", false,-1);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vbsg_activation___024root__trace_init_top(Vbsg_activation___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_init_top\n"); );
    // Body
    Vbsg_activation___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbsg_activation___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_activation___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_activation___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbsg_activation___024root__trace_register(Vbsg_activation___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbsg_activation___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbsg_activation___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbsg_activation___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbsg_activation___024root__trace_full_sub_0(Vbsg_activation___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbsg_activation___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_full_top_0\n"); );
    // Init
    Vbsg_activation___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_activation___024root*>(voidSelf);
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbsg_activation___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<13>/*415:0*/ Vbsg_activation__ConstPool__CONST_h154117da_0;

VL_ATTR_COLD void Vbsg_activation___024root__trace_full_sub_0(Vbsg_activation___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h7e2db42b__0;
    VlWide<4>/*127:0*/ __Vtemp_h3a2403cf__0;
    VlWide<4>/*127:0*/ __Vtemp_he2f3ca2d__0;
    VlWide<5>/*159:0*/ __Vtemp_he6125479__0;
    VlWide<5>/*159:0*/ __Vtemp_h2b177d0e__0;
    VlWide<5>/*159:0*/ __Vtemp_hd87aee4a__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->bsg_activation__DOT__data_n),32);
    bufp->fullQData(oldp+2,(vlSelf->bsg_activation__DOT__dividend_li),48);
    bufp->fullQData(oldp+4,(vlSelf->bsg_activation__DOT__divisor_li),48);
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelf->bsg_activation__DOT__bypass)) 
                           & (1U == (IData)(vlSelf->bsg_activation__DOT__state_r)))));
    bufp->fullBit(oldp+7,(vlSelf->bsg_activation__DOT__divider_v_i));
    bufp->fullBit(oldp+8,(vlSelf->bsg_activation__DOT__bypass));
    bufp->fullBit(oldp+9,(vlSelf->bsg_activation__DOT__load_ang));
    bufp->fullBit(oldp+10,(vlSelf->bsg_activation__DOT__divider_sel));
    bufp->fullCData(oldp+11,(vlSelf->bsg_activation__DOT__state_n),2);
    bufp->fullBit(oldp+12,((1U & (IData)((vlSelf->bsg_activation__DOT__divisor_li 
                                          >> 0x2fU)))));
    bufp->fullBit(oldp+13,(vlSelf->bsg_activation__DOT__divider__DOT__latch_signed_div_lo));
    bufp->fullCData(oldp+14,(vlSelf->bsg_activation__DOT__divider__DOT__opA_sel_lo),2);
    bufp->fullQData(oldp+15,(vlSelf->bsg_activation__DOT__divider__DOT__opA_mux),49);
    bufp->fullQData(oldp+17,(vlSelf->bsg_activation__DOT__divider__DOT__opC_mux),49);
    bufp->fullCData(oldp+19,(vlSelf->bsg_activation__DOT__divider__DOT__opC_sel_lo),3);
    bufp->fullBit(oldp+20,(vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo));
    bufp->fullBit(oldp+21,(vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo));
    bufp->fullCData(oldp+22,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state),6);
    __Vtemp_h7e2db42b__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0);
    __Vtemp_h7e2db42b__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                 << 0x11U) | (IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                      >> 0x20U)));
    __Vtemp_h7e2db42b__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_h7e2db42b__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                 << 2U) | ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                    >> 0x20U)) 
                                           >> 0xfU));
    __Vtemp_h7e2db42b__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                                       >> 0x20U)) 
                                              << 2U));
    bufp->fullWData(oldp+23,(__Vtemp_h7e2db42b__0),147);
    bufp->fullCData(oldp+28,(((4U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0))))),3);
    bufp->fullCData(oldp+29,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xaU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xaU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xaU)))))),3);
    bufp->fullCData(oldp+30,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xbU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xbU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xbU)))))),3);
    bufp->fullCData(oldp+31,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xcU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xcU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xcU)))))),3);
    bufp->fullCData(oldp+32,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xdU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xdU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xdU)))))),3);
    bufp->fullCData(oldp+33,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xeU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xeU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xeU)))))),3);
    bufp->fullCData(oldp+34,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0xfU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0xfU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0xfU)))))),3);
    bufp->fullCData(oldp+35,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x10U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x10U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x10U)))))),3);
    bufp->fullCData(oldp+36,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x11U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x11U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x11U)))))),3);
    bufp->fullCData(oldp+37,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x12U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x12U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x12U)))))),3);
    bufp->fullCData(oldp+38,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x13U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x13U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x13U)))))),3);
    bufp->fullCData(oldp+39,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 1U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 1U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 1U)))))),3);
    bufp->fullCData(oldp+40,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x14U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x14U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x14U)))))),3);
    bufp->fullCData(oldp+41,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x15U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x15U)))))),3);
    bufp->fullCData(oldp+42,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x16U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x16U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x16U)))))),3);
    bufp->fullCData(oldp+43,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x17U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x17U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x17U)))))),3);
    bufp->fullCData(oldp+44,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x18U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x18U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x18U)))))),3);
    bufp->fullCData(oldp+45,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x19U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x19U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x19U)))))),3);
    bufp->fullCData(oldp+46,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1aU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1aU)))))),3);
    bufp->fullCData(oldp+47,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1bU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1bU)))))),3);
    bufp->fullCData(oldp+48,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1cU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1cU)))))),3);
    bufp->fullCData(oldp+49,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1dU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1dU)))))),3);
    bufp->fullCData(oldp+50,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 2U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 2U)))))),3);
    bufp->fullCData(oldp+51,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1eU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1eU)))))),3);
    bufp->fullCData(oldp+52,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x1fU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x1fU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x1fU)))))),3);
    bufp->fullCData(oldp+53,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x20U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x20U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x20U)))))),3);
    bufp->fullCData(oldp+54,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x21U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x21U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x21U)))))),3);
    bufp->fullCData(oldp+55,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x22U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x22U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x22U)))))),3);
    bufp->fullCData(oldp+56,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x23U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x23U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x23U)))))),3);
    bufp->fullCData(oldp+57,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x24U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x24U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x24U)))))),3);
    bufp->fullCData(oldp+58,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x25U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x25U)))))),3);
    bufp->fullCData(oldp+59,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x26U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x26U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x26U)))))),3);
    bufp->fullCData(oldp+60,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x27U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x27U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x27U)))))),3);
    bufp->fullCData(oldp+61,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 3U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 3U)))))),3);
    bufp->fullCData(oldp+62,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x28U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x28U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x28U)))))),3);
    bufp->fullCData(oldp+63,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x29U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x29U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x29U)))))),3);
    bufp->fullCData(oldp+64,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2aU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2aU)))))),3);
    bufp->fullCData(oldp+65,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2bU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2bU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2bU)))))),3);
    bufp->fullCData(oldp+66,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2cU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2cU)))))),3);
    bufp->fullCData(oldp+67,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2dU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2dU)))))),3);
    bufp->fullCData(oldp+68,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2eU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2eU)))))),3);
    bufp->fullCData(oldp+69,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x2fU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x2fU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x2fU)))))),3);
    bufp->fullCData(oldp+70,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 0x30U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 0x30U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 0x30U)))))),3);
    bufp->fullCData(oldp+71,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 4U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 4U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 4U)))))),3);
    bufp->fullCData(oldp+72,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 5U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 5U)))))),3);
    bufp->fullCData(oldp+73,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 6U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 6U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 6U)))))),3);
    bufp->fullCData(oldp+74,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 7U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 7U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 7U)))))),3);
    bufp->fullCData(oldp+75,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 8U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 8U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 8U)))))),3);
    bufp->fullCData(oldp+76,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h184ecf3f__0 
                                              >> 9U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h42a7f16b__0 
                                                             >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
                                                              >> 9U)))))),3);
    __Vtemp_h3a2403cf__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out);
    __Vtemp_h3a2403cf__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divisor_li) 
                                 << 0x11U) | (IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                      >> 0x20U)));
    __Vtemp_h3a2403cf__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divisor_li) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divisor_li 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_h3a2403cf__0[3U] = ((2U & ((IData)((vlSelf->bsg_activation__DOT__divisor_li 
                                                >> 0x2fU)) 
                                       << 1U)) | ((IData)(
                                                          (vlSelf->bsg_activation__DOT__divisor_li 
                                                           >> 0x20U)) 
                                                  >> 0xfU));
    bufp->fullWData(oldp+77,(__Vtemp_h3a2403cf__0),98);
    __Vtemp_he2f3ca2d__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0);
    __Vtemp_he2f3ca2d__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                 << 0x11U) | (IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                      >> 0x20U)));
    __Vtemp_he2f3ca2d__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_he2f3ca2d__0[3U] = ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                         >> 0x20U)) 
                                >> 0xfU);
    bufp->fullWData(oldp+81,(__Vtemp_he2f3ca2d__0),98);
    bufp->fullCData(oldp+85,(((2U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0)))),2);
    bufp->fullCData(oldp+86,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xaU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xaU))))),2);
    bufp->fullCData(oldp+87,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xbU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xbU))))),2);
    bufp->fullCData(oldp+88,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xcU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xcU))))),2);
    bufp->fullCData(oldp+89,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xdU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xdU))))),2);
    bufp->fullCData(oldp+90,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xeU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xeU))))),2);
    bufp->fullCData(oldp+91,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0xfU)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0xfU))))),2);
    bufp->fullCData(oldp+92,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x10U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x10U))))),2);
    bufp->fullCData(oldp+93,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x11U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x11U))))),2);
    bufp->fullCData(oldp+94,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x12U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x12U))))),2);
    bufp->fullCData(oldp+95,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x13U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x13U))))),2);
    bufp->fullCData(oldp+96,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 1U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 1U))))),2);
    bufp->fullCData(oldp+97,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x14U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x14U))))),2);
    bufp->fullCData(oldp+98,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x15U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x15U))))),2);
    bufp->fullCData(oldp+99,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                              >> 0x16U)) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                           >> 0x16U))))),2);
    bufp->fullCData(oldp+100,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x17U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x17U))))),2);
    bufp->fullCData(oldp+101,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x18U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x18U))))),2);
    bufp->fullCData(oldp+102,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x19U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x19U))))),2);
    bufp->fullCData(oldp+103,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1aU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1aU))))),2);
    bufp->fullCData(oldp+104,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1bU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1bU))))),2);
    bufp->fullCData(oldp+105,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1cU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1cU))))),2);
    bufp->fullCData(oldp+106,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1dU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1dU))))),2);
    bufp->fullCData(oldp+107,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 2U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 2U))))),2);
    bufp->fullCData(oldp+108,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1eU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1eU))))),2);
    bufp->fullCData(oldp+109,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x1fU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x1fU))))),2);
    bufp->fullCData(oldp+110,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x20U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x20U))))),2);
    bufp->fullCData(oldp+111,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x21U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x21U))))),2);
    bufp->fullCData(oldp+112,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x22U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x22U))))),2);
    bufp->fullCData(oldp+113,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x23U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x23U))))),2);
    bufp->fullCData(oldp+114,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x24U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x24U))))),2);
    bufp->fullCData(oldp+115,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x25U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x25U))))),2);
    bufp->fullCData(oldp+116,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x26U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x26U))))),2);
    bufp->fullCData(oldp+117,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x27U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x27U))))),2);
    bufp->fullCData(oldp+118,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 3U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 3U))))),2);
    bufp->fullCData(oldp+119,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x28U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x28U))))),2);
    bufp->fullCData(oldp+120,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x29U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x29U))))),2);
    bufp->fullCData(oldp+121,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2aU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2aU))))),2);
    bufp->fullCData(oldp+122,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2bU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2bU))))),2);
    bufp->fullCData(oldp+123,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2cU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2cU))))),2);
    bufp->fullCData(oldp+124,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2dU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2dU))))),2);
    bufp->fullCData(oldp+125,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2eU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2eU))))),2);
    bufp->fullCData(oldp+126,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x2fU)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x2fU))))),2);
    bufp->fullCData(oldp+127,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 0x30U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 0x30U))))),2);
    bufp->fullCData(oldp+128,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 4U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 4U))))),2);
    bufp->fullCData(oldp+129,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 5U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 5U))))),2);
    bufp->fullCData(oldp+130,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 6U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 6U))))),2);
    bufp->fullCData(oldp+131,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 7U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 7U))))),2);
    bufp->fullCData(oldp+132,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 8U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 8U))))),2);
    bufp->fullCData(oldp+133,(((2U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_h42a7f16b__0 
                                               >> 9U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT____VdfgTmp_ha3a8a75d__0 
                                                            >> 9U))))),2);
    bufp->fullIData(oldp+134,(vlSelf->bsg_activation__DOT__ang_r),21);
    bufp->fullIData(oldp+135,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U]),32);
    bufp->fullIData(oldp+136,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x14U]),32);
    bufp->fullIData(oldp+137,(vlSelf->bsg_activation__DOT__negExp),32);
    bufp->fullIData(oldp+138,(vlSelf->bsg_activation__DOT__data_r),32);
    bufp->fullQData(oldp+139,((0xffffffffffffULL & vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
    bufp->fullQData(oldp+141,((0xffffffffffffULL & vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0x14U))));
    bufp->fullBit(oldp+145,((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))));
    bufp->fullBit(oldp+146,((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))));
    bufp->fullCData(oldp+147,(vlSelf->bsg_activation__DOT__state_r),2);
    bufp->fullQData(oldp+148,(vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r),49);
    bufp->fullQData(oldp+150,(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r),49);
    bufp->fullBit(oldp+152,(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r));
    bufp->fullBit(oldp+153,((1U & (~ (IData)((0U != vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r))))));
    bufp->fullQData(oldp+154,(vlSelf->bsg_activation__DOT__divider__DOT__add1_out),49);
    bufp->fullQData(oldp+156,(vlSelf->bsg_activation__DOT__divider__DOT__opB_mux),49);
    bufp->fullCData(oldp+158,(vlSelf->bsg_activation__DOT__divider__DOT__opB_sel_lo),3);
    bufp->fullBit(oldp+159,(vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo));
    bufp->fullQData(oldp+160,(vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r),49);
    bufp->fullBit(oldp+162,(vlSelf->bsg_activation__DOT__divider__DOT__opA_inv_lo));
    bufp->fullBit(oldp+163,(vlSelf->bsg_activation__DOT__divider__DOT__opB_inv_lo));
    bufp->fullBit(oldp+164,(vlSelf->bsg_activation__DOT__divider__DOT__opA_clr_lo));
    bufp->fullBit(oldp+165,(vlSelf->bsg_activation__DOT__divider__DOT__opB_clr_lo));
    bufp->fullQData(oldp+166,((0x1ffffffffffffULL & 
                               ((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                                 ^ (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opA_inv_lo)))) 
                                & (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opA_clr_lo)))))),49);
    bufp->fullQData(oldp+168,((0x1ffffffffffffULL & 
                               ((vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r 
                                 ^ (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opB_inv_lo)))) 
                                & (- (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opB_clr_lo)))))),49);
    bufp->fullBit(oldp+170,(vlSelf->bsg_activation__DOT__divider__DOT__adder1_cin_lo));
    bufp->fullBit(oldp+171,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+172,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+173,((1U & (IData)((vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+174,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__q_neg_r));
    bufp->fullBit(oldp+175,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r));
    bufp->fullBit(oldp+176,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld));
    bufp->fullBit(oldp+177,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r));
    bufp->fullBit(oldp+178,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add2_neg_last_r));
    bufp->fullCData(oldp+179,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state),6);
    bufp->fullCData(oldp+180,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt),6);
    bufp->fullBit(oldp+181,(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li));
    bufp->fullBit(oldp+182,((0x30U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt))));
    __Vtemp_he6125479__0[0U] = (IData)(((0x1fffffffffffeULL 
                                         & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                            << 1U)) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                      >> 0x30U)))))));
    __Vtemp_he6125479__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 << 0x11U) | (IData)(
                                                     (((0x1fffffffffffeULL 
                                                        & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                           << 1U)) 
                                                       | (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                                >> 0x30U)))))) 
                                                      >> 0x20U)));
    __Vtemp_he6125479__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_he6125479__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                 << 2U) | ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                    >> 0x20U)) 
                                           >> 0xfU));
    __Vtemp_he6125479__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                       >> 0x20U)) 
                                              << 2U));
    bufp->fullWData(oldp+183,(__Vtemp_he6125479__0),147);
    __Vtemp_h2b177d0e__0[0U] = (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0);
    __Vtemp_h2b177d0e__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                 << 0x11U) | (IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                      >> 0x20U)));
    __Vtemp_h2b177d0e__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_h2b177d0e__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                 << 2U) | ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                    >> 0x20U)) 
                                           >> 0xfU));
    __Vtemp_h2b177d0e__0[4U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                                       >> 0x20U)) 
                                              << 2U));
    bufp->fullWData(oldp+188,(__Vtemp_h2b177d0e__0),147);
    bufp->fullCData(oldp+193,(((4U & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0))))),3);
    bufp->fullCData(oldp+194,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xaU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xaU)))))),3);
    bufp->fullCData(oldp+195,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xbU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xbU)))))),3);
    bufp->fullCData(oldp+196,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xcU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xcU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xcU)))))),3);
    bufp->fullCData(oldp+197,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xdU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xdU)))))),3);
    bufp->fullCData(oldp+198,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xeU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xeU)))))),3);
    bufp->fullCData(oldp+199,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0xfU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0xfU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0xfU)))))),3);
    bufp->fullCData(oldp+200,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x10U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x10U)))))),3);
    bufp->fullCData(oldp+201,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x11U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x11U)))))),3);
    bufp->fullCData(oldp+202,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x12U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x12U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x12U)))))),3);
    bufp->fullCData(oldp+203,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x13U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x13U)))))),3);
    bufp->fullCData(oldp+204,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 1U)))))),3);
    bufp->fullCData(oldp+205,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x14U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x14U)))))),3);
    bufp->fullCData(oldp+206,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x15U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x15U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x15U)))))),3);
    bufp->fullCData(oldp+207,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x16U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x16U)))))),3);
    bufp->fullCData(oldp+208,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x17U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x17U)))))),3);
    bufp->fullCData(oldp+209,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x18U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x18U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x18U)))))),3);
    bufp->fullCData(oldp+210,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x19U)))))),3);
    bufp->fullCData(oldp+211,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1aU)))))),3);
    bufp->fullCData(oldp+212,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1bU)))))),3);
    bufp->fullCData(oldp+213,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1cU)))))),3);
    bufp->fullCData(oldp+214,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1dU)))))),3);
    bufp->fullCData(oldp+215,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 2U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 2U)))))),3);
    bufp->fullCData(oldp+216,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1eU)))))),3);
    bufp->fullCData(oldp+217,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x1fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x1fU)))))),3);
    bufp->fullCData(oldp+218,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x20U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x20U)))))),3);
    bufp->fullCData(oldp+219,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x21U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x21U)))))),3);
    bufp->fullCData(oldp+220,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x22U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x22U)))))),3);
    bufp->fullCData(oldp+221,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x23U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x23U)))))),3);
    bufp->fullCData(oldp+222,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x24U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x24U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x24U)))))),3);
    bufp->fullCData(oldp+223,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x25U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x25U)))))),3);
    bufp->fullCData(oldp+224,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x26U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x26U)))))),3);
    bufp->fullCData(oldp+225,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x27U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x27U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x27U)))))),3);
    bufp->fullCData(oldp+226,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 3U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 3U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 3U)))))),3);
    bufp->fullCData(oldp+227,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x28U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x28U)))))),3);
    bufp->fullCData(oldp+228,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x29U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x29U)))))),3);
    bufp->fullCData(oldp+229,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2aU)))))),3);
    bufp->fullCData(oldp+230,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2bU)))))),3);
    bufp->fullCData(oldp+231,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2cU)))))),3);
    bufp->fullCData(oldp+232,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2dU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2dU)))))),3);
    bufp->fullCData(oldp+233,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2eU)))))),3);
    bufp->fullCData(oldp+234,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x2fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x2fU)))))),3);
    bufp->fullCData(oldp+235,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 0x30U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 0x30U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 0x30U)))))),3);
    bufp->fullCData(oldp+236,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 4U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 4U)))))),3);
    bufp->fullCData(oldp+237,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 5U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 5U)))))),3);
    bufp->fullCData(oldp+238,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 6U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 6U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 6U)))))),3);
    bufp->fullCData(oldp+239,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 7U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 7U)))))),3);
    bufp->fullCData(oldp+240,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 8U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 8U)))))),3);
    bufp->fullCData(oldp+241,(((4U & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h184ecf3f__0 
                                               >> 9U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_h42a7f16b__0 
                                                              >> 9U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT____VdfgTmp_ha3a8a75d__0 
                                                               >> 9U)))))),3);
    bufp->fullWData(oldp+242,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x),672);
    bufp->fullWData(oldp+263,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y),672);
    bufp->fullWData(oldp+284,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang),441);
    bufp->fullIData(oldp+298,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__val),21);
    bufp->fullWData(oldp+299,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans),640);
    bufp->fullWData(oldp+319,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans),640);
    bufp->fullWData(oldp+339,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans),420);
    bufp->fullIData(oldp+353,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans),20);
    bufp->fullBit(oldp+354,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe));
    bufp->fullIData(oldp+355,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]),32);
    bufp->fullIData(oldp+356,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]),32);
    bufp->fullIData(oldp+357,((0x1fffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])),21);
    bufp->fullBit(oldp+358,((1U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val)));
    bufp->fullIData(oldp+359,(((0x100000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
    bufp->fullIData(oldp+360,(((0x100000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
    bufp->fullIData(oldp+361,((0x1fffffU & ((0x100000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                             ? ((IData)(0x31e41U) 
                                                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                                             : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                - (IData)(0x31e41U))))),21);
    bufp->fullIData(oldp+362,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U)),32);
    bufp->fullIData(oldp+363,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U)),32);
    bufp->fullBit(oldp+364,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                   >> 0x14U))));
    bufp->fullIData(oldp+365,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]),32);
    bufp->fullIData(oldp+366,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]),32);
    bufp->fullIData(oldp+367,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0xbU) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x15U)))),21);
    bufp->fullBit(oldp+368,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 1U))));
    bufp->fullIData(oldp+369,(((0x200U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
    bufp->fullIData(oldp+370,(((0x200U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
    bufp->fullIData(oldp+371,((0x1fffffU & ((0x200U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                             ? ((IData)(0x2c548U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                    << 0xbU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                      >> 0x15U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0xbU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                                    >> 0x15U)) 
                                                - (IData)(0x2c548U))))),21);
    bufp->fullIData(oldp+372,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U)),32);
    bufp->fullIData(oldp+373,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U)),32);
    bufp->fullBit(oldp+374,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                   >> 9U))));
    bufp->fullIData(oldp+375,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]),32);
    bufp->fullIData(oldp+376,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]),32);
    bufp->fullIData(oldp+377,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                            >> 0xaU))),21);
    bufp->fullBit(oldp+378,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 2U))));
    bufp->fullIData(oldp+379,(((0x40000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
    bufp->fullIData(oldp+380,(((0x40000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
    bufp->fullIData(oldp+381,((0x1fffffU & ((0x40000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                                             ? ((IData)(0x26c0eU) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                      >> 0xaU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0x16U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0xaU)) 
                                                - (IData)(0x26c0eU))))),21);
    bufp->fullIData(oldp+382,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U)),32);
    bufp->fullIData(oldp+383,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U)),32);
    bufp->fullBit(oldp+384,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+385,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]),32);
    bufp->fullIData(oldp+386,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]),32);
    bufp->fullIData(oldp+387,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                             << 1U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0x1fU)))),21);
    bufp->fullBit(oldp+388,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 3U))));
    bufp->fullIData(oldp+389,(((0x80000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
    bufp->fullIData(oldp+390,(((0x80000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
    bufp->fullIData(oldp+391,((0x1fffffU & ((0x80000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                                             ? ((IData)(0x21252U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                    << 1U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                      >> 0x1fU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                  << 1U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0x1fU)) 
                                                - (IData)(0x21252U))))),21);
    bufp->fullIData(oldp+392,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U)),32);
    bufp->fullIData(oldp+393,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U)),32);
    bufp->fullBit(oldp+394,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                   >> 0x13U))));
    bufp->fullIData(oldp+395,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]),32);
    bufp->fullIData(oldp+396,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]),32);
    bufp->fullIData(oldp+397,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0xcU) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x14U)))),21);
    bufp->fullBit(oldp+398,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 4U))));
    bufp->fullIData(oldp+399,(((0x100U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
    bufp->fullIData(oldp+400,(((0x100U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
    bufp->fullIData(oldp+401,((0x1fffffU & ((0x100U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                             ? ((IData)(0x1b78cU) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                      >> 0x14U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0xcU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                                    >> 0x14U)) 
                                                - (IData)(0x1b78cU))))),21);
    bufp->fullIData(oldp+402,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U)),32);
    bufp->fullIData(oldp+403,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U)),32);
    bufp->fullBit(oldp+404,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                   >> 8U))));
    bufp->fullIData(oldp+405,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]),32);
    bufp->fullIData(oldp+406,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]),32);
    bufp->fullIData(oldp+407,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                            >> 9U))),21);
    bufp->fullBit(oldp+408,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 5U))));
    bufp->fullIData(oldp+409,(((0x20000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
    bufp->fullIData(oldp+410,(((0x20000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
    bufp->fullIData(oldp+411,((0x1fffffU & ((0x20000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                                             ? ((IData)(0x15aa1U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                      >> 9U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0x17U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 9U)) 
                                                - (IData)(0x15aa1U))))),21);
    bufp->fullIData(oldp+412,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U)),32);
    bufp->fullIData(oldp+413,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U)),32);
    bufp->fullBit(oldp+414,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                   >> 0x1dU))));
    bufp->fullIData(oldp+415,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]),32);
    bufp->fullIData(oldp+416,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]),32);
    bufp->fullIData(oldp+417,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                             << 2U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 0x1eU)))),21);
    bufp->fullBit(oldp+418,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 6U))));
    bufp->fullIData(oldp+419,(((0x40000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
    bufp->fullIData(oldp+420,(((0x40000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                ? ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U] 
                                    - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]) 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
    bufp->fullIData(oldp+421,((0x1fffffU & ((0x40000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                                             ? ((IData)(0xf913U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                      >> 0x1eU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                  << 2U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 0x1eU)) 
                                                - (IData)(0xf913U))))),21);
    bufp->fullIData(oldp+422,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U)),32);
    bufp->fullIData(oldp+423,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U)),32);
    bufp->fullBit(oldp+424,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                   >> 0x12U))));
    bufp->fullIData(oldp+425,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU]),32);
    bufp->fullIData(oldp+426,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU]),32);
    bufp->fullIData(oldp+427,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                             << 0xeU) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                               >> 0x12U)))),21);
    bufp->fullBit(oldp+428,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xaU))));
    bufp->fullIData(oldp+429,(((0x40U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
    bufp->fullIData(oldp+430,(((0x40U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
    bufp->fullIData(oldp+431,((0x1fffffU & ((0x40U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                             ? ((IData)(0x1005U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                      >> 0x12U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                  << 0xeU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                    >> 0x12U)) 
                                                - (IData)(0x1005U))))),21);
    bufp->fullIData(oldp+432,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
    bufp->fullIData(oldp+433,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
    bufp->fullBit(oldp+434,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                   >> 6U))));
    bufp->fullIData(oldp+435,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU]),32);
    bufp->fullIData(oldp+436,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU]),32);
    bufp->fullIData(oldp+437,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                            >> 7U))),21);
    bufp->fullBit(oldp+438,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xbU))));
    bufp->fullIData(oldp+439,(((0x8000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
    bufp->fullIData(oldp+440,(((0x8000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
    bufp->fullIData(oldp+441,((0x1fffffU & ((0x8000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                                             ? ((IData)(0x1005U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                      >> 7U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                  << 0x19U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                    >> 7U)) 
                                                - (IData)(0x1005U))))),21);
    bufp->fullIData(oldp+442,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
    bufp->fullIData(oldp+443,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
    bufp->fullBit(oldp+444,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+445,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU]),32);
    bufp->fullIData(oldp+446,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU]),32);
    bufp->fullIData(oldp+447,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                             << 4U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 0x1cU)))),21);
    bufp->fullBit(oldp+448,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xcU))));
    bufp->fullIData(oldp+449,(((0x10000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
    bufp->fullIData(oldp+450,(((0x10000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
    bufp->fullIData(oldp+451,((0x1fffffU & ((0x10000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
                                             ? ((IData)(0x800U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                      >> 0x1cU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                  << 4U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                                    >> 0x1cU)) 
                                                - (IData)(0x800U))))),21);
    bufp->fullIData(oldp+452,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
    bufp->fullIData(oldp+453,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
    bufp->fullBit(oldp+454,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+455,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU]),32);
    bufp->fullIData(oldp+456,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU]),32);
    bufp->fullIData(oldp+457,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                             << 0xfU) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                               >> 0x11U)))),21);
    bufp->fullBit(oldp+458,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xdU))));
    bufp->fullIData(oldp+459,(((0x20U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
    bufp->fullIData(oldp+460,(((0x20U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
    bufp->fullIData(oldp+461,((0x1fffffU & ((0x20U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                             ? ((IData)(0x400U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                    << 0xfU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                      >> 0x11U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                  << 0xfU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
                                                    >> 0x11U)) 
                                                - (IData)(0x400U))))),21);
    bufp->fullIData(oldp+462,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
    bufp->fullIData(oldp+463,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
    bufp->fullBit(oldp+464,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                   >> 5U))));
    bufp->fullIData(oldp+465,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU]),32);
    bufp->fullIData(oldp+466,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU]),32);
    bufp->fullIData(oldp+467,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                            >> 6U))),21);
    bufp->fullBit(oldp+468,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xeU))));
    bufp->fullIData(oldp+469,(((0x4000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
    bufp->fullIData(oldp+470,(((0x4000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
    bufp->fullIData(oldp+471,((0x1fffffU & ((0x4000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
                                             ? ((IData)(0x200U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                      >> 6U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                    >> 6U)) 
                                                - (IData)(0x200U))))),21);
    bufp->fullIData(oldp+472,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
    bufp->fullIData(oldp+473,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
    bufp->fullBit(oldp+474,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                   >> 0x1aU))));
    bufp->fullIData(oldp+475,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU]),32);
    bufp->fullIData(oldp+476,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU]),32);
    bufp->fullIData(oldp+477,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                             << 5U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 0x1bU)))),21);
    bufp->fullBit(oldp+478,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0xfU))));
    bufp->fullIData(oldp+479,(((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
    bufp->fullIData(oldp+480,(((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
    bufp->fullIData(oldp+481,((0x1fffffU & ((0x8000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU])
                                             ? ((IData)(0x100U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    << 5U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                      >> 0x1bU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                  << 5U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
                                                    >> 0x1bU)) 
                                                - (IData)(0x100U))))),21);
    bufp->fullIData(oldp+482,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
    bufp->fullIData(oldp+483,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
    bufp->fullBit(oldp+484,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                   >> 0xfU))));
    bufp->fullIData(oldp+485,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U]),32);
    bufp->fullIData(oldp+486,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U]),32);
    bufp->fullIData(oldp+487,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                               >> 0x10U)))),21);
    bufp->fullBit(oldp+488,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0x10U))));
    bufp->fullIData(oldp+489,(((0x10U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
    bufp->fullIData(oldp+490,(((0x10U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
    bufp->fullIData(oldp+491,((0x1fffffU & ((0x10U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                             ? ((IData)(0x80U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                      >> 0x10U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    >> 0x10U)) 
                                                - (IData)(0x80U))))),21);
    bufp->fullIData(oldp+492,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
    bufp->fullIData(oldp+493,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
    bufp->fullBit(oldp+494,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                   >> 4U))));
    bufp->fullIData(oldp+495,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U]),32);
    bufp->fullIData(oldp+496,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U]),32);
    bufp->fullIData(oldp+497,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                            >> 5U))),21);
    bufp->fullBit(oldp+498,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0x11U))));
    bufp->fullIData(oldp+499,(((0x2000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+500,(((0x2000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+501,((0x1fffffU & ((0x2000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU])
                                             ? ((IData)(0x40U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    << 0x1bU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 5U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x1bU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 5U)) 
                                                - (IData)(0x40U))))),21);
    bufp->fullIData(oldp+502,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
    bufp->fullIData(oldp+503,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
    bufp->fullBit(oldp+504,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+505,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U]),32);
    bufp->fullIData(oldp+506,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U]),32);
    bufp->fullIData(oldp+507,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                             << 6U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                               >> 0x1aU)))),21);
    bufp->fullBit(oldp+508,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0x12U))));
    bufp->fullIData(oldp+509,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+510,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+511,((0x1fffffU & ((0x4000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                             ? ((IData)(0x20U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)) 
                                                - (IData)(0x20U))))),21);
    bufp->fullIData(oldp+512,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
    bufp->fullIData(oldp+513,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
    bufp->fullBit(oldp+514,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+515,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+516,(((0x4000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+517,((0x1fffffU & ((0x4000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU])
                                             ? ((IData)(0x10U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    << 6U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                      >> 0x1aU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)) 
                                                - (IData)(0x10U))))),21);
    bufp->fullIData(oldp+518,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+519,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+520,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U]),32);
    bufp->fullIData(oldp+521,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U]),32);
    bufp->fullIData(oldp+522,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                             << 0x11U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                               >> 0xfU)))),21);
    bufp->fullBit(oldp+523,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 0x13U))));
    bufp->fullIData(oldp+524,(((8U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+525,(((8U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+526,((0x1fffffU & ((8U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU])
                                             ? ((IData)(0x10U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                      >> 0xfU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    >> 0xfU)) 
                                                - (IData)(0x10U))))),21);
    bufp->fullIData(oldp+527,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
    bufp->fullIData(oldp+528,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
    bufp->fullBit(oldp+529,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xdU] 
                                   >> 3U))));
    bufp->fullIData(oldp+530,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U]),32);
    bufp->fullIData(oldp+531,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U]),32);
    bufp->fullIData(oldp+532,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                             << 0xdU) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                               >> 0x13U)))),21);
    bufp->fullBit(oldp+533,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 7U))));
    bufp->fullIData(oldp+534,(((0x80U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
    bufp->fullIData(oldp+535,(((0x80U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
    bufp->fullIData(oldp+536,((0x1fffffU & ((0x80U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                             ? ((IData)(0x8c9fU) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                      >> 0x13U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0xdU) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                                    >> 0x13U)) 
                                                - (IData)(0x8c9fU))))),21);
    bufp->fullIData(oldp+537,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U)),32);
    bufp->fullIData(oldp+538,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U)),32);
    bufp->fullBit(oldp+539,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                   >> 7U))));
    bufp->fullIData(oldp+540,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U]),32);
    bufp->fullIData(oldp+541,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U]),32);
    bufp->fullIData(oldp+542,((0x1fffffU & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                            >> 8U))),21);
    bufp->fullBit(oldp+543,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 8U))));
    bufp->fullIData(oldp+544,(((0x10000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
    bufp->fullIData(oldp+545,(((0x10000000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
    bufp->fullIData(oldp+546,((0x1fffffU & ((0x10000000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                                             ? ((IData)(0x4162U) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                      >> 8U)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 8U)) 
                                                - (IData)(0x4162U))))),21);
    bufp->fullIData(oldp+547,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U)),32);
    bufp->fullIData(oldp+548,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U)),32);
    bufp->fullBit(oldp+549,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+550,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U]),32);
    bufp->fullIData(oldp+551,(vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U]),32);
    bufp->fullIData(oldp+552,((0x1fffffU & ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                             << 3U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 0x1dU)))),21);
    bufp->fullBit(oldp+553,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
                                   >> 9U))));
    bufp->fullIData(oldp+554,(((0x20000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
    bufp->fullIData(oldp+555,(((0x20000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                ? (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U))
                                : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
    bufp->fullIData(oldp+556,((0x1fffffU & ((0x20000U 
                                             & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                                             ? ((IData)(0x202bU) 
                                                + (
                                                   (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                      >> 0x1dU)))
                                             : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                                  << 3U) 
                                                 | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 0x1dU)) 
                                                - (IData)(0x202bU))))),21);
    bufp->fullIData(oldp+557,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U)),32);
    bufp->fullIData(oldp+558,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U)),32);
    bufp->fullBit(oldp+559,((1U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+560,(vlSelf->clk_i));
    bufp->fullIData(oldp+561,(vlSelf->ang_i),21);
    bufp->fullBit(oldp+562,(vlSelf->ready_i));
    bufp->fullBit(oldp+563,(vlSelf->val_i));
    bufp->fullBit(oldp+564,(vlSelf->reset_i));
    bufp->fullBit(oldp+565,(vlSelf->tanh_sel_i));
    bufp->fullIData(oldp+566,(vlSelf->data_o),32);
    bufp->fullBit(oldp+567,(vlSelf->ready_o));
    bufp->fullBit(oldp+568,(vlSelf->val_o));
    bufp->fullIData(oldp+569,(vlSelf->bsg_activation__DOT__ang_n),21);
    bufp->fullBit(oldp+570,(((IData)(vlSelf->tanh_sel_i) 
                             & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                                >> 0x1fU))));
    __Vtemp_hd87aee4a__0[0U] = (IData)(((0x1fffffffffffeULL 
                                         & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                            << 1U)) 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                                         >> 0x30U))))))));
    __Vtemp_hd87aee4a__0[1U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 << 0x11U) | (IData)(
                                                     (((0x1fffffffffffeULL 
                                                        & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                           << 1U)) 
                                                       | (QData)((IData)(
                                                                         (1U 
                                                                          & (~ (IData)(
                                                                                (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                                                >> 0x30U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hd87aee4a__0[2U] = (((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out) 
                                 >> 0xfU) | ((IData)(
                                                     (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                      >> 0x20U)) 
                                             << 0x11U));
    __Vtemp_hd87aee4a__0[3U] = (((IData)(vlSelf->bsg_activation__DOT__dividend_li) 
                                 << 2U) | ((IData)(
                                                   (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                    >> 0x20U)) 
                                           >> 0xfU));
    __Vtemp_hd87aee4a__0[4U] = ((0x40000U & (((IData)(vlSelf->tanh_sel_i) 
                                              << 0x12U) 
                                             & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                                                >> 0xdU))) 
                                | (((IData)(vlSelf->bsg_activation__DOT__dividend_li) 
                                    >> 0x1eU) | ((IData)(
                                                         (vlSelf->bsg_activation__DOT__dividend_li 
                                                          >> 0x20U)) 
                                                 << 2U)));
    bufp->fullWData(oldp+571,(__Vtemp_hd87aee4a__0),147);
    bufp->fullIData(oldp+576,(0x20U),32);
    bufp->fullIData(oldp+577,(0x15U),32);
    bufp->fullIData(oldp+578,(0x10U),32);
    bufp->fullCData(oldp+579,(0x3cU),8);
    bufp->fullCData(oldp+580,(0x70U),8);
    bufp->fullIData(oldp+581,(0x3c000U),21);
    bufp->fullIData(oldp+582,(0x70000U),21);
    bufp->fullIData(oldp+583,(0x30U),32);
    bufp->fullIData(oldp+584,(0U),32);
    bufp->fullIData(oldp+585,(1U),32);
    bufp->fullBit(oldp+586,(1U));
    bufp->fullQData(oldp+587,(0ULL),49);
    bufp->fullQData(oldp+589,(vlSelf->bsg_activation__DOT__divider__DOT__add2_in0),49);
    bufp->fullQData(oldp+591,(vlSelf->bsg_activation__DOT__divider__DOT__add2_in1),49);
    bufp->fullIData(oldp+593,(0x31U),32);
    bufp->fullBit(oldp+594,(0U));
    bufp->fullIData(oldp+595,(6U),32);
    bufp->fullIData(oldp+596,(3U),32);
    bufp->fullIData(oldp+597,(2U),32);
    bufp->fullIData(oldp+598,(0xcU),32);
    bufp->fullWData(oldp+599,(Vbsg_activation__ConstPool__CONST_h154117da_0),399);
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
