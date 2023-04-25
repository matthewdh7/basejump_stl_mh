// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_tanh.h for the primary calling header

#include "verilated.h"

#include "Vbsg_tanh___024root.h"

VL_INLINE_OPT void Vbsg_tanh___024root___ico_sequent__TOP__0(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ bsg_tanh__DOT__tan_val_i;
    // Body
    vlSelf->bsg_tanh__DOT__state_n = vlSelf->bsg_tanh__DOT__state_r;
    if ((2U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
            if (vlSelf->ready_i) {
                vlSelf->bsg_tanh__DOT__state_n = 0U;
            }
        } else if (((0x3e000U < vlSelf->ang_i) | (8U 
                                                  == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
            vlSelf->bsg_tanh__DOT__state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
        if ((0x3e000U < vlSelf->ang_i)) {
            vlSelf->bsg_tanh__DOT__state_n = 3U;
        } else if (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                     >> 0x14U) & (0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
            vlSelf->bsg_tanh__DOT__state_n = 2U;
        }
    } else if (((IData)(vlSelf->ready_o) & (IData)(vlSelf->val_i))) {
        vlSelf->bsg_tanh__DOT__state_n = ((0x3e000U 
                                           < vlSelf->ang_i)
                                           ? 3U : 1U);
    }
    bsg_tanh__DOT__tan_val_i = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                 >> 0x14U) & ((0x3e000U 
                                               >= vlSelf->ang_i) 
                                              & (1U 
                                                 == (IData)(vlSelf->bsg_tanh__DOT__state_r))));
    vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if (bsg_tanh__DOT__tan_val_i) {
                vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 2U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 4U;
                vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 1U;
            }
        } else {
            vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo 
                = ((1U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                   & ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                      | ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                               & (6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))))));
            if ((1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo 
                    = ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
                vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                    = (((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                 >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U);
            } else {
                if ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                if ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                    vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
                                    vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                    = ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                        ? 3U : ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                 ? 4U : ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                          ? ((0x30U 
                                              == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                             >> 0x30U)))
                                                  ? 5U
                                                  : 6U)
                                              : 4U)
                                          : ((5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                              ? 6U : 
                                             ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                               ? ((1U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))) 
                                                      | (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r))))
                                                   ? 8U
                                                   : 7U)
                                               : 8U)))));
            }
            if ((1U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                } else if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
                } else if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                        }
                    }
                }
            }
        }
    } else if ((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
        vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
            = ((IData)(vlSelf->ready_i) ? 0U : 8U);
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
        = (((0x1fffffffffffeULL & (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                            >> 0x30U))))))) 
           & (- (QData)((IData)((1U & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo))))));
}

void Vbsg_tanh___024root___eval_ico(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vbsg_tanh___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vbsg_tanh___024root___eval_act(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vbsg_tanh___024root___nba_sequent__TOP__0(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ bsg_tanh__DOT__tan_val_i;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_inv_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_inv_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_clr_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_clr_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__adder1_cin_lo;
    CData/*5:0*/ __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt;
    VlWide<3>/*95:0*/ __Vtemp_hf481dec6__0;
    VlWide<5>/*159:0*/ __Vtemp_h0555b744__0;
    VlWide<7>/*223:0*/ __Vtemp_h97cea5df__0;
    VlWide<9>/*287:0*/ __Vtemp_hf1d142d0__0;
    VlWide<11>/*351:0*/ __Vtemp_hf23fea6b__0;
    VlWide<13>/*415:0*/ __Vtemp_ha0c0fb12__0;
    // Body
    __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt 
        = vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt;
    vlSelf->bsg_tanh__DOT__tanh_r = (((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                      | (0x3e000U < vlSelf->ang_i))
                                      ? ((1U & ((IData)(
                                                        (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                         >> 0x10U)) 
                                                | (0x3e000U 
                                                   < vlSelf->ang_i)))
                                          ? 0x10000U
                                          : (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r))
                                      : vlSelf->bsg_tanh__DOT__tanh_r);
    if (vlSelf->reset_i) {
        __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt = 0U;
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state = 0U;
    } else {
        if (vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_done) {
            __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt 
                = vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li;
        } else if (vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li) {
            __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt)));
        }
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state 
            = vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state;
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r 
        = (1U & (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                         >> 0x30U)));
    vlSelf->bsg_tanh__DOT__state_r = vlSelf->bsg_tanh__DOT__state_n;
    if (vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
            = ((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                & (- (QData)((IData)((1U & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                            >> 2U)))))) 
               | ((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                   & (- (QData)((IData)((1U & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                               >> 1U)))))) 
                  | (((0x1fffffffffffeULL & (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                             << 1U)) 
                      | (QData)((IData)((1U & (IData)(
                                                      (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                       >> 0x30U)))))) 
                     & (- (QData)((IData)((1U & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo))))))));
    }
    if (vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld) {
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r 
            = ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                        >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r 
            = (((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                         >> 0x30U)) ^ (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                               >> 0x30U))) 
               & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt 
        = __Vdly__bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt;
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_done 
        = (0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt));
    vlSelf->tanh_o = vlSelf->bsg_tanh__DOT__tanh_r;
    vlSelf->val_o = (3U == (IData)(vlSelf->bsg_tanh__DOT__state_r));
    if ((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
            = ((0xffe00000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U]) 
               | vlSelf->ang_i);
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
            = ((0x1fffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U]) 
               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
                  << 0x15U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
            = ((0xfffffc00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U]) 
               | (0x3ffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
                            >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
            = ((0x800003ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U]) 
               | (0x7ffffc00U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
                                  << 0x15U) | (0x1ffc00U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
            = ((0x7fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U]) 
               | (0x80000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
            = ((0xfff00000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U]) 
               | (0xfffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
                              >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
            = ((0xfffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U]) 
               | (0xfff00000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
                                  << 0x15U) | (0x100000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
            = ((0xfffffe00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U]) 
               | (0x1ffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
                            >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
            = ((0xc00001ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U]) 
               | (0x3ffffe00U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
                                  << 0x15U) | (0x1ffe00U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
            = ((0x3fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U]) 
               | (0xc0000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
            = ((0xfff80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U]) 
               | (0x7ffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
                              >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
            = ((0x7ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U]) 
               | (0xfff80000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
                                  << 0x15U) | (0x180000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
            = ((0xffffff00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U]) 
               | (0xffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
                           >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
            = ((0xe00000ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U]) 
               | (0x1fffff00U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
                                  << 0x15U) | (0x1fff00U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
            = ((0x1fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U]) 
               | (0xe0000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
            = ((0xfffc0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U]) 
               | (0x3ffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
                              >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
            = ((0x3ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U]) 
               | (0xfffc0000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
                                  << 0x15U) | (0x1c0000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
            = ((0xffffff80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U]) 
               | (0x7fU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
                           >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
            = ((0xf000007fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U]) 
               | (0xfffff80U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
                                 << 0x15U) | (0x1fff80U 
                                              & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
                                                 >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
            = ((0xfffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U]) 
               | (0xf0000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
            = ((0xfffe0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U]) 
               | (0x1ffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
                              >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
            = ((0x1ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U]) 
               | (0xfffe0000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
                                  << 0x15U) | (0x1e0000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
            = ((0xffffffc0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U]) 
               | (0x3fU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
                           >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
            = ((0xf800003fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U]) 
               | (0x7ffffc0U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
                                 << 0x15U) | (0x1fffc0U 
                                              & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
                                                 >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
            = ((0x7ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U]) 
               | (0xf8000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
            = ((0xffff0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU]) 
               | (0xffffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
                             >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
            = ((0xffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU]) 
               | (0xffff0000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
                                  << 0x15U) | (0x1f0000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
            = ((0xffffffe0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU]) 
               | (0x1fU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
                           >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
            = ((0xfc00001fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU]) 
               | (0x3ffffe0U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
                                 << 0x15U) | (0x1fffe0U 
                                              & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
                                                 >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
            = ((0x3ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU]) 
               | (0xfc000000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
                                 << 0x15U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
            = ((0xffff8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU]) 
               | (0x7fffU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
                             >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
            = ((0x7fffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU]) 
               | (0xffff8000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
                                  << 0x15U) | (0x1f8000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
            = ((0x1fffff0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU]) 
               | (0xfU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
                          >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
            = ((0x7fffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU]) 
               | (0xffff8000U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
                                  << 0x15U) | (0x1f8000U 
                                               & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
                                                  >> 0xbU)))));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
            = ((0x1fffff0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU]) 
               | (0xfU & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
                          >> 0xbU)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
            = ((0xfU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU]) 
               | (0x1fffff0U & ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xdU] 
                                 << 0x15U) | (0x1ffff0U 
                                              & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
                                                 >> 0xbU)))));
    }
    __Vtemp_hf481dec6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fffffU 
                                                          & ((0x40000000U 
                                                              & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                              ? 
                                                             ((IData)(0x26c0eU) 
                                                              + 
                                                              ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                << 0x16U) 
                                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                  >> 0xaU)))
                                                              : 
                                                             (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                << 0x16U) 
                                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                  >> 0xaU)) 
                                                              - (IData)(0x26c0eU)))))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (0x1fffffU 
                                                             & ((0x200U 
                                                                 & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                                 ? 
                                                                ((IData)(0x2c548U) 
                                                                 + 
                                                                 ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                     >> 0x15U)))
                                                                 : 
                                                                (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                     >> 0x15U)) 
                                                                 - (IData)(0x2c548U)))))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             (0x1fffffU 
                                                              & ((0x100000U 
                                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                                  ? 
                                                                 ((IData)(0x31e41U) 
                                                                  + 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                                  : 
                                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                  - (IData)(0x31e41U)))))))));
    __Vtemp_hf481dec6__0[1U] = ((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                   ? ((IData)(0x21252U) 
                                      + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                          << 1U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                          >> 0x1fU)))
                                   : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                        << 1U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  >> 0x1fU)) 
                                      - (IData)(0x21252U))) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fffffU 
                                                                         & ((0x40000000U 
                                                                             & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                                             ? 
                                                                            ((IData)(0x26c0eU) 
                                                                             + 
                                                                             ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                               << 0x16U) 
                                                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                                >> 0xaU)))
                                                                             : 
                                                                            (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                               << 0x16U) 
                                                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                                >> 0xaU)) 
                                                                             - (IData)(0x26c0eU)))))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (0x1fffffU 
                                                                            & ((0x200U 
                                                                                & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                                                                ? 
                                                                               ((IData)(0x2c548U) 
                                                                                + 
                                                                                ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                                >> 0x15U)))
                                                                                : 
                                                                               (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                                >> 0x15U)) 
                                                                                - (IData)(0x2c548U)))))) 
                                                           << 0x15U) 
                                                          | (QData)((IData)(
                                                                            (0x1fffffU 
                                                                             & ((0x100000U 
                                                                                & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                                                 ? 
                                                                                ((IData)(0x31e41U) 
                                                                                + 
                                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                                                                                 : 
                                                                                (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                                                                - (IData)(0x31e41U)))))))) 
                                                      >> 0x20U)));
    __Vtemp_h0555b744__0[3U] = ((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                   ? ((IData)(0xf913U) 
                                      + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          << 2U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                          >> 0x1eU)))
                                   : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                        << 2U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  >> 0x1eU)) 
                                      - (IData)(0xf913U))) 
                                 << 0x1eU) | ((0x3ffffe00U 
                                               & (((0x20000000U 
                                                    & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                    ? 
                                                   ((IData)(0x15aa1U) 
                                                    + 
                                                    ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                        >> 9U)))
                                                    : 
                                                   (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                        >> 9U)) 
                                                    - (IData)(0x15aa1U))) 
                                                  << 9U)) 
                                              | (0x1ffU 
                                                 & (((0x100U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                                      ? 
                                                     ((IData)(0x1b78cU) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                        << 0xcU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                          >> 0x14U)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                        << 0xcU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                          >> 0x14U)) 
                                                      - (IData)(0x1b78cU))) 
                                                    >> 0xcU))));
    __Vtemp_h97cea5df__0[5U] = ((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                   ? ((IData)(0x202bU) 
                                      + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          << 3U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                          >> 0x1dU)))
                                   : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                        << 3U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  >> 0x1dU)) 
                                      - (IData)(0x202bU))) 
                                 << 0x1dU) | ((0x1fffff00U 
                                               & (((0x10000000U 
                                                    & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                    ? 
                                                   ((IData)(0x4162U) 
                                                    + 
                                                    ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                        >> 8U)))
                                                    : 
                                                   (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                        >> 8U)) 
                                                    - (IData)(0x4162U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (((0x80U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                                      ? 
                                                     ((IData)(0x8c9fU) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                        << 0xdU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                          >> 0x13U)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                        << 0xdU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                          >> 0x13U)) 
                                                      - (IData)(0x8c9fU))) 
                                                    >> 0xdU))));
    __Vtemp_hf1d142d0__0[7U] = ((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                   ? ((IData)(0x800U) 
                                      + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          << 4U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                          >> 0x1cU)))
                                   : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                        << 4U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                  >> 0x1cU)) 
                                      - (IData)(0x800U))) 
                                 << 0x1cU) | ((0xfffff80U 
                                               & (((0x8000000U 
                                                    & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                    ? 
                                                   ((IData)(0x1005U) 
                                                    + 
                                                    ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                      << 0x19U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                        >> 7U)))
                                                    : 
                                                   (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                      << 0x19U) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                        >> 7U)) 
                                                    - (IData)(0x1005U))) 
                                                  << 7U)) 
                                              | (0x7fU 
                                                 & (((0x40U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                                                      ? 
                                                     ((IData)(0x1005U) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                        << 0xeU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                          >> 0x12U)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                        << 0xeU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                          >> 0x12U)) 
                                                      - (IData)(0x1005U))) 
                                                    >> 0xeU))));
    __Vtemp_hf23fea6b__0[9U] = ((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                   ? ((IData)(0x100U) 
                                      + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                          << 5U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          >> 0x1bU)))
                                   : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                        << 5U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                  >> 0x1bU)) 
                                      - (IData)(0x100U))) 
                                 << 0x1bU) | ((0x7ffffc0U 
                                               & (((0x4000000U 
                                                    & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                    ? 
                                                   ((IData)(0x200U) 
                                                    + 
                                                    ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                        >> 6U)))
                                                    : 
                                                   (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                        >> 6U)) 
                                                    - (IData)(0x200U))) 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (((0x20U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                                                      ? 
                                                     ((IData)(0x400U) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                        << 0xfU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                          >> 0x11U)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                        << 0xfU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                          >> 0x11U)) 
                                                      - (IData)(0x400U))) 
                                                    >> 0xfU))));
    __Vtemp_ha0c0fb12__0[0xbU] = ((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                     ? ((IData)(0x20U) 
                                        + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                            << 6U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                              >> 0x1aU)))
                                     : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                          << 6U) | 
                                         (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                                        - (IData)(0x20U))) 
                                   << 0x1aU) | ((0x3ffffe0U 
                                                 & (((0x2000000U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                      ? 
                                                     ((IData)(0x40U) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                          >> 5U)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                          >> 5U)) 
                                                      - (IData)(0x40U))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((0x10U 
                                                        & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                        ? 
                                                       ((IData)(0x80U) 
                                                        + 
                                                        ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                          << 0x10U) 
                                                         | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                            >> 0x10U)))
                                                        : 
                                                       (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                          << 0x10U) 
                                                         | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                            >> 0x10U)) 
                                                        - (IData)(0x80U))) 
                                                      >> 0x10U))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
        = __Vtemp_hf481dec6__0[0U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = __Vtemp_hf481dec6__0[1U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
              ? ((IData)(0x1b78cU) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                       << 0xcU) | (
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                                   >> 0x14U)))
              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                   << 0xcU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                               >> 0x14U)) - (IData)(0x1b78cU))) 
            << 0x14U) | (0xfffffU & (((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                                       ? ((IData)(0x21252U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                              << 1U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                >> 0x1fU)))
                                       : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                            << 1U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                              >> 0x1fU)) 
                                          - (IData)(0x21252U))) 
                                     >> 1U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = __Vtemp_h0555b744__0[3U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
              ? ((IData)(0x8c9fU) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                      << 0xdU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                  >> 0x13U)))
              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                   << 0xdU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                               >> 0x13U)) - (IData)(0x8c9fU))) 
            << 0x13U) | (0x7ffffU & (((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                                       ? ((IData)(0xf913U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                              << 2U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                >> 0x1eU)))
                                       : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                            << 2U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                              >> 0x1eU)) 
                                          - (IData)(0xf913U))) 
                                     >> 2U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = __Vtemp_h97cea5df__0[5U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
              ? ((IData)(0x1005U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                      << 0xeU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                  >> 0x12U)))
              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                   << 0xeU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                               >> 0x12U)) - (IData)(0x1005U))) 
            << 0x12U) | (0x3ffffU & (((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                                       ? ((IData)(0x202bU) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                              << 3U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                >> 0x1dU)))
                                       : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                            << 3U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                              >> 0x1dU)) 
                                          - (IData)(0x202bU))) 
                                     >> 3U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = __Vtemp_hf1d142d0__0[7U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
        = ((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
              ? ((IData)(0x400U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                     << 0xfU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                 >> 0x11U)))
              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                   << 0xfU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                               >> 0x11U)) - (IData)(0x400U))) 
            << 0x11U) | (0x1ffffU & (((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                                       ? ((IData)(0x800U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                              << 4U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                >> 0x1cU)))
                                       : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                            << 4U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                              >> 0x1cU)) 
                                          - (IData)(0x800U))) 
                                     >> 4U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = __Vtemp_hf23fea6b__0[9U];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
        = ((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
              ? ((IData)(0x80U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                    << 0x10U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                 >> 0x10U)))
              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                   << 0x10U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                >> 0x10U)) - (IData)(0x80U))) 
            << 0x10U) | (0xffffU & (((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                                      ? ((IData)(0x100U) 
                                         + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                             << 5U) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                               >> 0x1bU)))
                                      : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                           << 5U) | 
                                          (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                           >> 0x1bU)) 
                                         - (IData)(0x100U))) 
                                    >> 5U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = __Vtemp_ha0c0fb12__0[0xbU];
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0x7fffU & (((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                           ? ((IData)(0x20U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                           : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                << 6U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x20U))) >> 6U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | ((IData)((((QData)((IData)((0x1fffffU 
                                         & ((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
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
                                                - (IData)(0x10U)))))) 
                        << 0x15U) | (QData)((IData)(
                                                    (0x1fffffU 
                                                     & ((0x4000U 
                                                         & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                         ? 
                                                        ((IData)(0x10U) 
                                                         + 
                                                         ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                           << 6U) 
                                                          | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                             >> 0x1aU)))
                                                         : 
                                                        (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                           << 6U) 
                                                          | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                             >> 0x1aU)) 
                                                         - (IData)(0x10U)))))))) 
              << 0x1aU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = (((IData)((((QData)((IData)((0x1fffffU & 
                                       ((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                         ? ((IData)(0x10U) 
                                            + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                << 0x11U) 
                                               | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  >> 0xfU)))
                                         : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                              << 0x11U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                >> 0xfU)) 
                                            - (IData)(0x10U)))))) 
                      << 0x15U) | (QData)((IData)((0x1fffffU 
                                                   & ((0x4000U 
                                                       & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                       ? 
                                                      ((IData)(0x10U) 
                                                       + 
                                                       ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                         << 6U) 
                                                        | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                           >> 0x1aU)))
                                                       : 
                                                      (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                         << 6U) 
                                                        | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                           >> 0x1aU)) 
                                                       - (IData)(0x10U)))))))) 
            >> 6U) | ((IData)(((((QData)((IData)((0x1fffffU 
                                                  & ((8U 
                                                      & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                                      ? 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                        << 0x11U) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                          >> 0xfU)))
                                                      : 
                                                     (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                        << 0x11U) 
                                                       | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                          >> 0xfU)) 
                                                      - (IData)(0x10U)))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (0x1fffffU 
                                                              & ((0x4000U 
                                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                                  ? 
                                                                 ((IData)(0x10U) 
                                                                  + 
                                                                  ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                                    << 6U) 
                                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                                      >> 0x1aU)))
                                                                  : 
                                                                 (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                                    << 6U) 
                                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                                      >> 0x1aU)) 
                                                                  - (IData)(0x10U))))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xdU] 
        = (0xfU & ((IData)(((((QData)((IData)((0x1fffffU 
                                               & ((8U 
                                                   & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)))
                                                   : 
                                                  (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x10U)))))) 
                              << 0x15U) | (QData)((IData)(
                                                          (0x1fffffU 
                                                           & ((0x4000U 
                                                               & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                               ? 
                                                              ((IData)(0x10U) 
                                                               + 
                                                               ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                                 << 6U) 
                                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                                   >> 0x1aU)))
                                                               : 
                                                              (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                                 << 6U) 
                                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                                   >> 0x1aU)) 
                                                               - (IData)(0x10U))))))) 
                            >> 0x20U)) >> 6U));
    if ((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffffeU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | ((0x3e000U >= vlSelf->ang_i) & (IData)(vlSelf->val_i)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffffdU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (2U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                      << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffffbU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (4U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                      << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffff7U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (8U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                      << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fffefU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x10U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                         << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fffdfU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x20U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                         << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fffbfU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x40U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                         << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fff7fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x80U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                         << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffeffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x100U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                          << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffdffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x200U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                          << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ffbffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x400U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                          << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1ff7ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x800U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                          << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fefffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x1000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fdfffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x2000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1fbfffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x4000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1f7fffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x8000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1effffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x10000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1dffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x20000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x1bffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x40000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x17ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x80000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0x17ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x80000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = 
            ((0xfffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val) 
             | (0x100000U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans 
                             << 1U)));
    }
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x7ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0x3ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0xc0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    bsg_tanh__DOT__tan_val_i = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                 >> 0x14U) & ((0x3e000U 
                                               >= vlSelf->ang_i) 
                                              & (1U 
                                                 == (IData)(vlSelf->bsg_tanh__DOT__state_r))));
    if (vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo) {
        vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r = 1U;
    }
    if (vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
            = (((((QData)((IData)((1U & (IData)((1ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                    >> 0x1fU)))))) 
                  << 0x30U) | (0xffffffffffffULL & 
                               ((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                << 0x10U))) & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                     >> 2U)))))) 
               | ((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                   & (- (QData)((IData)((1U & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                               >> 1U)))))) 
                  | vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0));
    }
    if (vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
            = (((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                & (- (QData)((IData)((1U & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                            >> 1U)))))) 
               | (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                  & (- (QData)((IData)((1U & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo)))))));
    }
    if ((1U & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)))) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] = 0U;
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] = 0x57ce0293U;
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U];
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U] 
            = vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U];
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li 
        = ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
           & (0x30U > (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt)));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opA_clr_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opB_clr_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opA_inv_lo = (1U & 
                                               (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    bsg_tanh__DOT__divider__DOT__opB_inv_lo = 0U;
    bsg_tanh__DOT__divider__DOT__adder1_cin_lo = (1U 
                                                  & (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
    if (((((((((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if ((1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
                bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
                bsg_tanh__DOT__divider__DOT__opA_inv_lo = 1U;
                bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 1U;
            } else {
                if ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
                        bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
                    } else if ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo 
                            = ((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                ? 2U : 1U);
                    } else if ((5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 2U;
                    } else if ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        vlSelf->bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
                    }
                    if ((3U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                bsg_tanh__DOT__divider__DOT__opA_inv_lo = 0U;
                            }
                        }
                    }
                }
                if ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 1U;
                } else if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 0U;
                } else if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    bsg_tanh__DOT__divider__DOT__adder1_cin_lo 
                        = ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                           & ((6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                              | (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r)));
                }
            }
            vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo 
                = ((1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                   | ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                      & ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                               | (6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))))));
            if ((1U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                    bsg_tanh__DOT__divider__DOT__opB_inv_lo = 1U;
                } else {
                    if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                    } else if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            bsg_tanh__DOT__divider__DOT__opA_clr_lo = 0U;
                        }
                    }
                    if ((3U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                bsg_tanh__DOT__divider__DOT__opB_inv_lo 
                                    = ((6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                       | (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r));
                            }
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if (bsg_tanh__DOT__tan_val_i) {
                vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 2U;
                vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 4U;
            }
        } else {
            vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo 
                = ((1U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                   & ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                      | ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                         | ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                            | ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                               & (6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))))));
            if ((1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
            } else if ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((3U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlSelf->bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                } else if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
                } else if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                        }
                    }
                }
            }
        }
    } else if ((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
        vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__add1_out = 
        (0x1ffffffffffffULL & (((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                 ^ (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                & (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opA_clr_lo)))) 
                               + (((vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                    ^ (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                   & (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opB_clr_lo)))) 
                                  + (QData)((IData)(bsg_tanh__DOT__divider__DOT__adder1_cin_lo)))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe 
        = (IData)(((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                    >> 0x14U) & (~ ((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                    & (0U == (IData)(vlSelf->bsg_tanh__DOT__state_r))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_ha3a8a75d__0 
        = (((0x1fffffffffffeULL & (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                            >> 0x30U))))))) 
           & (- (QData)((IData)((1U & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_sel_lo))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            if (bsg_tanh__DOT__tan_val_i) {
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
            vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo 
                = ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                            >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
            vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                = (((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                             >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r))
                    ? 2U : 3U);
        } else {
            if ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                if ((3U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            if ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
                = ((2U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                    ? 3U : ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                             ? 4U : ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                      ? ((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                          ? ((1U & (IData)(
                                                           (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                            >> 0x30U)))
                                              ? 5U : 6U)
                                          : 4U) : (
                                                   (5U 
                                                    == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                    ? 6U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r))) 
                                                         | (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r))))
                                                      ? 8U
                                                      : 7U)
                                                     : 8U)))));
        }
    } else if ((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
        vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state 
            = ((IData)(vlSelf->ready_i) ? 0U : 8U);
    }
    vlSelf->ready_o = ((~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)) 
                       & (0U == (IData)(vlSelf->bsg_tanh__DOT__state_r)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                      ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                      : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                  ? 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                                  : 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))
                                       : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU))))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                   ? 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU))
                                                   : 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU)))))) 
                   >> 0x20U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                      ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                      : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                  ? 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                                  : 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                                       ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))
                                       : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU))))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                                   ? 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU))
                                                   : 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU)))))) 
                   >> 0x20U));
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]);
    bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]);
    vlSelf->bsg_tanh__DOT__state_n = vlSelf->bsg_tanh__DOT__state_r;
    if ((2U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
            if (vlSelf->ready_i) {
                vlSelf->bsg_tanh__DOT__state_n = 0U;
            }
        } else if (((0x3e000U < vlSelf->ang_i) | (8U 
                                                  == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
            vlSelf->bsg_tanh__DOT__state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->bsg_tanh__DOT__state_r))) {
        if ((0x3e000U < vlSelf->ang_i)) {
            vlSelf->bsg_tanh__DOT__state_n = 3U;
        } else if (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                     >> 0x14U) & (0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)))) {
            vlSelf->bsg_tanh__DOT__state_n = 2U;
        }
    } else if (((IData)(vlSelf->ready_o) & (IData)(vlSelf->val_i))) {
        vlSelf->bsg_tanh__DOT__state_n = ((0x3e000U 
                                           < vlSelf->ang_i)
                                           ? 3U : 1U);
    }
    if ((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
    }
    if ((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
    }
    if ((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
    }
    if ((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
    }
    if ((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
    }
    if ((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
    }
    if ((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = (bsg_tanh__DOT__sinhcosh__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
    }
    if ((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
    }
    if ((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
    }
    if ((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
    }
    if ((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
    }
    if ((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
    }
    if ((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
    }
    if ((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
    }
    if ((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
    }
    if ((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
    }
    if ((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
    }
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U] 
        = (IData)((((QData)((IData)(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                      ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                      : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))))) 
                    << 0x20U) | (QData)((IData)(((0x2000000U 
                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                  ? 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                                  : 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
        = (IData)(((((QData)((IData)(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))
                                       : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU))))) 
                     << 0x20U) | (QData)((IData)(((0x2000000U 
                                                   & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                   ? 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU))
                                                   : 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU)))))) 
                   >> 0x20U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U] 
        = (IData)((((QData)((IData)(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                      ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                      : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))))) 
                    << 0x20U) | (QData)((IData)(((0x2000000U 
                                                  & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                  ? 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                                  : 
                                                 (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
        = (IData)(((((QData)((IData)(((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                                       ? (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))
                                       : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU))))) 
                     << 0x20U) | (QData)((IData)(((0x2000000U 
                                                   & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                                                   ? 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU))
                                                   : 
                                                  (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU)))))) 
                   >> 0x20U));
}

void Vbsg_tanh___024root___eval_nba(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vbsg_tanh___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vbsg_tanh___024root___eval_triggers__ico(Vbsg_tanh___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_tanh___024root___dump_triggers__ico(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG
void Vbsg_tanh___024root___eval_triggers__act(Vbsg_tanh___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_tanh___024root___dump_triggers__act(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_tanh___024root___dump_triggers__nba(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_tanh___024root___eval(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vbsg_tanh___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                Vbsg_tanh___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("bsg_tanh.v", 14, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vbsg_tanh___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbsg_tanh___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    Vbsg_tanh___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("bsg_tanh.v", 14, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vbsg_tanh___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                Vbsg_tanh___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("bsg_tanh.v", 14, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbsg_tanh___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbsg_tanh___024root___eval_debug_assertions(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->ang_i & 0xffe00000U))) {
        Verilated::overWidthError("ang_i");}
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
    if (VL_UNLIKELY((vlSelf->val_i & 0xfeU))) {
        Verilated::overWidthError("val_i");}
    if (VL_UNLIKELY((vlSelf->reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
}
#endif  // VL_DEBUG
