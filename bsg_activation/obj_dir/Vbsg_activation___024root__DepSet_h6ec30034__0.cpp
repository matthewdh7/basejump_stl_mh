// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_activation.h for the primary calling header

#include "verilated.h"

#include "Vbsg_activation___024root.h"

VL_INLINE_OPT void Vbsg_activation___024root___sequent__TOP__0(Vbsg_activation___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ bsg_activation__DOT__divider__DOT__opB_sel_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opA_inv_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opB_inv_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opA_clr_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__opB_clr_lo;
    CData/*0:0*/ bsg_activation__DOT__divider__DOT__adder1_cin_lo;
    VlWide<3>/*74:0*/ bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i;
    CData/*4:0*/ __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt;
    // Body
    __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt 
        = vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt;
    if (vlSelf->reset_i) {
        __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt = 0U;
    } else if (vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_done) {
        __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt 
            = vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li;
    } else if (vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li) {
        __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt)));
    }
    if ((1U & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U] = 0x15f37d0U;
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[1U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[2U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[3U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[4U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[5U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[6U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[7U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[8U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[9U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xaU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xbU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xcU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xdU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xeU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xfU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x10U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x11U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x14U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x13U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U]) 
               | (IData)(vlSelf->bsg_activation__DOT__ang_r));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[8U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
            = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[8U] 
                  >> 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
            = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U]) 
               | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U] 
                  << 0x10U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0xaU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U] 
               >> 0x10U);
    }
    if (vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo) {
        vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r 
            = vlSelf->bsg_activation__DOT__divider__DOT__opB_mux;
    }
    vlSelf->bsg_activation__DOT__ang_r = ((IData)(vlSelf->reset_i)
                                           ? 0U : ((IData)(vlSelf->bsg_activation__DOT__load_ang)
                                                    ? (IData)(vlSelf->bsg_activation__DOT__ang_n)
                                                    : (IData)(vlSelf->bsg_activation__DOT__ang_r)));
    if (vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld) {
        vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__q_neg_r 
            = (((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                 ^ vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r) 
                >> 0x18U) & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r));
    }
    if ((1U & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffffdU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (2U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffffbU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (4U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffff7U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (8U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fffefU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x10U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fffdfU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x20U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fffbfU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x40U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fff7fU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x80U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffeffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x100U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffdffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x200U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffbffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x400U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ff7ffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x800U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fefffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x1000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fdfffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x2000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1fbfffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x4000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1f7fffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x8000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1effffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x10000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1dffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x20000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1bffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x40000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x17ffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x80000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x17ffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x80000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0xfffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (0x100000U & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
                               << 1U)));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            = ((0x1ffffeU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val) 
               | (((1U == vlSelf->bsg_activation__DOT__state_r) 
                   & (~ (IData)(vlSelf->bsg_activation__DOT__one_bypass))) 
                  & (~ (IData)(vlSelf->bsg_activation__DOT__zero_bypass))));
    }
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r 
        = (1U & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                 >> 0x18U));
    if ((1U & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U] = 0U;
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[1U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[2U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[3U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[4U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[5U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[6U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[7U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[8U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[9U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xaU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xbU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xcU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xdU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xeU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xfU];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x10U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x11U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U];
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
            = vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x13U];
    }
    if (vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld) {
        vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r 
            = ((vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                >> 0x18U) & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r));
    }
    vlSelf->bsg_activation__DOT__data_r = (0x7ffU & 
                                           ((((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                                              | (IData)(vlSelf->bsg_activation__DOT__one_bypass)) 
                                             | (IData)(vlSelf->bsg_activation__DOT__zero_bypass))
                                             ? ((IData)(
                                                        (((IData)(vlSelf->ang_i) 
                                                          >> 0xfU) 
                                                         & (~ (IData)(vlSelf->tanh_sel_i))))
                                                 ? 
                                                ((IData)(0x400U) 
                                                 - (IData)(vlSelf->bsg_activation__DOT__data_n))
                                                 : 
                                                ((0x8000U 
                                                  & (IData)(vlSelf->ang_i))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->bsg_activation__DOT__data_n)))
                                                  : (IData)(vlSelf->bsg_activation__DOT__data_n)))
                                             : (IData)(vlSelf->bsg_activation__DOT__data_r)));
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt 
        = __Vdly__bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt;
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_done 
        = (0x18U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                           ? 1U : 0U) ? ((IData)(0xc79U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                             - (IData)(0xc79U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0xb15U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
                                  >> 0x10U)) - (IData)(0xb15U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                           ? 1U : 0U) ? ((IData)(0x9b0U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                             - (IData)(0x9b0U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x849U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
                                  >> 0x10U)) - (IData)(0x849U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                           ? 1U : 0U) ? ((IData)(0x6deU) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                             - (IData)(0x6deU)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x56aU) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
                                  >> 0x10U)) - (IData)(0x56aU))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                           ? 1U : 0U) ? ((IData)(0x3e4U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                             - (IData)(0x3e4U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x232U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
                                  >> 0x10U)) - (IData)(0x232U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                           ? 1U : 0U) ? ((IData)(0x105U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                             - (IData)(0x105U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x80U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
                                  >> 0x10U)) - (IData)(0x80U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                           ? 1U : 0U) ? ((IData)(0x40U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                             - (IData)(0x40U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x40U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
                                  >> 0x10U)) - (IData)(0x40U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                           ? 1U : 0U) ? ((IData)(0x20U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                             - (IData)(0x20U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x10U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
                                  >> 0x10U)) - (IData)(0x10U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                           ? 1U : 0U) ? ((IData)(8U) 
                                         + vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
                          : (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                             - (IData)(8U)))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | ((((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(4U) 
                                         + ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                     << 0x10U) | (vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
                                  >> 0x10U)) - (IData)(4U))) 
              << 0x10U));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[8U] 
        = (IData)((0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])))));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0xffff0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (IData)(((0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])))) 
                      >> 0x20U)));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang_ans[9U] 
        = vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U];
    if (vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo) {
        vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
            = vlSelf->bsg_activation__DOT__divider__DOT__opA_mux;
    }
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
        = ((0x80000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans) 
           | (0x7ffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans 
        = ((0x3ffffU & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val_ans) 
           | (0xc0000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_activation__DOT__state_r = vlSelf->bsg_activation__DOT__state_n;
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U], 8U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0U], 8U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[0U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U], 7U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[1U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[1U], 7U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U], 6U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[2U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[2U], 6U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[1U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U], 5U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[3U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[3U], 5U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[4U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[4U], 4U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[2U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U], 3U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[5U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[5U], 3U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U] 
                - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U], 2U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[6U] 
                + vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[6U], 2U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[3U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U], 1U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[7U], 1U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U], 2U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[8U], 2U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[4U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U], 3U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[9U], 3U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xaU], 4U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[5U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xbU], 4U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xcU], 5U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[6U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xdU], 6U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xeU], 7U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[7U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0xfU], 8U));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x10U], 9U));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[8U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    }
    if (((0x8000U & vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U])
          ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    }
    if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__ang[9U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    } else {
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_activation__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    }
    vlSelf->bsg_activation__DOT__negExp = (0x3fffU 
                                           & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x14U] 
                                              - vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U]));
    if (vlSelf->bsg_activation__DOT__divider__DOT__latch_signed_div_lo) {
        vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r = 1U;
    }
    if (vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo) {
        vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
            = vlSelf->bsg_activation__DOT__divider__DOT__opC_mux;
    }
    vlSelf->data_o = vlSelf->bsg_activation__DOT__data_r;
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state 
        = ((IData)(vlSelf->reset_i) ? 0U : (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state));
    vlSelf->val_o = (3U == vlSelf->bsg_activation__DOT__state_r);
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld = 0U;
    if (((((((((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__neg_ld = 1U;
            }
            vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo 
                = ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                   | ((2U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                      & ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                               | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))))));
        } else {
            vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo = 0U;
        }
    } else {
        vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo = 0U;
        if ((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            vlSelf->bsg_activation__DOT__divider__DOT__opB_ld_lo = 0U;
        }
    }
    vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_up_li 
        = ((4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
           & (0x18U > (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt)));
    vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe 
        = ((vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
            >> 0x14U) & (0U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)));
    bsg_activation__DOT__divider__DOT__opB_sel_lo = 1U;
    if (((((((((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__opB_sel_lo = 4U;
                bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
                bsg_activation__DOT__divider__DOT__opB_clr_lo = 0U;
            } else if ((2U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                if ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opB_sel_lo = 1U;
                    bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
                    bsg_activation__DOT__divider__DOT__opB_clr_lo = 0U;
                } else {
                    if ((4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        bsg_activation__DOT__divider__DOT__opB_sel_lo 
                            = ((0x18U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt))
                                ? 2U : 1U);
                    } else if ((5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        bsg_activation__DOT__divider__DOT__opB_sel_lo = 2U;
                    } else if ((6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        bsg_activation__DOT__divider__DOT__opB_sel_lo = 4U;
                    }
                    bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
                }
            } else {
                bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
            }
            bsg_activation__DOT__divider__DOT__opA_clr_lo = 1U;
            if ((1U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opA_clr_lo = 0U;
                } else if ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opA_clr_lo = 0U;
                } else if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        bsg_activation__DOT__divider__DOT__opA_clr_lo = 0U;
                    }
                }
            }
        } else {
            bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
            bsg_activation__DOT__divider__DOT__opA_clr_lo = 1U;
        }
    } else {
        bsg_activation__DOT__divider__DOT__opB_clr_lo = 1U;
        bsg_activation__DOT__divider__DOT__opA_clr_lo = 1U;
    }
    bsg_activation__DOT__divider__DOT__opA_inv_lo = 
        (1U & (~ (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    if (((((((((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__opA_inv_lo = 1U;
            } else if ((2U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                if ((3U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        if ((5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                            bsg_activation__DOT__divider__DOT__opA_inv_lo = 0U;
                        }
                    }
                }
            }
            bsg_activation__DOT__divider__DOT__opB_inv_lo = 0U;
            if ((1U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opB_inv_lo = 1U;
                } else if ((3U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        if ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                            bsg_activation__DOT__divider__DOT__opB_inv_lo 
                                = ((6U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                                   | (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r));
                        }
                    }
                }
            }
        } else {
            bsg_activation__DOT__divider__DOT__opB_inv_lo = 0U;
        }
    } else {
        bsg_activation__DOT__divider__DOT__opB_inv_lo = 0U;
    }
    bsg_activation__DOT__divider__DOT__adder1_cin_lo 
        = (1U & (~ (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    if (((((((((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__adder1_cin_lo = 1U;
            } else if ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__adder1_cin_lo = 1U;
            } else if ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__adder1_cin_lo = 0U;
            } else if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                bsg_activation__DOT__divider__DOT__adder1_cin_lo 
                    = ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                       & ((6U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                          | (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__r_neg_r)));
            }
        }
    }
    vlSelf->ready_o = ((0U == vlSelf->bsg_activation__DOT__state_r) 
                       & (~ (IData)(vlSelf->bsg_activation__DOT__sinhcosh__DOT__stall_pipe)));
    vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
        = (0x1ffffffU & ((((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                            ^ (- (IData)((IData)(bsg_activation__DOT__divider__DOT__opA_inv_lo)))) 
                           & (- (IData)((IData)(bsg_activation__DOT__divider__DOT__opA_clr_lo)))) 
                          + ((vlSelf->bsg_activation__DOT__divider__DOT__opB_reg__DOT__data_r 
                              ^ (- (IData)((IData)(bsg_activation__DOT__divider__DOT__opB_inv_lo)))) 
                             & (- (IData)((IData)(bsg_activation__DOT__divider__DOT__opB_clr_lo))))) 
                         + (IData)(bsg_activation__DOT__divider__DOT__adder1_cin_lo)));
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U] 
        = (((IData)((((QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)) 
                      << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out)))) 
            << 0x19U) | ((0x1fffffeU & (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                        << 1U)) | (1U 
                                                   & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                      >> 0x18U))));
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U] 
        = (((IData)((((QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)) 
                      << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out)))) 
            >> 7U) | ((IData)(((((QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out))) 
                               >> 0x20U)) << 0x19U));
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r)) 
                      << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out))) 
                    >> 0x20U)) >> 7U);
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
        = ((0xfe000000U & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]) 
           | (0x1ffffffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U] 
                            & (- (IData)((1U & (IData)(bsg_activation__DOT__divider__DOT__opB_sel_lo)))))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
        = ((0x1ffffffU & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]) 
           | (0xfe000000U & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opB_sel_lo) 
                                                  >> 1U)))) 
                                << 0x19U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
        = ((0xfffc0000U & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]) 
           | (0x3ffffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U] 
                          & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opB_sel_lo) 
                                               >> 1U)))) 
                             >> 7U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
        = ((0x3ffffU & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]) 
           | (0xfffc0000U & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opB_sel_lo) 
                                                  >> 2U)))) 
                                << 0x12U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
        = (0x7ffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U] 
                     & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opB_sel_lo) 
                                          >> 2U)))) 
                        >> 0xeU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffffeU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (1U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                     >> 0x12U) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                   >> 0x19U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffffdU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (2U & ((0x3ffeU & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x4000002U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                              << 1U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffffbU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (4U & ((0x3ffcU & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x8000004U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                              << 2U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffff7U & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (8U & ((0x3ff8U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x10000008U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                              << 3U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffffefU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x10U & ((0x3ff0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x20000010U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                                 << 4U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffffdfU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x20U & ((0x3fe0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x40000020U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                                 << 5U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffffbfU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x40U & ((0x3fc0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x80000040U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))) 
                                                 << 6U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffff7fU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x80U & ((0x3f80U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U])))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffeffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x100U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                          >> 8U) | (0U != (0x4000002U 
                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                        << 8U)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffdffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x200U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                          >> 9U) | (0U != (0x8000004U 
                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                        << 9U)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fffbffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x400U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                          >> 0xaU) | (0U != (0x10000008U 
                                             & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                        << 0xaU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fff7ffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x800U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                          >> 0xbU) | (0U != (0x20000010U 
                                             & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                        << 0xbU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffefffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x1000U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                           >> 0xcU) | (0U != (0x40000020U 
                                              & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                         << 0xcU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffdfffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x2000U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                           >> 0xdU) | (0U != (0x80000040U 
                                              & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))) 
                         << 0xdU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ffbfffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x4000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                          << 0xeU) | (0xffffc000U & 
                                      ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U])))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1ff7fffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x8000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                          << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                       << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1feffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x10000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fdffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x20000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1fbffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x40000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1f7ffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x80000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1efffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x100000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1dfffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x200000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x1bfffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x400000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0x17fffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x800000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opB_mux 
        = ((0xffffffU & vlSelf->bsg_activation__DOT__divider__DOT__opB_mux) 
           | (0x1000000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                             << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                          << 7U) | 
                                         vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))));
}

VL_INLINE_OPT void Vbsg_activation___024root___combo__TOP__0(Vbsg_activation___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root___combo__TOP__0\n"); );
    // Init
    IData/*23:0*/ bsg_activation__DOT__dividend_li;
    IData/*23:0*/ bsg_activation__DOT__divisor_li;
    CData/*0:0*/ bsg_activation__DOT__divider_v_i;
    CData/*1:0*/ bsg_activation__DOT__divider__DOT__opA_sel_lo;
    QData/*49:0*/ bsg_activation__DOT__divider__DOT____Vcellinp__muxA__data_i;
    CData/*2:0*/ bsg_activation__DOT__divider__DOT__opC_sel_lo;
    VlWide<3>/*74:0*/ bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i;
    // Body
    vlSelf->bsg_activation__DOT__ang_n = (0xffffU & 
                                          ((0x8000U 
                                            & (IData)(vlSelf->ang_i))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(vlSelf->ang_i)))
                                            : (IData)(vlSelf->ang_i)));
    if (vlSelf->tanh_sel_i) {
        bsg_activation__DOT__dividend_li = (0xfffc00U 
                                            & (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                                               << 0xaU));
        bsg_activation__DOT__divisor_li = (0x3fffU 
                                           & vlSelf->bsg_activation__DOT__sinhcosh__DOT__x[0x14U]);
    } else {
        bsg_activation__DOT__dividend_li = 0x100000U;
        bsg_activation__DOT__divisor_li = ((0x3c00U 
                                            & (((IData)(1U) 
                                                + ((IData)(vlSelf->bsg_activation__DOT__negExp) 
                                                   >> 0xaU)) 
                                               << 0xaU)) 
                                           | (0x3ffU 
                                              & (IData)(vlSelf->bsg_activation__DOT__negExp)));
    }
    vlSelf->bsg_activation__DOT__load_ang = 0U;
    if ((0U == vlSelf->bsg_activation__DOT__state_r)) {
        if (((IData)(vlSelf->val_i) & (IData)(vlSelf->ready_o))) {
            vlSelf->bsg_activation__DOT__load_ang = 1U;
        }
        vlSelf->bsg_activation__DOT__zero_bypass = 0U;
        if ((0x14U > (IData)(vlSelf->bsg_activation__DOT__ang_n))) {
            vlSelf->bsg_activation__DOT__zero_bypass = 1U;
        }
        vlSelf->bsg_activation__DOT__one_bypass = 0U;
        if (((IData)(vlSelf->bsg_activation__DOT__ang_n) 
             > ((IData)(vlSelf->tanh_sel_i) ? 0xf00U
                 : 0x1c00U))) {
            vlSelf->bsg_activation__DOT__one_bypass = 1U;
        }
    } else if ((1U != vlSelf->bsg_activation__DOT__state_r)) {
        vlSelf->bsg_activation__DOT__load_ang = 0U;
        vlSelf->bsg_activation__DOT__zero_bypass = 0U;
        vlSelf->bsg_activation__DOT__zero_bypass = 0U;
        vlSelf->bsg_activation__DOT__one_bypass = 0U;
        vlSelf->bsg_activation__DOT__one_bypass = 0U;
    } else {
        vlSelf->bsg_activation__DOT__zero_bypass = 0U;
        vlSelf->bsg_activation__DOT__one_bypass = 0U;
    }
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U] 
        = (((IData)((((QData)((IData)((1U & (bsg_activation__DOT__dividend_li 
                                             >> 0x17U)))) 
                      << 0x31U) | (((QData)((IData)(bsg_activation__DOT__dividend_li)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out))))) 
            << 0x19U) | ((0x1fffffeU & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      (vlSelf->bsg_activation__DOT__divider__DOT__add1_out 
                                                       >> 0x18U)))));
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U] 
        = (((IData)((((QData)((IData)((1U & (bsg_activation__DOT__dividend_li 
                                             >> 0x17U)))) 
                      << 0x31U) | (((QData)((IData)(bsg_activation__DOT__dividend_li)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out))))) 
            >> 7U) | ((IData)(((((QData)((IData)((1U 
                                                  & (bsg_activation__DOT__dividend_li 
                                                     >> 0x17U)))) 
                                 << 0x31U) | (((QData)((IData)(bsg_activation__DOT__dividend_li)) 
                                               << 0x19U) 
                                              | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out)))) 
                               >> 0x20U)) << 0x19U));
    bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U] 
        = ((IData)(((((QData)((IData)((1U & (bsg_activation__DOT__dividend_li 
                                             >> 0x17U)))) 
                      << 0x31U) | (((QData)((IData)(bsg_activation__DOT__dividend_li)) 
                                    << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out)))) 
                    >> 0x20U)) >> 7U);
    bsg_activation__DOT__divider__DOT____Vcellinp__muxA__data_i 
        = (((QData)((IData)((1U & (bsg_activation__DOT__divisor_li 
                                   >> 0x17U)))) << 0x31U) 
           | (((QData)((IData)(bsg_activation__DOT__divisor_li)) 
               << 0x19U) | (QData)((IData)(vlSelf->bsg_activation__DOT__divider__DOT__add1_out))));
    vlSelf->bsg_activation__DOT__data_n = ((IData)(vlSelf->bsg_activation__DOT__zero_bypass)
                                            ? 0U : 
                                           (((0U < 
                                              (vlSelf->bsg_activation__DOT__sinhcosh__DOT__y[0x14U] 
                                               >> 0xeU)) 
                                             & (IData)(vlSelf->tanh_sel_i))
                                             ? 0x400U
                                             : (((1U 
                                                  <= 
                                                  (0xfU 
                                                   & (vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                      >> 0xaU))) 
                                                 | (IData)(vlSelf->bsg_activation__DOT__one_bypass))
                                                 ? 0x400U
                                                 : 
                                                (0x7ffU 
                                                 & vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r))));
    bsg_activation__DOT__divider_v_i = (((2U == vlSelf->bsg_activation__DOT__state_r) 
                                         & (~ (IData)(vlSelf->bsg_activation__DOT__one_bypass))) 
                                        & (~ (IData)(vlSelf->bsg_activation__DOT__zero_bypass)));
    vlSelf->bsg_activation__DOT__state_n = vlSelf->bsg_activation__DOT__state_r;
    if ((0U == vlSelf->bsg_activation__DOT__state_r)) {
        if (((IData)(vlSelf->ready_o) & (IData)(vlSelf->val_i))) {
            vlSelf->bsg_activation__DOT__state_n = 
                (((IData)(vlSelf->bsg_activation__DOT__one_bypass) 
                  | (IData)(vlSelf->bsg_activation__DOT__zero_bypass))
                  ? 3U : 1U);
        }
    } else if ((1U == vlSelf->bsg_activation__DOT__state_r)) {
        if (((vlSelf->bsg_activation__DOT__sinhcosh__DOT__val 
              >> 0x14U) & (0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
            vlSelf->bsg_activation__DOT__state_n = 2U;
        }
    } else if ((2U == vlSelf->bsg_activation__DOT__state_r)) {
        if ((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            vlSelf->bsg_activation__DOT__state_n = 3U;
        }
    } else if ((3U == vlSelf->bsg_activation__DOT__state_r)) {
        if (vlSelf->ready_i) {
            vlSelf->bsg_activation__DOT__state_n = 0U;
        }
    } else {
        vlSelf->bsg_activation__DOT__state_n = 0U;
    }
    vlSelf->bsg_activation__DOT__divider__DOT__latch_signed_div_lo = 0U;
    if (((((((((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            if (bsg_activation__DOT__divider_v_i) {
                vlSelf->bsg_activation__DOT__divider__DOT__latch_signed_div_lo = 1U;
                vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 1U;
                vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 1U;
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 1U;
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 0U;
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 2U;
                bsg_activation__DOT__divider__DOT__opC_sel_lo = 1U;
                bsg_activation__DOT__divider__DOT__opC_sel_lo = 4U;
            } else {
                vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 0U;
                bsg_activation__DOT__divider__DOT__opC_sel_lo = 1U;
            }
        } else {
            vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo 
                = ((1U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                   & ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                      | ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)) 
                               & (6U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state)))))));
            vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
            if ((1U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo 
                    = ((vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r 
                        >> 0x18U) & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r));
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state 
                    = (((vlSelf->bsg_activation__DOT__divider__DOT__opC_reg__DOT__data_r 
                         >> 0x18U) & (IData)(vlSelf->bsg_activation__DOT__divider__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U);
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 0U;
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 1U;
            } else {
                if ((2U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                                    vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
                vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state 
                    = ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))
                        ? 3U : ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))
                                 ? 4U : ((4U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))
                                          ? ((0x18U 
                                              == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__calc_cnt))
                                              ? ((0x1000000U 
                                                  & vlSelf->bsg_activation__DOT__divider__DOT__add1_out)
                                                  ? 5U
                                                  : 6U)
                                              : 4U)
                                          : ((5U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))
                                              ? 6U : 
                                             ((6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))
                                               ? ((1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != vlSelf->bsg_activation__DOT__divider__DOT__opA_reg__DOT__data_r))) 
                                                      | (~ (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__q_neg_r))))
                                                   ? 8U
                                                   : 7U)
                                               : 8U)))));
                bsg_activation__DOT__divider__DOT__opA_sel_lo = 0U;
                if ((2U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                                    bsg_activation__DOT__divider__DOT__opA_sel_lo = 1U;
                                }
                            }
                        }
                    }
                }
            }
            bsg_activation__DOT__divider__DOT__opC_sel_lo = 1U;
            if ((1U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opC_sel_lo = 2U;
                } else if ((3U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    bsg_activation__DOT__divider__DOT__opC_sel_lo = 1U;
                } else if ((4U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                    if ((5U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                        if ((6U != (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
                            bsg_activation__DOT__divider__DOT__opC_sel_lo = 2U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 0U;
        if ((8U == (IData)(vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__state))) {
            vlSelf->bsg_activation__DOT__divider__DOT__opC_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state 
                = ((IData)(vlSelf->ready_i) ? 0U : 8U);
        } else {
            vlSelf->bsg_activation__DOT__divider__DOT__opA_ld_lo = 0U;
            vlSelf->bsg_activation__DOT__divider__DOT__control__DOT__next_state = 0U;
        }
        bsg_activation__DOT__divider__DOT__opA_sel_lo = 0U;
        bsg_activation__DOT__divider__DOT__opC_sel_lo = 1U;
    }
    vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked 
        = ((0x3fffffe000000ULL & vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked) 
           | (IData)((IData)((0x1ffffffU & ((IData)(bsg_activation__DOT__divider__DOT____Vcellinp__muxA__data_i) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(bsg_activation__DOT__divider__DOT__opA_sel_lo)))))))));
    vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked 
        = ((0x1ffffffULL & vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked) 
           | ((QData)((IData)((0x1ffffffU & ((IData)(
                                                     (bsg_activation__DOT__divider__DOT____Vcellinp__muxA__data_i 
                                                      >> 0x19U)) 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(bsg_activation__DOT__divider__DOT__opA_sel_lo) 
                                                              >> 1U)))))))) 
              << 0x19U));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
        = ((0xfe000000U & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]) 
           | (0x1ffffffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U] 
                            & (- (IData)((1U & (IData)(bsg_activation__DOT__divider__DOT__opC_sel_lo)))))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
        = ((0x1ffffffU & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]) 
           | (0xfe000000U & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opC_sel_lo) 
                                                  >> 1U)))) 
                                << 0x19U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
        = ((0xfffc0000U & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]) 
           | (0x3ffffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U] 
                          & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opC_sel_lo) 
                                               >> 1U)))) 
                             >> 7U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
        = ((0x3ffffU & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]) 
           | (0xfffc0000U & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opC_sel_lo) 
                                                  >> 2U)))) 
                                << 0x12U))));
    vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
        = (0x7ffU & (bsg_activation__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U] 
                     & ((- (IData)((1U & ((IData)(bsg_activation__DOT__divider__DOT__opC_sel_lo) 
                                          >> 2U)))) 
                        >> 0xeU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opA_mux 
        = (0x1ffffffU & ((IData)((vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked 
                                  >> 0x19U)) | (IData)(vlSelf->bsg_activation__DOT__divider__DOT__muxA__DOT__data_masked)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffffeU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (1U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                     >> 0x12U) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                   >> 0x19U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffffdU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (2U & ((0x3ffeU & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x4000002U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                              << 1U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffffbU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (4U & ((0x3ffcU & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x8000004U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                              << 2U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffff7U & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (8U & ((0x3ff8U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                >> 0x12U)) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x10000008U 
                                                        & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                              << 3U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffffefU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x10U & ((0x3ff0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x20000010U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                                 << 4U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffffdfU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x20U & ((0x3fe0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x40000020U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                                 << 5U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffffbfU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x40U & ((0x3fc0U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((IData)(
                                                         (0U 
                                                          != 
                                                          (0x80000040U 
                                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))) 
                                                 << 6U))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffff7fU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x80U & ((0x3f80U & (vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                   >> 0x12U)) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U])))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffeffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x100U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                          >> 8U) | (0U != (0x4000002U 
                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                        << 8U)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffdffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x200U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                          >> 9U) | (0U != (0x8000004U 
                                           & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                        << 9U)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fffbffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x400U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                          >> 0xaU) | (0U != (0x10000008U 
                                             & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                        << 0xaU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fff7ffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x800U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                          >> 0xbU) | (0U != (0x20000010U 
                                             & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                        << 0xbU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffefffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x1000U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                           >> 0xcU) | (0U != (0x40000020U 
                                              & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                         << 0xcU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffdfffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x2000U & (((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                           >> 0xdU) | (0U != (0x80000040U 
                                              & vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))) 
                         << 0xdU)));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ffbfffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x4000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                          << 0xeU) | (0xffffc000U & 
                                      ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U])))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1ff7fffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x8000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                          << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                       << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1feffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x10000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fdffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x20000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1fbffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x40000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1f7ffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x80000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                           << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                        << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1efffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x100000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1dfffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x200000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x1bfffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x400000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0x17fffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x800000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                            << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                         << 7U) | vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
    vlSelf->bsg_activation__DOT__divider__DOT__opC_mux 
        = ((0xffffffU & vlSelf->bsg_activation__DOT__divider__DOT__opC_mux) 
           | (0x1000000U & ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                             << 0xeU) | ((vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                          << 7U) | 
                                         vlSelf->bsg_activation__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))));
}

void Vbsg_activation___024root___eval(Vbsg_activation___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vbsg_activation___024root___sequent__TOP__0(vlSelf);
    }
    Vbsg_activation___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vbsg_activation___024root___eval_debug_assertions(Vbsg_activation___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_activation__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_activation___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
    if (VL_UNLIKELY((vlSelf->val_i & 0xfeU))) {
        Verilated::overWidthError("val_i");}
    if (VL_UNLIKELY((vlSelf->reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((vlSelf->tanh_sel_i & 0xfeU))) {
        Verilated::overWidthError("tanh_sel_i");}
}
#endif  // VL_DEBUG
