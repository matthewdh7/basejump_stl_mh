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
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+561,"ang_i", false,-1, 20,0);
    tracep->declBit(c+562,"ready_i", false,-1);
    tracep->declBit(c+563,"val_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBus(c+565,"tanh_o", false,-1, 31,0);
    tracep->declBit(c+566,"ready_o", false,-1);
    tracep->declBit(c+567,"val_o", false,-1);
    tracep->pushNamePrefix("bsg_tanh ");
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+572,"posi_prec_p", false,-1, 31,0);
    tracep->declBus(c+573,"extr_iter_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+576,"precision", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+561,"ang_i", false,-1, 20,0);
    tracep->declBit(c+562,"ready_i", false,-1);
    tracep->declBit(c+563,"val_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBus(c+565,"tanh_o", false,-1, 31,0);
    tracep->declBit(c+566,"ready_o", false,-1);
    tracep->declBit(c+567,"val_o", false,-1);
    tracep->declBus(c+1,"sinh", false,-1, 31,0);
    tracep->declBus(c+2,"cosh", false,-1, 31,0);
    tracep->declBus(c+3,"tanh_r", false,-1, 31,0);
    tracep->declBus(c+568,"tanh_n", false,-1, 31,0);
    tracep->declBit(c+4,"sincosReady", false,-1);
    tracep->declBit(c+5,"sincosDone", false,-1);
    tracep->declBit(c+6,"tanReady", false,-1);
    tracep->declBit(c+7,"tanDone", false,-1);
    tracep->declBit(c+569,"sincos_val_i", false,-1);
    tracep->declBit(c+441,"tan_val_i", false,-1);
    tracep->declBit(c+570,"bypass", false,-1);
    tracep->declBus(c+8,"state_r", false,-1, 1,0);
    tracep->declBus(c+442,"state_n", false,-1, 1,0);
    tracep->declBus(c+576,"SHFT_AMT", false,-1, 31,0);
    tracep->declQuad(c+9,"sinh_shifted", false,-1, 47,0);
    tracep->declQuad(c+11,"tanh_shifted", false,-1, 47,0);
    tracep->declQuad(c+13,"remainder_o", false,-1, 47,0);
    tracep->declQuad(c+577,"tanh_crop", false,-1, 47,0);
    tracep->pushNamePrefix("divider ");
    tracep->declBus(c+579,"width_p", false,-1, 31,0);
    tracep->declBus(c+580,"bitstack_p", false,-1, 31,0);
    tracep->declBus(c+573,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+441,"v_i", false,-1);
    tracep->declBit(c+6,"ready_and_o", false,-1);
    tracep->declQuad(c+9,"dividend_i", false,-1, 47,0);
    tracep->declQuad(c+15,"divisor_i", false,-1, 47,0);
    tracep->declBit(c+581,"signed_div_i", false,-1);
    tracep->declBit(c+7,"v_o", false,-1);
    tracep->declQuad(c+11,"quotient_o", false,-1, 47,0);
    tracep->declQuad(c+13,"remainder_o", false,-1, 47,0);
    tracep->declBit(c+562,"yumi_i", false,-1);
    tracep->declQuad(c+17,"opA_r", false,-1, 48,0);
    tracep->declQuad(c+19,"opC_r", false,-1, 48,0);
    tracep->declBit(c+21,"signed_div_r", false,-1);
    tracep->declBit(c+22,"divisor_msb", false,-1);
    tracep->declBit(c+23,"dividend_msb", false,-1);
    tracep->declBit(c+443,"latch_signed_div_lo", false,-1);
    tracep->declBit(c+24,"zero_divisor_li", false,-1);
    tracep->declBus(c+444,"opA_sel_lo", false,-1, 1,0);
    tracep->declQuad(c+445,"opA_mux", false,-1, 48,0);
    tracep->declQuad(c+25,"add1_out", false,-1, 48,0);
    tracep->declQuad(c+582,"add2_out", false,-1, 48,0);
    tracep->declQuad(c+27,"opB_mux", false,-1, 48,0);
    tracep->declQuad(c+447,"opC_mux", false,-1, 48,0);
    tracep->declBus(c+29,"opB_sel_lo", false,-1, 2,0);
    tracep->declBus(c+449,"opC_sel_lo", false,-1, 2,0);
    tracep->declBit(c+450,"opA_ld_lo", false,-1);
    tracep->declBit(c+30,"opB_ld_lo", false,-1);
    tracep->declQuad(c+31,"opB_r", false,-1, 48,0);
    tracep->declBit(c+451,"opC_ld_lo", false,-1);
    tracep->declBit(c+33,"opA_inv_lo", false,-1);
    tracep->declBit(c+34,"opB_inv_lo", false,-1);
    tracep->declBit(c+35,"opA_clr_lo", false,-1);
    tracep->declBit(c+36,"opB_clr_lo", false,-1);
    tracep->declQuad(c+37,"add1_in0", false,-1, 48,0);
    tracep->declQuad(c+39,"add1_in1", false,-1, 48,0);
    tracep->declQuad(c+584,"add2_in0", false,-1, 48,0);
    tracep->declQuad(c+586,"add2_in1", false,-1, 48,0);
    tracep->declBit(c+41,"adder1_cin_lo", false,-1);
    tracep->pushNamePrefix("adder1 ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declQuad(c+37,"a_i", false,-1, 48,0);
    tracep->declQuad(c+39,"b_i", false,-1, 48,0);
    tracep->declBit(c+41,"cin_i", false,-1);
    tracep->declQuad(c+25,"o", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+579,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"bits_per_iter_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+441,"v_i", false,-1);
    tracep->declBit(c+6,"ready_and_o", false,-1);
    tracep->declBit(c+24,"zero_divisor_i", false,-1);
    tracep->declBit(c+21,"signed_div_r_i", false,-1);
    tracep->declBit(c+42,"adder1_result_is_neg_i", false,-1);
    tracep->declBit(c+589,"adder2_result_is_neg_i", false,-1);
    tracep->declBit(c+43,"opA_is_neg_i", false,-1);
    tracep->declBit(c+44,"opC_is_neg_i", false,-1);
    tracep->declBus(c+444,"opA_sel_o", false,-1, 1,0);
    tracep->declBit(c+450,"opA_ld_o", false,-1);
    tracep->declBit(c+33,"opA_inv_o", false,-1);
    tracep->declBit(c+35,"opA_clr_l_o", false,-1);
    tracep->declBus(c+29,"opB_sel_o", false,-1, 2,0);
    tracep->declBit(c+30,"opB_ld_o", false,-1);
    tracep->declBit(c+34,"opB_inv_o", false,-1);
    tracep->declBit(c+36,"opB_clr_l_o", false,-1);
    tracep->declBus(c+449,"opC_sel_o", false,-1, 2,0);
    tracep->declBit(c+451,"opC_ld_o", false,-1);
    tracep->declBit(c+443,"latch_signed_div_o", false,-1);
    tracep->declBit(c+41,"adder1_cin_o", false,-1);
    tracep->declBit(c+7,"v_o", false,-1);
    tracep->declBit(c+562,"yumi_i", false,-1);
    tracep->declBit(c+45,"q_neg_r", false,-1);
    tracep->declBit(c+46,"r_neg_r", false,-1);
    tracep->declBit(c+47,"neg_ld", false,-1);
    tracep->declBit(c+48,"add1_neg_last_r", false,-1);
    tracep->declBit(c+49,"add2_neg_last_r", false,-1);
    tracep->declBus(c+50,"state", false,-1, 5,0);
    tracep->declBus(c+452,"next_state", false,-1, 5,0);
    tracep->declBus(c+51,"calc_cnt", false,-1, 5,0);
    tracep->declBit(c+52,"calc_up_li", false,-1);
    tracep->declBit(c+53,"calc_done", false,-1);
    tracep->pushNamePrefix("calc_counter ");
    tracep->declBus(c+579,"max_val_p", false,-1, 31,0);
    tracep->declBus(c+580,"init_val_p", false,-1, 31,0);
    tracep->declBus(c+571,"ptr_width_lp", false,-1, 31,0);
    tracep->declBus(c+573,"disable_overflow_warning_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBit(c+564,"reset_i", false,-1);
    tracep->declBit(c+53,"clear_i", false,-1);
    tracep->declBit(c+52,"up_i", false,-1);
    tracep->declBus(c+51,"count_o", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("muxB ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+590,"els_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declArray(c+54,"data_i", false,-1, 146,0);
    tracep->declBus(c+29,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+27,"data_o", false,-1, 48,0);
    tracep->declArray(c+59,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+64,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+65,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+66,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+67,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+68,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+69,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+70,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+71,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+72,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+73,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+74,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+75,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+76,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+77,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+78,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+79,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+80,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+81,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+82,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+83,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+84,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+85,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+86,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+87,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+88,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+89,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+90,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+91,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+92,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+93,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+94,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+95,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+96,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+97,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+98,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+99,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+100,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+101,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+102,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+103,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+104,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+105,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+106,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+107,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+108,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+109,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+110,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+111,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+112,"gather", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("muxC ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+590,"els_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declArray(c+113,"data_i", false,-1, 146,0);
    tracep->declBus(c+449,"sel_one_hot_i", false,-1, 2,0);
    tracep->declQuad(c+447,"data_o", false,-1, 48,0);
    tracep->declArray(c+453,"data_masked", false,-1, 146,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+458,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+459,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+460,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+461,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+462,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+463,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+464,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+465,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+466,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+467,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+468,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+469,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+470,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+471,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+472,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+473,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+474,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+475,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+476,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+477,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+478,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+479,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+480,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+481,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+482,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+483,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+484,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+485,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+486,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+487,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+488,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+489,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+490,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+491,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+492,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+493,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+494,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+495,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+496,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+497,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+498,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+499,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+500,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+501,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+502,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+503,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+504,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+505,"gather", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+506,"gather", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("muxA ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+591,"els_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declArray(c+118,"data_i", false,-1, 97,0);
    tracep->declBus(c+444,"sel_one_hot_i", false,-1, 1,0);
    tracep->declQuad(c+445,"data_o", false,-1, 48,0);
    tracep->declArray(c+507,"data_masked", false,-1, 97,0);
    tracep->pushNamePrefix("reduce[0] ");
    tracep->declBus(c+511,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[10] ");
    tracep->declBus(c+512,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[11] ");
    tracep->declBus(c+513,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[12] ");
    tracep->declBus(c+514,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[13] ");
    tracep->declBus(c+515,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[14] ");
    tracep->declBus(c+516,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[15] ");
    tracep->declBus(c+517,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[16] ");
    tracep->declBus(c+518,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[17] ");
    tracep->declBus(c+519,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[18] ");
    tracep->declBus(c+520,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[19] ");
    tracep->declBus(c+521,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[1] ");
    tracep->declBus(c+522,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[20] ");
    tracep->declBus(c+523,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[21] ");
    tracep->declBus(c+524,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[22] ");
    tracep->declBus(c+525,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[23] ");
    tracep->declBus(c+526,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[24] ");
    tracep->declBus(c+527,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[25] ");
    tracep->declBus(c+528,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[26] ");
    tracep->declBus(c+529,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[27] ");
    tracep->declBus(c+530,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[28] ");
    tracep->declBus(c+531,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[29] ");
    tracep->declBus(c+532,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[2] ");
    tracep->declBus(c+533,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[30] ");
    tracep->declBus(c+534,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[31] ");
    tracep->declBus(c+535,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[32] ");
    tracep->declBus(c+536,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[33] ");
    tracep->declBus(c+537,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[34] ");
    tracep->declBus(c+538,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[35] ");
    tracep->declBus(c+539,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[36] ");
    tracep->declBus(c+540,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[37] ");
    tracep->declBus(c+541,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[38] ");
    tracep->declBus(c+542,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[39] ");
    tracep->declBus(c+543,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[3] ");
    tracep->declBus(c+544,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[40] ");
    tracep->declBus(c+545,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[41] ");
    tracep->declBus(c+546,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[42] ");
    tracep->declBus(c+547,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[43] ");
    tracep->declBus(c+548,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[44] ");
    tracep->declBus(c+549,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[45] ");
    tracep->declBus(c+550,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[46] ");
    tracep->declBus(c+551,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[47] ");
    tracep->declBus(c+552,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[48] ");
    tracep->declBus(c+553,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[4] ");
    tracep->declBus(c+554,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[5] ");
    tracep->declBus(c+555,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[6] ");
    tracep->declBus(c+556,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[7] ");
    tracep->declBus(c+557,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[8] ");
    tracep->declBus(c+558,"gather", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reduce[9] ");
    tracep->declBus(c+559,"gather", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("opA_reg ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declBus(c+573,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+445,"data_i", false,-1, 48,0);
    tracep->declBit(c+450,"en_i", false,-1);
    tracep->declQuad(c+17,"data_o", false,-1, 48,0);
    tracep->declQuad(c+17,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opB_reg ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declBus(c+573,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+27,"data_i", false,-1, 48,0);
    tracep->declBit(c+30,"en_i", false,-1);
    tracep->declQuad(c+31,"data_o", false,-1, 48,0);
    tracep->declQuad(c+31,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opC_reg ");
    tracep->declBus(c+588,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declBus(c+573,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declQuad(c+447,"data_i", false,-1, 48,0);
    tracep->declBit(c+451,"en_i", false,-1);
    tracep->declQuad(c+19,"data_o", false,-1, 48,0);
    tracep->declQuad(c+19,"data_r", false,-1, 48,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_reg ");
    tracep->declBus(c+573,"width_p", false,-1, 31,0);
    tracep->declBus(c+573,"harden_p", false,-1, 31,0);
    tracep->declBus(c+573,"strength_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+581,"data_i", false,-1, 0,0);
    tracep->declBit(c+443,"en_i", false,-1);
    tracep->declBus(c+21,"data_o", false,-1, 0,0);
    tracep->declBus(c+21,"data_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sinhcosh ");
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+572,"posi_prec_p", false,-1, 31,0);
    tracep->declBus(c+573,"extr_iter_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBit(c+560,"clk_i", false,-1);
    tracep->declBus(c+561,"ang_i", false,-1, 20,0);
    tracep->declBit(c+122,"ready_i", false,-1);
    tracep->declBit(c+569,"val_i", false,-1);
    tracep->declBus(c+1,"sinh_o", false,-1, 31,0);
    tracep->declBus(c+2,"cosh_o", false,-1, 31,0);
    tracep->declBit(c+4,"ready_o", false,-1);
    tracep->declBit(c+5,"val_o", false,-1);
    tracep->declArray(c+123,"x", false,-1, 671,0);
    tracep->declArray(c+144,"y", false,-1, 671,0);
    tracep->declArray(c+165,"ang", false,-1, 440,0);
    tracep->declBus(c+179,"val", false,-1, 20,0);
    tracep->declArray(c+180,"x_ans", false,-1, 639,0);
    tracep->declArray(c+200,"y_ans", false,-1, 639,0);
    tracep->declArray(c+220,"ang_ans", false,-1, 419,0);
    tracep->declBus(c+234,"val_ans", false,-1, 19,0);
    tracep->declBit(c+235,"stall_pipe", false,-1);
    tracep->declArray(c+592,"ang_lookup_lp", false,-1, 398,0);
    tracep->declBus(c+605,"x_start", false,-1, 31,0);
    tracep->declBus(c+606,"y_start", false,-1, 31,0);
    tracep->pushNamePrefix("stage_neg[0] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+580,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+236,"x_i", false,-1, 31,0);
    tracep->declBus(c+237,"y_i", false,-1, 31,0);
    tracep->declBus(c+238,"ang_i", false,-1, 20,0);
    tracep->declBus(c+607,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+239,"val_i", false,-1);
    tracep->declBus(c+240,"x_o", false,-1, 31,0);
    tracep->declBus(c+241,"y_o", false,-1, 31,0);
    tracep->declBus(c+242,"ang_o", false,-1, 20,0);
    tracep->declBit(c+239,"val_o", false,-1);
    tracep->declBus(c+243,"y_shift", false,-1, 31,0);
    tracep->declBus(c+244,"x_shift", false,-1, 31,0);
    tracep->declBit(c+245,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[1] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+573,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+246,"x_i", false,-1, 31,0);
    tracep->declBus(c+247,"y_i", false,-1, 31,0);
    tracep->declBus(c+248,"ang_i", false,-1, 20,0);
    tracep->declBus(c+608,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+249,"val_i", false,-1);
    tracep->declBus(c+250,"x_o", false,-1, 31,0);
    tracep->declBus(c+251,"y_o", false,-1, 31,0);
    tracep->declBus(c+252,"ang_o", false,-1, 20,0);
    tracep->declBit(c+249,"val_o", false,-1);
    tracep->declBus(c+253,"y_shift", false,-1, 31,0);
    tracep->declBus(c+254,"x_shift", false,-1, 31,0);
    tracep->declBit(c+255,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[2] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+591,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+256,"x_i", false,-1, 31,0);
    tracep->declBus(c+257,"y_i", false,-1, 31,0);
    tracep->declBus(c+258,"ang_i", false,-1, 20,0);
    tracep->declBus(c+609,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+259,"val_i", false,-1);
    tracep->declBus(c+260,"x_o", false,-1, 31,0);
    tracep->declBus(c+261,"y_o", false,-1, 31,0);
    tracep->declBus(c+262,"ang_o", false,-1, 20,0);
    tracep->declBit(c+259,"val_o", false,-1);
    tracep->declBus(c+263,"y_shift", false,-1, 31,0);
    tracep->declBus(c+264,"x_shift", false,-1, 31,0);
    tracep->declBit(c+265,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[3] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+590,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+266,"x_i", false,-1, 31,0);
    tracep->declBus(c+267,"y_i", false,-1, 31,0);
    tracep->declBus(c+268,"ang_i", false,-1, 20,0);
    tracep->declBus(c+610,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+269,"val_i", false,-1);
    tracep->declBus(c+270,"x_o", false,-1, 31,0);
    tracep->declBus(c+271,"y_o", false,-1, 31,0);
    tracep->declBus(c+272,"ang_o", false,-1, 20,0);
    tracep->declBit(c+269,"val_o", false,-1);
    tracep->declBus(c+273,"y_shift", false,-1, 31,0);
    tracep->declBus(c+274,"x_shift", false,-1, 31,0);
    tracep->declBit(c+275,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[4] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+611,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+276,"x_i", false,-1, 31,0);
    tracep->declBus(c+277,"y_i", false,-1, 31,0);
    tracep->declBus(c+278,"ang_i", false,-1, 20,0);
    tracep->declBus(c+612,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+279,"val_i", false,-1);
    tracep->declBus(c+280,"x_o", false,-1, 31,0);
    tracep->declBus(c+281,"y_o", false,-1, 31,0);
    tracep->declBus(c+282,"ang_o", false,-1, 20,0);
    tracep->declBit(c+279,"val_o", false,-1);
    tracep->declBus(c+283,"y_shift", false,-1, 31,0);
    tracep->declBus(c+284,"x_shift", false,-1, 31,0);
    tracep->declBit(c+285,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[5] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+613,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+286,"x_i", false,-1, 31,0);
    tracep->declBus(c+287,"y_i", false,-1, 31,0);
    tracep->declBus(c+288,"ang_i", false,-1, 20,0);
    tracep->declBus(c+614,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+289,"val_i", false,-1);
    tracep->declBus(c+290,"x_o", false,-1, 31,0);
    tracep->declBus(c+291,"y_o", false,-1, 31,0);
    tracep->declBus(c+292,"ang_o", false,-1, 20,0);
    tracep->declBit(c+289,"val_o", false,-1);
    tracep->declBus(c+293,"y_shift", false,-1, 31,0);
    tracep->declBus(c+294,"x_shift", false,-1, 31,0);
    tracep->declBit(c+295,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_neg[6] ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+571,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+296,"x_i", false,-1, 31,0);
    tracep->declBus(c+297,"y_i", false,-1, 31,0);
    tracep->declBus(c+298,"ang_i", false,-1, 20,0);
    tracep->declBus(c+615,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+299,"val_i", false,-1);
    tracep->declBus(c+300,"x_o", false,-1, 31,0);
    tracep->declBus(c+301,"y_o", false,-1, 31,0);
    tracep->declBus(c+302,"ang_o", false,-1, 20,0);
    tracep->declBit(c+299,"val_o", false,-1);
    tracep->declBus(c+303,"y_shift", false,-1, 31,0);
    tracep->declBus(c+304,"x_shift", false,-1, 31,0);
    tracep->declBit(c+305,"rot_op", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("stage_pos[10] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+616,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+306,"x_i", false,-1, 31,0);
    tracep->declBus(c+307,"y_i", false,-1, 31,0);
    tracep->declBus(c+308,"ang_i", false,-1, 20,0);
    tracep->declBus(c+617,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+309,"val_i", false,-1);
    tracep->declBus(c+310,"x_o", false,-1, 31,0);
    tracep->declBus(c+311,"y_o", false,-1, 31,0);
    tracep->declBus(c+312,"ang_o", false,-1, 20,0);
    tracep->declBit(c+309,"val_o", false,-1);
    tracep->declBus(c+313,"y_shift", false,-1, 31,0);
    tracep->declBus(c+314,"x_shift", false,-1, 31,0);
    tracep->declBit(c+315,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+616,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+316,"x_i", false,-1, 31,0);
    tracep->declBus(c+317,"y_i", false,-1, 31,0);
    tracep->declBus(c+318,"ang_i", false,-1, 20,0);
    tracep->declBus(c+617,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+319,"val_i", false,-1);
    tracep->declBus(c+320,"x_o", false,-1, 31,0);
    tracep->declBus(c+321,"y_o", false,-1, 31,0);
    tracep->declBus(c+322,"ang_o", false,-1, 20,0);
    tracep->declBit(c+319,"val_o", false,-1);
    tracep->declBus(c+323,"y_shift", false,-1, 31,0);
    tracep->declBus(c+324,"x_shift", false,-1, 31,0);
    tracep->declBit(c+325,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[11] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+618,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+326,"x_i", false,-1, 31,0);
    tracep->declBus(c+327,"y_i", false,-1, 31,0);
    tracep->declBus(c+328,"ang_i", false,-1, 20,0);
    tracep->declBus(c+619,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+329,"val_i", false,-1);
    tracep->declBus(c+330,"x_o", false,-1, 31,0);
    tracep->declBus(c+331,"y_o", false,-1, 31,0);
    tracep->declBus(c+332,"ang_o", false,-1, 20,0);
    tracep->declBit(c+329,"val_o", false,-1);
    tracep->declBus(c+333,"y_shift", false,-1, 31,0);
    tracep->declBus(c+334,"x_shift", false,-1, 31,0);
    tracep->declBit(c+335,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[12] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+572,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+336,"x_i", false,-1, 31,0);
    tracep->declBus(c+337,"y_i", false,-1, 31,0);
    tracep->declBus(c+338,"ang_i", false,-1, 20,0);
    tracep->declBus(c+620,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+339,"val_i", false,-1);
    tracep->declBus(c+340,"x_o", false,-1, 31,0);
    tracep->declBus(c+341,"y_o", false,-1, 31,0);
    tracep->declBus(c+342,"ang_o", false,-1, 20,0);
    tracep->declBit(c+339,"val_o", false,-1);
    tracep->declBus(c+343,"y_shift", false,-1, 31,0);
    tracep->declBus(c+344,"x_shift", false,-1, 31,0);
    tracep->declBit(c+345,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[13] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+621,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+346,"x_i", false,-1, 31,0);
    tracep->declBus(c+347,"y_i", false,-1, 31,0);
    tracep->declBus(c+348,"ang_i", false,-1, 20,0);
    tracep->declBus(c+622,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+349,"val_i", false,-1);
    tracep->declBus(c+350,"x_o", false,-1, 31,0);
    tracep->declBus(c+351,"y_o", false,-1, 31,0);
    tracep->declBus(c+352,"ang_o", false,-1, 20,0);
    tracep->declBit(c+349,"val_o", false,-1);
    tracep->declBus(c+353,"y_shift", false,-1, 31,0);
    tracep->declBus(c+354,"x_shift", false,-1, 31,0);
    tracep->declBit(c+355,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[14] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+623,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+356,"x_i", false,-1, 31,0);
    tracep->declBus(c+357,"y_i", false,-1, 31,0);
    tracep->declBus(c+358,"ang_i", false,-1, 20,0);
    tracep->declBus(c+624,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+359,"val_i", false,-1);
    tracep->declBus(c+360,"x_o", false,-1, 31,0);
    tracep->declBus(c+361,"y_o", false,-1, 31,0);
    tracep->declBus(c+362,"ang_o", false,-1, 20,0);
    tracep->declBit(c+359,"val_o", false,-1);
    tracep->declBus(c+363,"y_shift", false,-1, 31,0);
    tracep->declBus(c+364,"x_shift", false,-1, 31,0);
    tracep->declBit(c+365,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[15] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+625,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+366,"x_i", false,-1, 31,0);
    tracep->declBus(c+367,"y_i", false,-1, 31,0);
    tracep->declBus(c+368,"ang_i", false,-1, 20,0);
    tracep->declBus(c+626,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+369,"val_i", false,-1);
    tracep->declBus(c+370,"x_o", false,-1, 31,0);
    tracep->declBus(c+371,"y_o", false,-1, 31,0);
    tracep->declBus(c+372,"ang_o", false,-1, 20,0);
    tracep->declBit(c+369,"val_o", false,-1);
    tracep->declBus(c+373,"y_shift", false,-1, 31,0);
    tracep->declBus(c+374,"x_shift", false,-1, 31,0);
    tracep->declBit(c+375,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[16] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+576,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+376,"x_i", false,-1, 31,0);
    tracep->declBus(c+377,"y_i", false,-1, 31,0);
    tracep->declBus(c+378,"ang_i", false,-1, 20,0);
    tracep->declBus(c+627,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+379,"val_i", false,-1);
    tracep->declBus(c+380,"x_o", false,-1, 31,0);
    tracep->declBus(c+381,"y_o", false,-1, 31,0);
    tracep->declBus(c+382,"ang_o", false,-1, 20,0);
    tracep->declBit(c+379,"val_o", false,-1);
    tracep->declBus(c+383,"y_shift", false,-1, 31,0);
    tracep->declBus(c+384,"x_shift", false,-1, 31,0);
    tracep->declBit(c+385,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[17] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+628,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+386,"x_i", false,-1, 31,0);
    tracep->declBus(c+387,"y_i", false,-1, 31,0);
    tracep->declBus(c+388,"ang_i", false,-1, 20,0);
    tracep->declBus(c+629,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+389,"val_i", false,-1);
    tracep->declBus(c+390,"x_o", false,-1, 31,0);
    tracep->declBus(c+391,"y_o", false,-1, 31,0);
    tracep->declBus(c+392,"ang_o", false,-1, 20,0);
    tracep->declBit(c+389,"val_o", false,-1);
    tracep->declBus(c+393,"y_shift", false,-1, 31,0);
    tracep->declBus(c+394,"x_shift", false,-1, 31,0);
    tracep->declBit(c+395,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[18] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+630,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+386,"x_i", false,-1, 31,0);
    tracep->declBus(c+387,"y_i", false,-1, 31,0);
    tracep->declBus(c+388,"ang_i", false,-1, 20,0);
    tracep->declBus(c+631,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+389,"val_i", false,-1);
    tracep->declBus(c+396,"x_o", false,-1, 31,0);
    tracep->declBus(c+397,"y_o", false,-1, 31,0);
    tracep->declBus(c+398,"ang_o", false,-1, 20,0);
    tracep->declBit(c+389,"val_o", false,-1);
    tracep->declBus(c+399,"y_shift", false,-1, 31,0);
    tracep->declBus(c+400,"x_shift", false,-1, 31,0);
    tracep->declBit(c+395,"rot_op", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrep ");
    tracep->declBus(c+630,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+401,"x_i", false,-1, 31,0);
    tracep->declBus(c+402,"y_i", false,-1, 31,0);
    tracep->declBus(c+403,"ang_i", false,-1, 20,0);
    tracep->declBus(c+631,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+404,"val_i", false,-1);
    tracep->declBus(c+405,"x_o", false,-1, 31,0);
    tracep->declBus(c+406,"y_o", false,-1, 31,0);
    tracep->declBus(c+407,"ang_o", false,-1, 20,0);
    tracep->declBit(c+404,"val_o", false,-1);
    tracep->declBus(c+408,"y_shift", false,-1, 31,0);
    tracep->declBus(c+409,"x_shift", false,-1, 31,0);
    tracep->declBit(c+410,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[7] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+632,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+411,"x_i", false,-1, 31,0);
    tracep->declBus(c+412,"y_i", false,-1, 31,0);
    tracep->declBus(c+413,"ang_i", false,-1, 20,0);
    tracep->declBus(c+633,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+414,"val_i", false,-1);
    tracep->declBus(c+415,"x_o", false,-1, 31,0);
    tracep->declBus(c+416,"y_o", false,-1, 31,0);
    tracep->declBus(c+417,"ang_o", false,-1, 20,0);
    tracep->declBit(c+414,"val_o", false,-1);
    tracep->declBus(c+418,"y_shift", false,-1, 31,0);
    tracep->declBus(c+419,"x_shift", false,-1, 31,0);
    tracep->declBit(c+420,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[8] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+634,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+421,"x_i", false,-1, 31,0);
    tracep->declBus(c+422,"y_i", false,-1, 31,0);
    tracep->declBus(c+423,"ang_i", false,-1, 20,0);
    tracep->declBus(c+635,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+424,"val_i", false,-1);
    tracep->declBus(c+425,"x_o", false,-1, 31,0);
    tracep->declBus(c+426,"y_o", false,-1, 31,0);
    tracep->declBus(c+427,"ang_o", false,-1, 20,0);
    tracep->declBit(c+424,"val_o", false,-1);
    tracep->declBus(c+428,"y_shift", false,-1, 31,0);
    tracep->declBus(c+429,"x_shift", false,-1, 31,0);
    tracep->declBit(c+430,"rot_op", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("stage_pos[9] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("cs ");
    tracep->declBus(c+636,"stage_p", false,-1, 31,0);
    tracep->declBus(c+571,"neg_prec_p", false,-1, 31,0);
    tracep->declBus(c+574,"ans_width_p", false,-1, 31,0);
    tracep->declBus(c+575,"ang_width_p", false,-1, 31,0);
    tracep->declBus(c+431,"x_i", false,-1, 31,0);
    tracep->declBus(c+432,"y_i", false,-1, 31,0);
    tracep->declBus(c+433,"ang_i", false,-1, 20,0);
    tracep->declBus(c+637,"ang_lookup_i", false,-1, 20,0);
    tracep->declBit(c+434,"val_i", false,-1);
    tracep->declBus(c+435,"x_o", false,-1, 31,0);
    tracep->declBus(c+436,"y_o", false,-1, 31,0);
    tracep->declBus(c+437,"ang_o", false,-1, 20,0);
    tracep->declBit(c+434,"val_o", false,-1);
    tracep->declBus(c+438,"y_shift", false,-1, 31,0);
    tracep->declBus(c+439,"x_shift", false,-1, 31,0);
    tracep->declBit(c+440,"rot_op", false,-1);
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
    tracep->addFullCb(&Vbsg_tanh___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vbsg_tanh___024root__trace_chg_top_0, vlSelf, nullptr);
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
    bufp->fullIData(oldp+1,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
    bufp->fullIData(oldp+2,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
    bufp->fullIData(oldp+3,(vlSelf->bsg_tanh__DOT__tanh_r),32);
    bufp->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
    bufp->fullBit(oldp+5,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                 >> 0x14U))));
    bufp->fullBit(oldp+6,((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
    bufp->fullBit(oldp+7,((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
    bufp->fullCData(oldp+8,(vlSelf->bsg_tanh__DOT__state_r),2);
    bufp->fullQData(oldp+9,((0xffffffffffffULL & ((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                  << 0x10U))),48);
    bufp->fullQData(oldp+11,((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
    bufp->fullQData(oldp+13,((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
    bufp->fullQData(oldp+15,((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))),48);
    bufp->fullQData(oldp+17,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
    bufp->fullQData(oldp+19,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
    bufp->fullBit(oldp+21,(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
    bufp->fullBit(oldp+22,((1U & (IData)(((QData)((IData)(
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                          >> 0x2fU)))));
    bufp->fullBit(oldp+23,((1U & (IData)((1ULL & ((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+24,((1U & (~ (IData)((0U != vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
    bufp->fullQData(oldp+25,(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out),49);
    bufp->fullQData(oldp+27,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux),49);
    bufp->fullCData(oldp+29,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
    bufp->fullBit(oldp+30,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
    bufp->fullQData(oldp+31,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
    bufp->fullBit(oldp+33,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
    bufp->fullBit(oldp+34,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
    bufp->fullBit(oldp+35,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
    bufp->fullBit(oldp+36,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
    bufp->fullQData(oldp+37,((0x1ffffffffffffULL & 
                              ((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                               & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
    bufp->fullQData(oldp+39,((0x1ffffffffffffULL & 
                              ((vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                               & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
    bufp->fullBit(oldp+41,(vlSelf->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
    bufp->fullBit(oldp+42,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+43,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+44,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                          >> 0x30U)))));
    bufp->fullBit(oldp+45,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
    bufp->fullBit(oldp+46,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
    bufp->fullBit(oldp+47,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
    bufp->fullBit(oldp+48,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
    bufp->fullBit(oldp+49,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
    bufp->fullCData(oldp+50,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
    bufp->fullCData(oldp+51,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
    bufp->fullBit(oldp+52,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
    bufp->fullBit(oldp+53,((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
    bufp->fullWData(oldp+54,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i),147);
    bufp->fullWData(oldp+59,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked),147);
    bufp->fullCData(oldp+64,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                              | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        >> 0x10U)) 
                                 | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U])))),3);
    bufp->fullCData(oldp+65,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xaU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1aU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xaU))))),3);
    bufp->fullCData(oldp+66,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xbU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1bU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xbU))))),3);
    bufp->fullCData(oldp+67,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xcU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1cU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xcU))))),3);
    bufp->fullCData(oldp+68,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xdU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1dU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xdU))))),3);
    bufp->fullCData(oldp+69,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xeU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xeU))))),3);
    bufp->fullCData(oldp+70,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0xfU)) | ((2U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                        >> 0xfU))))),3);
    bufp->fullCData(oldp+71,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x10U)) | (
                                                   (2U 
                                                    & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U]) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+72,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x11U))))),3);
    bufp->fullCData(oldp+73,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x12U))))),3);
    bufp->fullCData(oldp+74,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x13U))))),3);
    bufp->fullCData(oldp+75,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x11U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 1U))))),3);
    bufp->fullCData(oldp+76,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x14U))))),3);
    bufp->fullCData(oldp+77,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x15U))))),3);
    bufp->fullCData(oldp+78,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x16U))))),3);
    bufp->fullCData(oldp+79,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x17U))))),3);
    bufp->fullCData(oldp+80,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x18U))))),3);
    bufp->fullCData(oldp+81,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x19U))))),3);
    bufp->fullCData(oldp+82,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1aU))))),3);
    bufp->fullCData(oldp+83,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xbU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1bU))))),3);
    bufp->fullCData(oldp+84,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1cU))))),3);
    bufp->fullCData(oldp+85,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xdU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1dU))))),3);
    bufp->fullCData(oldp+86,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x12U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 2U))))),3);
    bufp->fullCData(oldp+87,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     << 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0xeU)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 0x1eU))))),3);
    bufp->fullCData(oldp+88,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     << 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0xfU)) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0x1fU)))),3);
    bufp->fullCData(oldp+89,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U]) 
                              | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                        >> 0x10U)) 
                                 | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U])))),3);
    bufp->fullCData(oldp+90,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 1U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x11U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 1U))))),3);
    bufp->fullCData(oldp+91,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 2U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x12U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 2U))))),3);
    bufp->fullCData(oldp+92,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 3U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x13U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 3U))))),3);
    bufp->fullCData(oldp+93,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 4U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 4U))))),3);
    bufp->fullCData(oldp+94,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 5U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x15U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 5U))))),3);
    bufp->fullCData(oldp+95,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 6U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x16U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 6U))))),3);
    bufp->fullCData(oldp+96,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 7U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x17U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 7U))))),3);
    bufp->fullCData(oldp+97,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                     >> 3U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x13U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 3U))))),3);
    bufp->fullCData(oldp+98,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 8U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x18U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 8U))))),3);
    bufp->fullCData(oldp+99,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                     >> 9U)) | ((2U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                    >> 0x19U)) 
                                                | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                      >> 9U))))),3);
    bufp->fullCData(oldp+100,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xaU))))),3);
    bufp->fullCData(oldp+101,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xbU))))),3);
    bufp->fullCData(oldp+102,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xcU))))),3);
    bufp->fullCData(oldp+103,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xdU))))),3);
    bufp->fullCData(oldp+104,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+105,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+106,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+107,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+108,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+109,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+110,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+111,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+112,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                       >> 9U))))),3);
    bufp->fullWData(oldp+113,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i),147);
    bufp->fullWData(oldp+118,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
    bufp->fullBit(oldp+122,(((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                             & (0U == (IData)(vlSelf->bsg_tanh__DOT__state_r)))));
    bufp->fullWData(oldp+123,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x),672);
    bufp->fullWData(oldp+144,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y),672);
    bufp->fullWData(oldp+165,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
    bufp->fullIData(oldp+179,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val),21);
    bufp->fullWData(oldp+180,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
    bufp->fullWData(oldp+200,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
    bufp->fullWData(oldp+220,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
    bufp->fullIData(oldp+234,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
    bufp->fullBit(oldp+235,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
    bufp->fullIData(oldp+236,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
    bufp->fullIData(oldp+237,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
    bufp->fullIData(oldp+238,((0x1fffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
    bufp->fullBit(oldp+239,((1U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val)));
    bufp->fullIData(oldp+240,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
    bufp->fullIData(oldp+241,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
    bufp->fullIData(oldp+242,((0x1fffffU & (((0x100000U 
                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                              ? 1U : 0U)
                                             ? ((IData)(0x31e41U) 
                                                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                             : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                - (IData)(0x31e41U))))),21);
    bufp->fullIData(oldp+243,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
    bufp->fullIData(oldp+244,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
    bufp->fullBit(oldp+245,(((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+246,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
    bufp->fullIData(oldp+247,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
    bufp->fullIData(oldp+248,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0xbU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x15U)))),21);
    bufp->fullBit(oldp+249,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 1U))));
    bufp->fullIData(oldp+250,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
    bufp->fullIData(oldp+251,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
    bufp->fullIData(oldp+252,((0x1fffffU & (((0x200U 
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
    bufp->fullIData(oldp+253,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
    bufp->fullIData(oldp+254,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
    bufp->fullBit(oldp+255,(((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+256,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
    bufp->fullIData(oldp+257,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
    bufp->fullIData(oldp+258,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                            >> 0xaU))),21);
    bufp->fullBit(oldp+259,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 2U))));
    bufp->fullIData(oldp+260,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
    bufp->fullIData(oldp+261,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
    bufp->fullIData(oldp+262,((0x1fffffU & (((0x40000000U 
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
    bufp->fullIData(oldp+263,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
    bufp->fullIData(oldp+264,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
    bufp->fullBit(oldp+265,(((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+266,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
    bufp->fullIData(oldp+267,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
    bufp->fullIData(oldp+268,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                             << 1U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0x1fU)))),21);
    bufp->fullBit(oldp+269,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 3U))));
    bufp->fullIData(oldp+270,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
    bufp->fullIData(oldp+271,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
    bufp->fullIData(oldp+272,((0x1fffffU & (((0x80000U 
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
    bufp->fullIData(oldp+273,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
    bufp->fullIData(oldp+274,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
    bufp->fullBit(oldp+275,(((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+276,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
    bufp->fullIData(oldp+277,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
    bufp->fullIData(oldp+278,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0xcU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x14U)))),21);
    bufp->fullBit(oldp+279,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 4U))));
    bufp->fullIData(oldp+280,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
    bufp->fullIData(oldp+281,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
    bufp->fullIData(oldp+282,((0x1fffffU & (((0x100U 
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
    bufp->fullIData(oldp+283,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
    bufp->fullIData(oldp+284,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
    bufp->fullBit(oldp+285,(((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+286,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
    bufp->fullIData(oldp+287,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
    bufp->fullIData(oldp+288,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                            >> 9U))),21);
    bufp->fullBit(oldp+289,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 5U))));
    bufp->fullIData(oldp+290,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
    bufp->fullIData(oldp+291,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
    bufp->fullIData(oldp+292,((0x1fffffU & (((0x20000000U 
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
    bufp->fullIData(oldp+293,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
    bufp->fullIData(oldp+294,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
    bufp->fullBit(oldp+295,(((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+296,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
    bufp->fullIData(oldp+297,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
    bufp->fullIData(oldp+298,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                             << 2U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 0x1eU)))),21);
    bufp->fullBit(oldp+299,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 6U))));
    bufp->fullIData(oldp+300,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
    bufp->fullIData(oldp+301,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                 ? 1U : 0U) ? ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                    + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
    bufp->fullIData(oldp+302,((0x1fffffU & (((0x40000U 
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
    bufp->fullIData(oldp+303,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
    bufp->fullIData(oldp+304,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
    bufp->fullBit(oldp+305,(((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+306,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
    bufp->fullIData(oldp+307,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
    bufp->fullIData(oldp+308,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                             << 0xeU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               >> 0x12U)))),21);
    bufp->fullBit(oldp+309,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xaU))));
    bufp->fullIData(oldp+310,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
    bufp->fullIData(oldp+311,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
    bufp->fullIData(oldp+312,((0x1fffffU & (((0x40U 
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
    bufp->fullIData(oldp+313,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
    bufp->fullIData(oldp+314,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
    bufp->fullBit(oldp+315,(((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+316,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
    bufp->fullIData(oldp+317,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
    bufp->fullIData(oldp+318,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            >> 7U))),21);
    bufp->fullBit(oldp+319,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xbU))));
    bufp->fullIData(oldp+320,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
    bufp->fullIData(oldp+321,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
    bufp->fullIData(oldp+322,((0x1fffffU & (((0x8000000U 
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
    bufp->fullIData(oldp+323,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
    bufp->fullIData(oldp+324,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
    bufp->fullBit(oldp+325,(((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+326,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
    bufp->fullIData(oldp+327,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
    bufp->fullIData(oldp+328,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                             << 4U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 0x1cU)))),21);
    bufp->fullBit(oldp+329,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xcU))));
    bufp->fullIData(oldp+330,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
    bufp->fullIData(oldp+331,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
    bufp->fullIData(oldp+332,((0x1fffffU & (((0x10000U 
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
    bufp->fullIData(oldp+333,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
    bufp->fullIData(oldp+334,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
    bufp->fullBit(oldp+335,(((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+336,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
    bufp->fullIData(oldp+337,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
    bufp->fullIData(oldp+338,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                             << 0xfU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               >> 0x11U)))),21);
    bufp->fullBit(oldp+339,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xdU))));
    bufp->fullIData(oldp+340,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
    bufp->fullIData(oldp+341,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
    bufp->fullIData(oldp+342,((0x1fffffU & (((0x20U 
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
    bufp->fullIData(oldp+343,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
    bufp->fullIData(oldp+344,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
    bufp->fullBit(oldp+345,(((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+346,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
    bufp->fullIData(oldp+347,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
    bufp->fullIData(oldp+348,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            >> 6U))),21);
    bufp->fullBit(oldp+349,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xeU))));
    bufp->fullIData(oldp+350,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
    bufp->fullIData(oldp+351,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
    bufp->fullIData(oldp+352,((0x1fffffU & (((0x4000000U 
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
    bufp->fullIData(oldp+353,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
    bufp->fullIData(oldp+354,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
    bufp->fullBit(oldp+355,(((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+356,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
    bufp->fullIData(oldp+357,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
    bufp->fullIData(oldp+358,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                             << 5U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 0x1bU)))),21);
    bufp->fullBit(oldp+359,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0xfU))));
    bufp->fullIData(oldp+360,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
    bufp->fullIData(oldp+361,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
    bufp->fullIData(oldp+362,((0x1fffffU & (((0x8000U 
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
    bufp->fullIData(oldp+363,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
    bufp->fullIData(oldp+364,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
    bufp->fullBit(oldp+365,(((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+366,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
    bufp->fullIData(oldp+367,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
    bufp->fullIData(oldp+368,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                               >> 0x10U)))),21);
    bufp->fullBit(oldp+369,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x10U))));
    bufp->fullIData(oldp+370,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
    bufp->fullIData(oldp+371,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
    bufp->fullIData(oldp+372,((0x1fffffU & (((0x10U 
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
    bufp->fullIData(oldp+373,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
    bufp->fullIData(oldp+374,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
    bufp->fullBit(oldp+375,(((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+376,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
    bufp->fullIData(oldp+377,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
    bufp->fullIData(oldp+378,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            >> 5U))),21);
    bufp->fullBit(oldp+379,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x11U))));
    bufp->fullIData(oldp+380,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+381,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
    bufp->fullIData(oldp+382,((0x1fffffU & (((0x2000000U 
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
    bufp->fullIData(oldp+383,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
    bufp->fullIData(oldp+384,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
    bufp->fullBit(oldp+385,(((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+386,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
    bufp->fullIData(oldp+387,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
    bufp->fullIData(oldp+388,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                             << 6U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                               >> 0x1aU)))),21);
    bufp->fullBit(oldp+389,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x12U))));
    bufp->fullIData(oldp+390,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+391,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
    bufp->fullIData(oldp+392,((0x1fffffU & (((0x4000U 
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
    bufp->fullIData(oldp+393,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
    bufp->fullIData(oldp+394,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
    bufp->fullBit(oldp+395,(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+396,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+397,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
    bufp->fullIData(oldp+398,((0x1fffffU & (((0x4000U 
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
    bufp->fullIData(oldp+399,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+400,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
    bufp->fullIData(oldp+401,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
    bufp->fullIData(oldp+402,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
    bufp->fullIData(oldp+403,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                             << 0x11U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                               >> 0xfU)))),21);
    bufp->fullBit(oldp+404,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 0x13U))));
    bufp->fullIData(oldp+405,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+406,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
    bufp->fullIData(oldp+407,((0x1fffffU & (((8U & 
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
    bufp->fullIData(oldp+408,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
    bufp->fullIData(oldp+409,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
    bufp->fullBit(oldp+410,(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+411,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
    bufp->fullIData(oldp+412,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
    bufp->fullIData(oldp+413,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                             << 0xdU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               >> 0x13U)))),21);
    bufp->fullBit(oldp+414,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 7U))));
    bufp->fullIData(oldp+415,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
    bufp->fullIData(oldp+416,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
    bufp->fullIData(oldp+417,((0x1fffffU & (((0x80U 
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
    bufp->fullIData(oldp+418,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
    bufp->fullIData(oldp+419,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
    bufp->fullBit(oldp+420,(((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+421,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
    bufp->fullIData(oldp+422,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
    bufp->fullIData(oldp+423,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            >> 8U))),21);
    bufp->fullBit(oldp+424,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 8U))));
    bufp->fullIData(oldp+425,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
    bufp->fullIData(oldp+426,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
    bufp->fullIData(oldp+427,((0x1fffffU & (((0x10000000U 
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
    bufp->fullIData(oldp+428,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
    bufp->fullIData(oldp+429,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
    bufp->fullBit(oldp+430,(((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                              ? 1U : 0U)));
    bufp->fullIData(oldp+431,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
    bufp->fullIData(oldp+432,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
    bufp->fullIData(oldp+433,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                             << 3U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 0x1dU)))),21);
    bufp->fullBit(oldp+434,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                   >> 9U))));
    bufp->fullIData(oldp+435,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
    bufp->fullIData(oldp+436,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                 ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                               - VL_SHIFTRS_III(32,32,32, 
                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                   + VL_SHIFTRS_III(32,32,32, 
                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
    bufp->fullIData(oldp+437,((0x1fffffU & (((0x20000U 
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
    bufp->fullIData(oldp+438,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
    bufp->fullIData(oldp+439,(VL_SHIFTRS_III(32,32,32, 
                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
    bufp->fullBit(oldp+440,(((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                              ? 1U : 0U)));
    bufp->fullBit(oldp+441,(vlSelf->bsg_tanh__DOT__tan_val_i));
    bufp->fullCData(oldp+442,(vlSelf->bsg_tanh__DOT__state_n),2);
    bufp->fullBit(oldp+443,(vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
    bufp->fullCData(oldp+444,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
    bufp->fullQData(oldp+445,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_mux),49);
    bufp->fullQData(oldp+447,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux),49);
    bufp->fullCData(oldp+449,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
    bufp->fullBit(oldp+450,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
    bufp->fullBit(oldp+451,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
    bufp->fullCData(oldp+452,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
    bufp->fullWData(oldp+453,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked),147);
    bufp->fullCData(oldp+458,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                               | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U])))),3);
    bufp->fullCData(oldp+459,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xaU))))),3);
    bufp->fullCData(oldp+460,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xbU))))),3);
    bufp->fullCData(oldp+461,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xcU))))),3);
    bufp->fullCData(oldp+462,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xdU))))),3);
    bufp->fullCData(oldp+463,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+464,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+465,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+466,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x11U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x11U))))),3);
    bufp->fullCData(oldp+467,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x12U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x12U))))),3);
    bufp->fullCData(oldp+468,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x13U))))),3);
    bufp->fullCData(oldp+469,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x11U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 1U))))),3);
    bufp->fullCData(oldp+470,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x14U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x14U))))),3);
    bufp->fullCData(oldp+471,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x15U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x15U))))),3);
    bufp->fullCData(oldp+472,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x16U))))),3);
    bufp->fullCData(oldp+473,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x17U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x17U))))),3);
    bufp->fullCData(oldp+474,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x18U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x18U))))),3);
    bufp->fullCData(oldp+475,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                     >> 0x19U))))),3);
    bufp->fullCData(oldp+476,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1aU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1aU))))),3);
    bufp->fullCData(oldp+477,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1bU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xbU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1bU))))),3);
    bufp->fullCData(oldp+478,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1cU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xcU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1cU))))),3);
    bufp->fullCData(oldp+479,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 0x1dU)) | 
                               ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xdU)) | 
                                (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                       >> 0x1dU))))),3);
    bufp->fullCData(oldp+480,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x12U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 2U))))),3);
    bufp->fullCData(oldp+481,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0xeU)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 0x1eU))))),3);
    bufp->fullCData(oldp+482,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0xfU)) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1fU)))),3);
    bufp->fullCData(oldp+483,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U]) 
                               | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U])))),3);
    bufp->fullCData(oldp+484,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 1U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x11U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 1U))))),3);
    bufp->fullCData(oldp+485,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 2U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x12U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 2U))))),3);
    bufp->fullCData(oldp+486,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 3U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x13U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 3U))))),3);
    bufp->fullCData(oldp+487,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+488,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+489,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+490,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+491,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 3U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x13U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 3U))))),3);
    bufp->fullCData(oldp+492,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+493,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                       >> 9U))))),3);
    bufp->fullCData(oldp+494,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xaU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xaU))))),3);
    bufp->fullCData(oldp+495,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xbU))))),3);
    bufp->fullCData(oldp+496,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xcU))))),3);
    bufp->fullCData(oldp+497,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xdU))))),3);
    bufp->fullCData(oldp+498,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xeU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xeU))))),3);
    bufp->fullCData(oldp+499,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0xfU)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                         >> 0xfU))))),3);
    bufp->fullCData(oldp+500,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                      >> 0x10U)) | 
                               ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                                | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         >> 0x10U))))),3);
    bufp->fullCData(oldp+501,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x14U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 4U))))),3);
    bufp->fullCData(oldp+502,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 5U))))),3);
    bufp->fullCData(oldp+503,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 6U))))),3);
    bufp->fullCData(oldp+504,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 7U))))),3);
    bufp->fullCData(oldp+505,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 8U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x18U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 8U))))),3);
    bufp->fullCData(oldp+506,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                     >> 0x19U)) 
                                                 | (1U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                       >> 9U))))),3);
    bufp->fullWData(oldp+507,(vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
    bufp->fullCData(oldp+511,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x10U)) | 
                               (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U]))),2);
    bufp->fullCData(oldp+512,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1aU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xaU)))),2);
    bufp->fullCData(oldp+513,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xbU)))),2);
    bufp->fullCData(oldp+514,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1cU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xcU)))),2);
    bufp->fullCData(oldp+515,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1dU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+516,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x1eU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+517,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      << 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0xfU)))),2);
    bufp->fullCData(oldp+518,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U]) 
                               | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                        >> 0x10U)))),2);
    bufp->fullCData(oldp+519,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x11U)))),2);
    bufp->fullCData(oldp+520,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 2U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x12U)))),2);
    bufp->fullCData(oldp+521,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 3U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x13U)))),2);
    bufp->fullCData(oldp+522,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x11U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 1U)))),2);
    bufp->fullCData(oldp+523,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x14U)))),2);
    bufp->fullCData(oldp+524,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 5U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x15U)))),2);
    bufp->fullCData(oldp+525,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 6U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x16U)))),2);
    bufp->fullCData(oldp+526,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 7U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x17U)))),2);
    bufp->fullCData(oldp+527,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 8U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x18U)))),2);
    bufp->fullCData(oldp+528,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 9U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                    >> 0x19U)))),2);
    bufp->fullCData(oldp+529,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xaU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1aU)))),2);
    bufp->fullCData(oldp+530,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xbU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1bU)))),2);
    bufp->fullCData(oldp+531,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xcU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1cU)))),2);
    bufp->fullCData(oldp+532,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xdU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1dU)))),2);
    bufp->fullCData(oldp+533,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x12U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 2U)))),2);
    bufp->fullCData(oldp+534,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xeU)) | (1U 
                                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                      >> 0x1eU)))),2);
    bufp->fullCData(oldp+535,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0xfU)) | (
                                                   vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                                   >> 0x1fU))),2);
    bufp->fullCData(oldp+536,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x10U)) | 
                               (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]))),2);
    bufp->fullCData(oldp+537,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x11U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 1U)))),2);
    bufp->fullCData(oldp+538,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x12U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 2U)))),2);
    bufp->fullCData(oldp+539,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 3U)))),2);
    bufp->fullCData(oldp+540,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x14U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 4U)))),2);
    bufp->fullCData(oldp+541,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x15U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 5U)))),2);
    bufp->fullCData(oldp+542,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x16U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 6U)))),2);
    bufp->fullCData(oldp+543,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x17U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 7U)))),2);
    bufp->fullCData(oldp+544,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 3U)))),2);
    bufp->fullCData(oldp+545,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x18U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 8U)))),2);
    bufp->fullCData(oldp+546,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x19U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 9U)))),2);
    bufp->fullCData(oldp+547,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1aU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xaU)))),2);
    bufp->fullCData(oldp+548,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xbU)))),2);
    bufp->fullCData(oldp+549,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1cU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xcU)))),2);
    bufp->fullCData(oldp+550,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1dU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+551,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                      >> 0x1eU)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+552,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
                                      << 1U)) | (1U 
                                                 & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                                    >> 0xfU)))),2);
    bufp->fullCData(oldp+553,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U]) 
                               | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                        >> 0x10U)))),2);
    bufp->fullCData(oldp+554,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x14U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 4U)))),2);
    bufp->fullCData(oldp+555,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x15U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 5U)))),2);
    bufp->fullCData(oldp+556,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x16U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 6U)))),2);
    bufp->fullCData(oldp+557,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x17U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 7U)))),2);
    bufp->fullCData(oldp+558,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x18U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 8U)))),2);
    bufp->fullCData(oldp+559,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                      >> 0x19U)) | 
                               (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                      >> 9U)))),2);
    bufp->fullBit(oldp+560,(vlSelf->clk_i));
    bufp->fullIData(oldp+561,(vlSelf->ang_i),21);
    bufp->fullBit(oldp+562,(vlSelf->ready_i));
    bufp->fullBit(oldp+563,(vlSelf->val_i));
    bufp->fullBit(oldp+564,(vlSelf->reset_i));
    bufp->fullIData(oldp+565,(vlSelf->tanh_o),32);
    bufp->fullBit(oldp+566,(vlSelf->ready_o));
    bufp->fullBit(oldp+567,(vlSelf->val_o));
    bufp->fullIData(oldp+568,(((1U & ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                               >> 0x10U)) 
                                      | (0x3e000U < vlSelf->ang_i)))
                                ? 0x10000U : (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r))),32);
    bufp->fullBit(oldp+569,(((IData)(vlSelf->val_i) 
                             & (0x3e000U >= vlSelf->ang_i))));
    bufp->fullBit(oldp+570,((0x3e000U < vlSelf->ang_i)));
    bufp->fullIData(oldp+571,(6U),32);
    bufp->fullIData(oldp+572,(0xcU),32);
    bufp->fullIData(oldp+573,(1U),32);
    bufp->fullIData(oldp+574,(0x20U),32);
    bufp->fullIData(oldp+575,(0x15U),32);
    bufp->fullIData(oldp+576,(0x10U),32);
    bufp->fullQData(oldp+577,(vlSelf->bsg_tanh__DOT__tanh_crop),48);
    bufp->fullIData(oldp+579,(0x30U),32);
    bufp->fullIData(oldp+580,(0U),32);
    bufp->fullBit(oldp+581,(1U));
    bufp->fullQData(oldp+582,(0ULL),49);
    bufp->fullQData(oldp+584,(vlSelf->bsg_tanh__DOT__divider__DOT__add2_in0),49);
    bufp->fullQData(oldp+586,(vlSelf->bsg_tanh__DOT__divider__DOT__add2_in1),49);
    bufp->fullIData(oldp+588,(0x31U),32);
    bufp->fullBit(oldp+589,(0U));
    bufp->fullIData(oldp+590,(3U),32);
    bufp->fullIData(oldp+591,(2U),32);
    bufp->fullWData(oldp+592,(Vbsg_tanh__ConstPool__CONST_h154117da_0),399);
    bufp->fullIData(oldp+605,(0x57ce0293U),32);
    bufp->fullIData(oldp+606,(0U),32);
    bufp->fullIData(oldp+607,(0x31e41U),21);
    bufp->fullIData(oldp+608,(0x2c548U),21);
    bufp->fullIData(oldp+609,(0x26c0eU),21);
    bufp->fullIData(oldp+610,(0x21252U),21);
    bufp->fullIData(oldp+611,(4U),32);
    bufp->fullIData(oldp+612,(0x1b78cU),21);
    bufp->fullIData(oldp+613,(5U),32);
    bufp->fullIData(oldp+614,(0x15aa1U),21);
    bufp->fullIData(oldp+615,(0xf913U),21);
    bufp->fullIData(oldp+616,(0xaU),32);
    bufp->fullIData(oldp+617,(0x1005U),21);
    bufp->fullIData(oldp+618,(0xbU),32);
    bufp->fullIData(oldp+619,(0x800U),21);
    bufp->fullIData(oldp+620,(0x400U),21);
    bufp->fullIData(oldp+621,(0xdU),32);
    bufp->fullIData(oldp+622,(0x200U),21);
    bufp->fullIData(oldp+623,(0xeU),32);
    bufp->fullIData(oldp+624,(0x100U),21);
    bufp->fullIData(oldp+625,(0xfU),32);
    bufp->fullIData(oldp+626,(0x80U),21);
    bufp->fullIData(oldp+627,(0x40U),21);
    bufp->fullIData(oldp+628,(0x11U),32);
    bufp->fullIData(oldp+629,(0x20U),21);
    bufp->fullIData(oldp+630,(0x12U),32);
    bufp->fullIData(oldp+631,(0x10U),21);
    bufp->fullIData(oldp+632,(7U),32);
    bufp->fullIData(oldp+633,(0x8c9fU),21);
    bufp->fullIData(oldp+634,(8U),32);
    bufp->fullIData(oldp+635,(0x4162U),21);
    bufp->fullIData(oldp+636,(9U),32);
    bufp->fullIData(oldp+637,(0x202bU),21);
}
