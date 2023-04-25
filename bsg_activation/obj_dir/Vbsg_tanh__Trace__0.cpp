// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_tanh__Syms.h"


void Vbsg_tanh___024root__trace_chg_sub_0(Vbsg_tanh___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbsg_tanh___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_chg_top_0\n"); );
    // Init
    Vbsg_tanh___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_tanh___024root*>(voidSelf);
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbsg_tanh___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbsg_tanh___024root__trace_chg_sub_0(Vbsg_tanh___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U]),32);
        bufp->chgIData(oldp+1,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]),32);
        bufp->chgIData(oldp+2,(vlSelf->bsg_tanh__DOT__tanh_r),32);
        bufp->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))));
        bufp->chgBit(oldp+4,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                    >> 0x14U))));
        bufp->chgBit(oldp+5,((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
        bufp->chgBit(oldp+6,((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))));
        bufp->chgCData(oldp+7,(vlSelf->bsg_tanh__DOT__state_r),2);
        bufp->chgQData(oldp+8,((0xffffffffffffULL & 
                                ((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                 << 0x10U))),48);
        bufp->chgQData(oldp+10,((0xffffffffffffULL 
                                 & vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r)),48);
        bufp->chgQData(oldp+12,((0xffffffffffffULL 
                                 & vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r)),48);
        bufp->chgQData(oldp+14,((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))),48);
        bufp->chgQData(oldp+16,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r),49);
        bufp->chgQData(oldp+18,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r),49);
        bufp->chgBit(oldp+20,(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
        bufp->chgBit(oldp+21,((1U & (IData)(((QData)((IData)(
                                                             vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                             >> 0x2fU)))));
        bufp->chgBit(oldp+22,((1U & (IData)((1ULL & 
                                             ((QData)((IData)(
                                                              vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                              >> 0x1fU))))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0U 
                                                != vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))))));
        bufp->chgQData(oldp+24,(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out),49);
        bufp->chgQData(oldp+26,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux),49);
        bufp->chgCData(oldp+28,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo),3);
        bufp->chgBit(oldp+29,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo));
        bufp->chgQData(oldp+30,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r),49);
        bufp->chgBit(oldp+32,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo));
        bufp->chgBit(oldp+33,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo));
        bufp->chgBit(oldp+34,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo));
        bufp->chgBit(oldp+35,(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo));
        bufp->chgQData(oldp+36,((0x1ffffffffffffULL 
                                 & ((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                     ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                    & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_clr_lo)))))),49);
        bufp->chgQData(oldp+38,((0x1ffffffffffffULL 
                                 & ((vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                     ^ (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                    & (- (QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_clr_lo)))))),49);
        bufp->chgBit(oldp+40,(vlSelf->bsg_tanh__DOT__divider__DOT__adder1_cin_lo));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                             >> 0x30U)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                             >> 0x30U)))));
        bufp->chgBit(oldp+43,((1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                             >> 0x30U)))));
        bufp->chgBit(oldp+44,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r));
        bufp->chgBit(oldp+45,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
        bufp->chgBit(oldp+46,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld));
        bufp->chgBit(oldp+47,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r));
        bufp->chgBit(oldp+48,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add2_neg_last_r));
        bufp->chgCData(oldp+49,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state),6);
        bufp->chgCData(oldp+50,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt),6);
        bufp->chgBit(oldp+51,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li));
        bufp->chgBit(oldp+52,((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))));
        bufp->chgWData(oldp+53,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i),147);
        bufp->chgWData(oldp+58,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked),147);
        bufp->chgCData(oldp+63,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                           >> 0x10U)) 
                                    | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U])))),3);
        bufp->chgCData(oldp+64,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                           >> 0xaU))))),3);
        bufp->chgCData(oldp+65,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xbU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                           >> 0xbU))))),3);
        bufp->chgCData(oldp+66,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xcU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                           >> 0xcU))))),3);
        bufp->chgCData(oldp+67,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xdU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                           >> 0xdU))))),3);
        bufp->chgCData(oldp+68,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xeU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                           >> 0xeU))))),3);
        bufp->chgCData(oldp+69,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0xfU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                         >> 0xfU))))),3);
        bufp->chgCData(oldp+70,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x10U)) 
                                 | ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U]) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x10U))))),3);
        bufp->chgCData(oldp+71,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x11U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 1U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x11U))))),3);
        bufp->chgCData(oldp+72,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x12U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 2U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x12U))))),3);
        bufp->chgCData(oldp+73,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x13U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 3U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x13U))))),3);
        bufp->chgCData(oldp+74,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 1U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+75,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x14U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 4U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x14U))))),3);
        bufp->chgCData(oldp+76,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x15U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 5U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x15U))))),3);
        bufp->chgCData(oldp+77,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x16U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 6U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x16U))))),3);
        bufp->chgCData(oldp+78,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x17U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 7U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x17U))))),3);
        bufp->chgCData(oldp+79,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x18U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 8U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x18U))))),3);
        bufp->chgCData(oldp+80,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x19U)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 9U)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x19U))))),3);
        bufp->chgCData(oldp+81,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x1aU)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 0xaU)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x1aU))))),3);
        bufp->chgCData(oldp+82,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x1bU)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 0xbU)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x1bU))))),3);
        bufp->chgCData(oldp+83,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x1cU)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 0xcU)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x1cU))))),3);
        bufp->chgCData(oldp+84,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 0x1dU)) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 0xdU)) 
                                    | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                             >> 0x1dU))))),3);
        bufp->chgCData(oldp+85,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 2U))))),3);
        bufp->chgCData(oldp+86,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 0x1eU))))),3);
        bufp->chgCData(oldp+87,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        << 1U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0xfU)) 
                                                   | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                      >> 0x1fU)))),3);
        bufp->chgCData(oldp+88,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U]) 
                                 | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                           >> 0x10U)) 
                                    | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U])))),3);
        bufp->chgCData(oldp+89,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 1U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 1U))))),3);
        bufp->chgCData(oldp+90,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 2U))))),3);
        bufp->chgCData(oldp+91,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 3U))))),3);
        bufp->chgCData(oldp+92,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 4U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 4U))))),3);
        bufp->chgCData(oldp+93,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 5U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 5U))))),3);
        bufp->chgCData(oldp+94,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 6U))))),3);
        bufp->chgCData(oldp+95,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 7U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 7U))))),3);
        bufp->chgCData(oldp+96,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                         >> 3U))))),3);
        bufp->chgCData(oldp+97,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 8U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 8U))))),3);
        bufp->chgCData(oldp+98,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 9U)) | (
                                                   (2U 
                                                    & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                         >> 9U))))),3);
        bufp->chgCData(oldp+99,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                           >> 0xaU))))),3);
        bufp->chgCData(oldp+100,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0xbU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                            >> 0x1bU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0xbU))))),3);
        bufp->chgCData(oldp+101,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0xcU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                            >> 0x1cU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0xcU))))),3);
        bufp->chgCData(oldp+102,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0xdU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                            >> 0x1dU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0xdU))))),3);
        bufp->chgCData(oldp+103,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0xeU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                            >> 0x1eU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0xeU))))),3);
        bufp->chgCData(oldp+104,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0xfU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                            << 1U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0xfU))))),3);
        bufp->chgCData(oldp+105,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                         >> 0x10U)) 
                                  | ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0x10U))))),3);
        bufp->chgCData(oldp+106,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 4U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 4U))))),3);
        bufp->chgCData(oldp+107,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 5U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 5U))))),3);
        bufp->chgCData(oldp+108,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 6U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 6U))))),3);
        bufp->chgCData(oldp+109,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 7U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 7U))))),3);
        bufp->chgCData(oldp+110,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 8U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 8U))))),3);
        bufp->chgCData(oldp+111,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                         >> 9U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                            >> 9U))))),3);
        bufp->chgWData(oldp+112,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i),147);
        bufp->chgWData(oldp+117,(vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i),98);
        bufp->chgBit(oldp+121,(((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                & (0U == (IData)(vlSelf->bsg_tanh__DOT__state_r)))));
        bufp->chgWData(oldp+122,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x),672);
        bufp->chgWData(oldp+143,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y),672);
        bufp->chgWData(oldp+164,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang),441);
        bufp->chgIData(oldp+178,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val),21);
        bufp->chgWData(oldp+179,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans),640);
        bufp->chgWData(oldp+199,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans),640);
        bufp->chgWData(oldp+219,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans),420);
        bufp->chgIData(oldp+233,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans),20);
        bufp->chgBit(oldp+234,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe));
        bufp->chgIData(oldp+235,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]),32);
        bufp->chgIData(oldp+236,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]),32);
        bufp->chgIData(oldp+237,((0x1fffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])),21);
        bufp->chgBit(oldp+238,((1U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val)));
        bufp->chgIData(oldp+239,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)))),32);
        bufp->chgIData(oldp+240,((((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)))),32);
        bufp->chgIData(oldp+241,((0x1fffffU & (((0x100000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x31e41U) 
                                                   + 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                : (
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                   - (IData)(0x31e41U))))),21);
        bufp->chgIData(oldp+242,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U)),32);
        bufp->chgIData(oldp+243,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U)),32);
        bufp->chgBit(oldp+244,(((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+245,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]),32);
        bufp->chgIData(oldp+246,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]),32);
        bufp->chgIData(oldp+247,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                << 0xbU) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                  >> 0x15U)))),21);
        bufp->chgBit(oldp+248,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 1U))));
        bufp->chgIData(oldp+249,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)))),32);
        bufp->chgIData(oldp+250,((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)))),32);
        bufp->chgIData(oldp+251,((0x1fffffU & (((0x200U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x2c548U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0xbU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                       >> 0x15U)) 
                                                   - (IData)(0x2c548U))))),21);
        bufp->chgIData(oldp+252,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U)),32);
        bufp->chgIData(oldp+253,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U)),32);
        bufp->chgBit(oldp+254,(((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+255,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]),32);
        bufp->chgIData(oldp+256,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]),32);
        bufp->chgIData(oldp+257,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0xaU))),21);
        bufp->chgBit(oldp+258,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 2U))));
        bufp->chgIData(oldp+259,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)))),32);
        bufp->chgIData(oldp+260,((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)))),32);
        bufp->chgIData(oldp+261,((0x1fffffU & (((0x40000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x26c0eU) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0x16U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                     << 0x16U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0xaU)) 
                                                   - (IData)(0x26c0eU))))),21);
        bufp->chgIData(oldp+262,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U)),32);
        bufp->chgIData(oldp+263,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U)),32);
        bufp->chgBit(oldp+264,(((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+265,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]),32);
        bufp->chgIData(oldp+266,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]),32);
        bufp->chgIData(oldp+267,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                << 1U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  >> 0x1fU)))),21);
        bufp->chgBit(oldp+268,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 3U))));
        bufp->chgIData(oldp+269,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)))),32);
        bufp->chgIData(oldp+270,((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)))),32);
        bufp->chgIData(oldp+271,((0x1fffffU & (((0x80000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x21252U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                     << 1U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                       >> 0x1fU)) 
                                                   - (IData)(0x21252U))))),21);
        bufp->chgIData(oldp+272,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U)),32);
        bufp->chgIData(oldp+273,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U)),32);
        bufp->chgBit(oldp+274,(((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+275,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]),32);
        bufp->chgIData(oldp+276,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]),32);
        bufp->chgIData(oldp+277,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                << 0xcU) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                  >> 0x14U)))),21);
        bufp->chgBit(oldp+278,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 4U))));
        bufp->chgIData(oldp+279,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)))),32);
        bufp->chgIData(oldp+280,((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)))),32);
        bufp->chgIData(oldp+281,((0x1fffffU & (((0x100U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x1b78cU) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0xcU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                       >> 0x14U)) 
                                                   - (IData)(0x1b78cU))))),21);
        bufp->chgIData(oldp+282,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U)),32);
        bufp->chgIData(oldp+283,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U)),32);
        bufp->chgBit(oldp+284,(((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+285,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]),32);
        bufp->chgIData(oldp+286,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]),32);
        bufp->chgIData(oldp+287,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 9U))),21);
        bufp->chgBit(oldp+288,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 5U))));
        bufp->chgIData(oldp+289,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)))),32);
        bufp->chgIData(oldp+290,((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)))),32);
        bufp->chgIData(oldp+291,((0x1fffffU & (((0x20000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x15aa1U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0x17U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                     << 0x17U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 9U)) 
                                                   - (IData)(0x15aa1U))))),21);
        bufp->chgIData(oldp+292,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U)),32);
        bufp->chgIData(oldp+293,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U)),32);
        bufp->chgBit(oldp+294,(((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+295,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]),32);
        bufp->chgIData(oldp+296,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]),32);
        bufp->chgIData(oldp+297,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                << 2U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  >> 0x1eU)))),21);
        bufp->chgBit(oldp+298,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 6U))));
        bufp->chgIData(oldp+299,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)))),32);
        bufp->chgIData(oldp+300,((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                    ? 1U : 0U) ? ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                                   - 
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U))
                                   : ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                                       + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
                                      - VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)))),32);
        bufp->chgIData(oldp+301,((0x1fffffU & (((0x40000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0xf913U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                     << 2U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                       >> 0x1eU)) 
                                                   - (IData)(0xf913U))))),21);
        bufp->chgIData(oldp+302,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U)),32);
        bufp->chgIData(oldp+303,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U)),32);
        bufp->chgBit(oldp+304,(((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+305,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU]),32);
        bufp->chgIData(oldp+306,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU]),32);
        bufp->chgIData(oldp+307,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                << 0xeU) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                  >> 0x12U)))),21);
        bufp->chgBit(oldp+308,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xaU))));
        bufp->chgIData(oldp+309,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)))),32);
        bufp->chgIData(oldp+310,((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)))),32);
        bufp->chgIData(oldp+311,((0x1fffffU & (((0x40U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x1005U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0xeU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                       >> 0x12U)) 
                                                   - (IData)(0x1005U))))),21);
        bufp->chgIData(oldp+312,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U)),32);
        bufp->chgIData(oldp+313,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U)),32);
        bufp->chgBit(oldp+314,(((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+315,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU]),32);
        bufp->chgIData(oldp+316,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU]),32);
        bufp->chgIData(oldp+317,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 7U))),21);
        bufp->chgBit(oldp+318,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xbU))));
        bufp->chgIData(oldp+319,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)))),32);
        bufp->chgIData(oldp+320,((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)))),32);
        bufp->chgIData(oldp+321,((0x1fffffU & (((0x8000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x1005U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0x19U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     << 0x19U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 7U)) 
                                                   - (IData)(0x1005U))))),21);
        bufp->chgIData(oldp+322,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U)),32);
        bufp->chgIData(oldp+323,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U)),32);
        bufp->chgBit(oldp+324,(((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+325,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU]),32);
        bufp->chgIData(oldp+326,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU]),32);
        bufp->chgIData(oldp+327,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                << 4U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                  >> 0x1cU)))),21);
        bufp->chgBit(oldp+328,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xcU))));
        bufp->chgIData(oldp+329,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)))),32);
        bufp->chgIData(oldp+330,((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)))),32);
        bufp->chgIData(oldp+331,((0x1fffffU & (((0x10000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x800U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     << 4U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                       >> 0x1cU)) 
                                                   - (IData)(0x800U))))),21);
        bufp->chgIData(oldp+332,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U)),32);
        bufp->chgIData(oldp+333,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U)),32);
        bufp->chgBit(oldp+334,(((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+335,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU]),32);
        bufp->chgIData(oldp+336,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU]),32);
        bufp->chgIData(oldp+337,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                << 0xfU) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                  >> 0x11U)))),21);
        bufp->chgBit(oldp+338,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xdU))));
        bufp->chgIData(oldp+339,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)))),32);
        bufp->chgIData(oldp+340,((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)))),32);
        bufp->chgIData(oldp+341,((0x1fffffU & (((0x20U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x400U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0xfU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                       >> 0x11U)) 
                                                   - (IData)(0x400U))))),21);
        bufp->chgIData(oldp+342,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U)),32);
        bufp->chgIData(oldp+343,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U)),32);
        bufp->chgBit(oldp+344,(((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+345,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU]),32);
        bufp->chgIData(oldp+346,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU]),32);
        bufp->chgIData(oldp+347,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 6U))),21);
        bufp->chgBit(oldp+348,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xeU))));
        bufp->chgIData(oldp+349,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)))),32);
        bufp->chgIData(oldp+350,((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)))),32);
        bufp->chgIData(oldp+351,((0x1fffffU & (((0x4000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x200U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0x1aU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     << 0x1aU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 6U)) 
                                                   - (IData)(0x200U))))),21);
        bufp->chgIData(oldp+352,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U)),32);
        bufp->chgIData(oldp+353,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U)),32);
        bufp->chgBit(oldp+354,(((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+355,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU]),32);
        bufp->chgIData(oldp+356,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU]),32);
        bufp->chgIData(oldp+357,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                << 5U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                  >> 0x1bU)))),21);
        bufp->chgBit(oldp+358,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0xfU))));
        bufp->chgIData(oldp+359,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)))),32);
        bufp->chgIData(oldp+360,((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)))),32);
        bufp->chgIData(oldp+361,((0x1fffffU & (((0x8000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x100U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                     << 5U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                       >> 0x1bU)) 
                                                   - (IData)(0x100U))))),21);
        bufp->chgIData(oldp+362,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U)),32);
        bufp->chgIData(oldp+363,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U)),32);
        bufp->chgBit(oldp+364,(((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+365,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U]),32);
        bufp->chgIData(oldp+366,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U]),32);
        bufp->chgIData(oldp+367,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                << 0x10U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                  >> 0x10U)))),21);
        bufp->chgBit(oldp+368,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0x10U))));
        bufp->chgIData(oldp+369,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)))),32);
        bufp->chgIData(oldp+370,((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)))),32);
        bufp->chgIData(oldp+371,((0x1fffffU & (((0x10U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x80U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                       >> 0x10U)) 
                                                   - (IData)(0x80U))))),21);
        bufp->chgIData(oldp+372,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U)),32);
        bufp->chgIData(oldp+373,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U)),32);
        bufp->chgBit(oldp+374,(((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+375,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U]),32);
        bufp->chgIData(oldp+376,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U]),32);
        bufp->chgIData(oldp+377,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                               >> 5U))),21);
        bufp->chgBit(oldp+378,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0x11U))));
        bufp->chgIData(oldp+379,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))),32);
        bufp->chgIData(oldp+380,((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))),32);
        bufp->chgIData(oldp+381,((0x1fffffU & (((0x2000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x40U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                     << 0x1bU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 5U)) 
                                                   - (IData)(0x40U))))),21);
        bufp->chgIData(oldp+382,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)),32);
        bufp->chgIData(oldp+383,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)),32);
        bufp->chgBit(oldp+384,(((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+385,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U]),32);
        bufp->chgIData(oldp+386,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U]),32);
        bufp->chgIData(oldp+387,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                << 6U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  >> 0x1aU)))),21);
        bufp->chgBit(oldp+388,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0x12U))));
        bufp->chgIData(oldp+389,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)))),32);
        bufp->chgIData(oldp+390,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)))),32);
        bufp->chgIData(oldp+391,((0x1fffffU & (((0x4000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x20U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x20U))))),21);
        bufp->chgIData(oldp+392,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU)),32);
        bufp->chgIData(oldp+393,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU)),32);
        bufp->chgBit(oldp+394,(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+395,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))),32);
        bufp->chgIData(oldp+396,((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))),32);
        bufp->chgIData(oldp+397,((0x1fffffU & (((0x4000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                       >> 0x1aU)) 
                                                   - (IData)(0x10U))))),21);
        bufp->chgIData(oldp+398,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)),32);
        bufp->chgIData(oldp+399,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)),32);
        bufp->chgIData(oldp+400,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U]),32);
        bufp->chgIData(oldp+401,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U]),32);
        bufp->chgIData(oldp+402,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                << 0x11U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  >> 0xfU)))),21);
        bufp->chgBit(oldp+403,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 0x13U))));
        bufp->chgIData(oldp+404,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)))),32);
        bufp->chgIData(oldp+405,((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)))),32);
        bufp->chgIData(oldp+406,((0x1fffffU & (((8U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x10U))))),21);
        bufp->chgIData(oldp+407,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU)),32);
        bufp->chgIData(oldp+408,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU)),32);
        bufp->chgBit(oldp+409,(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+410,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U]),32);
        bufp->chgIData(oldp+411,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U]),32);
        bufp->chgIData(oldp+412,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                << 0xdU) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                  >> 0x13U)))),21);
        bufp->chgBit(oldp+413,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 7U))));
        bufp->chgIData(oldp+414,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)))),32);
        bufp->chgIData(oldp+415,((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)))),32);
        bufp->chgIData(oldp+416,((0x1fffffU & (((0x80U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x8c9fU) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0xdU) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                       >> 0x13U)) 
                                                   - (IData)(0x8c9fU))))),21);
        bufp->chgIData(oldp+417,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U)),32);
        bufp->chgIData(oldp+418,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U)),32);
        bufp->chgBit(oldp+419,(((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+420,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U]),32);
        bufp->chgIData(oldp+421,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U]),32);
        bufp->chgIData(oldp+422,((0x1fffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 8U))),21);
        bufp->chgBit(oldp+423,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 8U))));
        bufp->chgIData(oldp+424,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)))),32);
        bufp->chgIData(oldp+425,((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)))),32);
        bufp->chgIData(oldp+426,((0x1fffffU & (((0x10000000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x4162U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 8U)) 
                                                   - (IData)(0x4162U))))),21);
        bufp->chgIData(oldp+427,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U)),32);
        bufp->chgIData(oldp+428,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U)),32);
        bufp->chgBit(oldp+429,(((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                 ? 1U : 0U)));
        bufp->chgIData(oldp+430,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U]),32);
        bufp->chgIData(oldp+431,(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U]),32);
        bufp->chgIData(oldp+432,((0x1fffffU & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                << 3U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  >> 0x1dU)))),21);
        bufp->chgBit(oldp+433,((1U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                      >> 9U))));
        bufp->chgIData(oldp+434,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)))),32);
        bufp->chgIData(oldp+435,((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                    ? 1U : 0U) ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U))
                                   : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)))),32);
        bufp->chgIData(oldp+436,((0x1fffffU & (((0x20000U 
                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                                 ? 1U
                                                 : 0U)
                                                ? ((IData)(0x202bU) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)))
                                                : (
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                     << 3U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                       >> 0x1dU)) 
                                                   - (IData)(0x202bU))))),21);
        bufp->chgIData(oldp+437,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U)),32);
        bufp->chgIData(oldp+438,(VL_SHIFTRS_III(32,32,32, 
                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U)),32);
        bufp->chgBit(oldp+439,(((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                 ? 1U : 0U)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+440,(vlSelf->bsg_tanh__DOT__tan_val_i));
        bufp->chgCData(oldp+441,(vlSelf->bsg_tanh__DOT__state_n),2);
        bufp->chgBit(oldp+442,(vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo));
        bufp->chgCData(oldp+443,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo),2);
        bufp->chgQData(oldp+444,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_mux),49);
        bufp->chgQData(oldp+446,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux),49);
        bufp->chgCData(oldp+448,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo),3);
        bufp->chgBit(oldp+449,(vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo));
        bufp->chgBit(oldp+450,(vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo));
        bufp->chgCData(oldp+451,(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state),6);
        bufp->chgWData(oldp+452,(vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked),147);
        bufp->chgCData(oldp+457,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x10U)) 
                                     | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U])))),3);
        bufp->chgCData(oldp+458,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xaU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x1aU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xaU))))),3);
        bufp->chgCData(oldp+459,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xbU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x1bU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xbU))))),3);
        bufp->chgCData(oldp+460,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xcU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x1cU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xcU))))),3);
        bufp->chgCData(oldp+461,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xdU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x1dU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xdU))))),3);
        bufp->chgCData(oldp+462,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xeU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 0x1eU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xeU))))),3);
        bufp->chgCData(oldp+463,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0xfU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            << 1U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0xfU))))),3);
        bufp->chgCData(oldp+464,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x10U)) 
                                  | ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U]) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x10U))))),3);
        bufp->chgCData(oldp+465,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x11U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 1U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x11U))))),3);
        bufp->chgCData(oldp+466,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x12U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 2U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x12U))))),3);
        bufp->chgCData(oldp+467,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x13U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 3U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x13U))))),3);
        bufp->chgCData(oldp+468,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 1U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+469,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x14U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 4U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x14U))))),3);
        bufp->chgCData(oldp+470,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x15U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 5U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x15U))))),3);
        bufp->chgCData(oldp+471,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x16U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 6U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x16U))))),3);
        bufp->chgCData(oldp+472,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x17U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 7U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x17U))))),3);
        bufp->chgCData(oldp+473,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x18U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 8U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x18U))))),3);
        bufp->chgCData(oldp+474,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x19U)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 9U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x19U))))),3);
        bufp->chgCData(oldp+475,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x1aU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0xaU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x1aU))))),3);
        bufp->chgCData(oldp+476,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x1bU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0xbU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x1bU))))),3);
        bufp->chgCData(oldp+477,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x1cU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0xcU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x1cU))))),3);
        bufp->chgCData(oldp+478,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 0x1dU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0xdU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                              >> 0x1dU))))),3);
        bufp->chgCData(oldp+479,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 2U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 2U))))),3);
        bufp->chgCData(oldp+480,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         << 2U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 0x1eU))))),3);
        bufp->chgCData(oldp+481,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         << 1U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0xfU)) 
                                   | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                      >> 0x1fU)))),3);
        bufp->chgCData(oldp+482,(((4U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U]) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x10U)) 
                                     | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U])))),3);
        bufp->chgCData(oldp+483,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 1U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 1U))))),3);
        bufp->chgCData(oldp+484,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 2U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 2U))))),3);
        bufp->chgCData(oldp+485,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 3U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 3U))))),3);
        bufp->chgCData(oldp+486,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 4U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 4U))))),3);
        bufp->chgCData(oldp+487,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 5U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 5U))))),3);
        bufp->chgCData(oldp+488,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 6U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 6U))))),3);
        bufp->chgCData(oldp+489,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 7U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 7U))))),3);
        bufp->chgCData(oldp+490,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 3U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 3U))))),3);
        bufp->chgCData(oldp+491,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 8U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 8U))))),3);
        bufp->chgCData(oldp+492,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 9U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                            >> 9U))))),3);
        bufp->chgCData(oldp+493,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xaU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x1aU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xaU))))),3);
        bufp->chgCData(oldp+494,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xbU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x1bU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xbU))))),3);
        bufp->chgCData(oldp+495,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xcU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x1cU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xcU))))),3);
        bufp->chgCData(oldp+496,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xdU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x1dU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xdU))))),3);
        bufp->chgCData(oldp+497,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xeU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                            >> 0x1eU)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xeU))))),3);
        bufp->chgCData(oldp+498,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0xfU)) 
                                  | ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                            << 1U)) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0xfU))))),3);
        bufp->chgCData(oldp+499,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                         >> 0x10U)) 
                                  | ((2U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
                                     | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0x10U))))),3);
        bufp->chgCData(oldp+500,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 4U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 4U))))),3);
        bufp->chgCData(oldp+501,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 5U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 5U))))),3);
        bufp->chgCData(oldp+502,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 6U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 6U))))),3);
        bufp->chgCData(oldp+503,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 7U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 7U))))),3);
        bufp->chgCData(oldp+504,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 8U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 8U))))),3);
        bufp->chgCData(oldp+505,(((4U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                         >> 9U)) | 
                                  ((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                            >> 9U))))),3);
        bufp->chgWData(oldp+506,(vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked),98);
        bufp->chgCData(oldp+510,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U]))),2);
        bufp->chgCData(oldp+511,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0xaU)))),2);
        bufp->chgCData(oldp+512,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0xbU)))),2);
        bufp->chgCData(oldp+513,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0xcU)))),2);
        bufp->chgCData(oldp+514,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0xdU)))),2);
        bufp->chgCData(oldp+515,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0xeU)))),2);
        bufp->chgCData(oldp+516,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0xfU)))),2);
        bufp->chgCData(oldp+517,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U]) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x10U)))),2);
        bufp->chgCData(oldp+518,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 1U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x11U)))),2);
        bufp->chgCData(oldp+519,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 2U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x12U)))),2);
        bufp->chgCData(oldp+520,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 3U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x13U)))),2);
        bufp->chgCData(oldp+521,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x11U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 1U)))),2);
        bufp->chgCData(oldp+522,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 4U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x14U)))),2);
        bufp->chgCData(oldp+523,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 5U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x15U)))),2);
        bufp->chgCData(oldp+524,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 6U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x16U)))),2);
        bufp->chgCData(oldp+525,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x17U)))),2);
        bufp->chgCData(oldp+526,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x18U)))),2);
        bufp->chgCData(oldp+527,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                         >> 0x19U)))),2);
        bufp->chgCData(oldp+528,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x1aU)))),2);
        bufp->chgCData(oldp+529,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x1bU)))),2);
        bufp->chgCData(oldp+530,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x1cU)))),2);
        bufp->chgCData(oldp+531,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x1dU)))),2);
        bufp->chgCData(oldp+532,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x12U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+533,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 0x1eU)))),2);
        bufp->chgCData(oldp+534,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0xfU)) 
                                  | (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                     >> 0x1fU))),2);
        bufp->chgCData(oldp+535,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]))),2);
        bufp->chgCData(oldp+536,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x11U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 1U)))),2);
        bufp->chgCData(oldp+537,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x12U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+538,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x13U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 3U)))),2);
        bufp->chgCData(oldp+539,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x14U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 4U)))),2);
        bufp->chgCData(oldp+540,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x15U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 5U)))),2);
        bufp->chgCData(oldp+541,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x16U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 6U)))),2);
        bufp->chgCData(oldp+542,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x17U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 7U)))),2);
        bufp->chgCData(oldp+543,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x13U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 3U)))),2);
        bufp->chgCData(oldp+544,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x18U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 8U)))),2);
        bufp->chgCData(oldp+545,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 9U)))),2);
        bufp->chgCData(oldp+546,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0xaU)))),2);
        bufp->chgCData(oldp+547,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0xbU)))),2);
        bufp->chgCData(oldp+548,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0xcU)))),2);
        bufp->chgCData(oldp+549,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0xdU)))),2);
        bufp->chgCData(oldp+550,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0xeU)))),2);
        bufp->chgCData(oldp+551,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0xfU)))),2);
        bufp->chgCData(oldp+552,(((2U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U]) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                           >> 0x10U)))),2);
        bufp->chgCData(oldp+553,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x14U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 4U)))),2);
        bufp->chgCData(oldp+554,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x15U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 5U)))),2);
        bufp->chgCData(oldp+555,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x16U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 6U)))),2);
        bufp->chgCData(oldp+556,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x17U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 7U)))),2);
        bufp->chgCData(oldp+557,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x18U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 8U)))),2);
        bufp->chgCData(oldp+558,(((2U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
                                           >> 9U)))),2);
    }
    bufp->chgBit(oldp+559,(vlSelf->clk_i));
    bufp->chgIData(oldp+560,(vlSelf->ang_i),21);
    bufp->chgBit(oldp+561,(vlSelf->ready_i));
    bufp->chgBit(oldp+562,(vlSelf->val_i));
    bufp->chgBit(oldp+563,(vlSelf->reset_i));
    bufp->chgIData(oldp+564,(vlSelf->tanh_o),32);
    bufp->chgBit(oldp+565,(vlSelf->ready_o));
    bufp->chgBit(oldp+566,(vlSelf->val_o));
    bufp->chgIData(oldp+567,(((1U & ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                              >> 0x10U)) 
                                     | (0x3e000U < vlSelf->ang_i)))
                               ? 0x10000U : (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r))),32);
    bufp->chgBit(oldp+568,(((IData)(vlSelf->val_i) 
                            & (0x3e000U >= vlSelf->ang_i))));
    bufp->chgBit(oldp+569,((0x3e000U < vlSelf->ang_i)));
}

void Vbsg_tanh___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root__trace_cleanup\n"); );
    // Init
    Vbsg_tanh___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_tanh___024root*>(voidSelf);
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
