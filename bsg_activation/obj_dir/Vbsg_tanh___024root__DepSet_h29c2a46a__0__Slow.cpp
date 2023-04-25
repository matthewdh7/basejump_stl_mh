// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_tanh.h for the primary calling header

#include "verilated.h"

#include "Vbsg_tanh___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> Vbsg_tanh__ConstPool__TABLE_h680c41c3_0;

VL_ATTR_COLD void Vbsg_tanh___024root___settle__TOP__0(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ bsg_tanh__DOT__tan_val_i;
    CData/*1:0*/ bsg_tanh__DOT__divider__DOT__opA_sel_lo;
    CData/*2:0*/ bsg_tanh__DOT__divider__DOT__opB_sel_lo;
    CData/*2:0*/ bsg_tanh__DOT__divider__DOT__opC_sel_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_inv_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_inv_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opA_clr_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__opB_clr_lo;
    CData/*0:0*/ bsg_tanh__DOT__divider__DOT__adder1_cin_lo;
    VlWide<5>/*146:0*/ bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i;
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->val_o = (3U == (IData)(vlSelf->bsg_tanh__DOT__state_r));
    vlSelf->tanh_o = vlSelf->bsg_tanh__DOT__tanh_r;
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_done 
        = (0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffeU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (1U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0xffe00000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | (0x1fffffU & (((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                             ? 1U : 0U) ? ((IData)(0x31e41U) 
                                           + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
                            : (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                               - (IData)(0x31e41U)))));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffdU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (2U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U] 
        = ((0x1fffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0U]) 
           | ((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                 ? 1U : 0U) ? ((IData)(0x2c548U) + 
                               ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                 << 0xbU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                             >> 0x15U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                     << 0xbU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                 >> 0x15U)) - (IData)(0x2c548U))) 
              << 0x15U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0xfffffc00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0x3ffU & ((((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                           ? 1U : 0U) ? ((IData)(0x2c548U) 
                                         + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                             << 0xbU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                               >> 0x15U)))
                          : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                               << 0xbU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U] 
                                           >> 0x15U)) 
                             - (IData)(0x2c548U))) 
                        >> 0xbU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffffbU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (4U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0x800003ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | (0x7ffffc00U & ((((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
                                ? 1U : 0U) ? ((IData)(0x26c0eU) 
                                              + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                  << 0x16U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                    >> 0xaU)))
                               : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                    << 0x16U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0xaU)) 
                                  - (IData)(0x26c0eU))) 
                             << 0xaU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffff7U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U] 
        = ((0x7fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[1U]) 
           | ((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                 ? 1U : 0U) ? ((IData)(0x21252U) + 
                               ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                 << 1U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                           >> 0x1fU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                     << 1U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                               >> 0x1fU)) - (IData)(0x21252U))) 
              << 0x1fU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xfff00000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | (0xfffffU & ((((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
                             ? 1U : 0U) ? ((IData)(0x21252U) 
                                           + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               << 1U) 
                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                                 >> 0x1fU)))
                            : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                 << 1U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U] 
                                           >> 0x1fU)) 
                               - (IData)(0x21252U))) 
                          >> 1U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffefU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U] 
        = ((0xfffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[2U]) 
           | ((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                 ? 1U : 0U) ? ((IData)(0x1b78cU) + 
                               ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                 << 0xcU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                             >> 0x14U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                     << 0xcU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                 >> 0x14U)) - (IData)(0x1b78cU))) 
              << 0x14U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xfffffe00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0x1ffU & ((((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                           ? 1U : 0U) ? ((IData)(0x1b78cU) 
                                         + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                             << 0xcU) 
                                            | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                               >> 0x14U)))
                          : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                               << 0xcU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U] 
                                           >> 0x14U)) 
                             - (IData)(0x1b78cU))) 
                        >> 0xcU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffdfU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0xc00001ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | (0x3ffffe00U & ((((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
                                ? 1U : 0U) ? ((IData)(0x15aa1U) 
                                              + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                  << 0x17U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                    >> 9U)))
                               : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                    << 0x17U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 9U)) 
                                  - (IData)(0x15aa1U))) 
                             << 9U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfffbfU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U] 
        = ((0x3fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[3U]) 
           | ((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                 ? 1U : 0U) ? ((IData)(0xf913U) + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                    << 2U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                      >> 0x1eU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                     << 2U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                               >> 0x1eU)) - (IData)(0xf913U))) 
              << 0x1eU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0xfff80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | (0x7ffffU & ((((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
                             ? 1U : 0U) ? ((IData)(0xf913U) 
                                           + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                               << 2U) 
                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                                 >> 0x1eU)))
                            : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                 << 2U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U] 
                                           >> 0x1eU)) 
                               - (IData)(0xf913U))) 
                          >> 2U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfff7fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U] 
        = ((0x7ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[4U]) 
           | ((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                 ? 1U : 0U) ? ((IData)(0x8c9fU) + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    << 0xdU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                                      >> 0x13U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                     << 0xdU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                 >> 0x13U)) - (IData)(0x8c9fU))) 
              << 0x13U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xffffff00U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0xffU & ((((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                          ? 1U : 0U) ? ((IData)(0x8c9fU) 
                                        + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                            << 0xdU) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                              >> 0x13U)))
                         : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                              << 0xdU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U] 
                                          >> 0x13U)) 
                            - (IData)(0x8c9fU))) >> 0xdU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffeffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0xe00000ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | (0x1fffff00U & ((((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
                                ? 1U : 0U) ? ((IData)(0x4162U) 
                                              + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                    >> 8U)))
                               : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                    << 0x18U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 8U)) 
                                  - (IData)(0x4162U))) 
                             << 8U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffdffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U] 
        = ((0x1fffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[5U]) 
           | ((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                 ? 1U : 0U) ? ((IData)(0x202bU) + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                    << 3U) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                      >> 0x1dU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                     << 3U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                               >> 0x1dU)) - (IData)(0x202bU))) 
              << 0x1dU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0xfffc0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | (0x3ffffU & ((((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
                             ? 1U : 0U) ? ((IData)(0x202bU) 
                                           + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                               << 3U) 
                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                                 >> 0x1dU)))
                            : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                 << 3U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U] 
                                           >> 0x1dU)) 
                               - (IData)(0x202bU))) 
                          >> 3U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xffbffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x400U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U] 
        = ((0x3ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[6U]) 
           | ((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                 ? 1U : 0U) ? ((IData)(0x1005U) + (
                                                   (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                    << 0xeU) 
                                                   | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                                      >> 0x12U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                     << 0xeU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                 >> 0x12U)) - (IData)(0x1005U))) 
              << 0x12U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xffffff80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0x7fU & ((((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                          ? 1U : 0U) ? ((IData)(0x1005U) 
                                        + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                            << 0xeU) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                              >> 0x12U)))
                         : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                              << 0xeU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U] 
                                          >> 0x12U)) 
                            - (IData)(0x1005U))) >> 0xeU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xff7ffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x800U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xf000007fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | (0xfffff80U & ((((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
                               ? 1U : 0U) ? ((IData)(0x1005U) 
                                             + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 << 0x19U) 
                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                   >> 7U)))
                              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                   << 0x19U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                >> 7U)) 
                                 - (IData)(0x1005U))) 
                            << 7U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfefffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x1000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U] 
        = ((0xfffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[7U]) 
           | ((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                 ? 1U : 0U) ? ((IData)(0x800U) + ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                   << 4U) 
                                                  | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                     >> 0x1cU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                     << 4U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                               >> 0x1cU)) - (IData)(0x800U))) 
              << 0x1cU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
        = ((0xfffe0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U]) 
           | (0x1ffffU & ((((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
                             ? 1U : 0U) ? ((IData)(0x800U) 
                                           + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                               << 4U) 
                                              | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                                 >> 0x1cU)))
                            : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                 << 4U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U] 
                                           >> 0x1cU)) 
                               - (IData)(0x800U))) 
                          >> 4U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfdfffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x2000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U] 
        = ((0x1ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[8U]) 
           | ((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                 ? 1U : 0U) ? ((IData)(0x400U) + ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   << 0xfU) 
                                                  | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                                     >> 0x11U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                     << 0xfU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                 >> 0x11U)) - (IData)(0x400U))) 
              << 0x11U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0xffffffc0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (0x3fU & ((((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                          ? 1U : 0U) ? ((IData)(0x400U) 
                                        + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                            << 0xfU) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                              >> 0x11U)))
                         : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                              << 0xfU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U] 
                                          >> 0x11U)) 
                            - (IData)(0x400U))) >> 0xfU)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xfbfffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0xf800003fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | (0x7ffffc0U & ((((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
                               ? 1U : 0U) ? ((IData)(0x200U) 
                                             + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                 << 0x1aU) 
                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                   >> 6U)))
                              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                   << 0x1aU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                >> 6U)) 
                                 - (IData)(0x200U))) 
                            << 6U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xf7fffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U] 
        = ((0x7ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[9U]) 
           | ((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                 ? 1U : 0U) ? ((IData)(0x100U) + ((
                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                   << 5U) 
                                                  | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                     >> 0x1bU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                     << 5U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                               >> 0x1bU)) - (IData)(0x100U))) 
              << 0x1bU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
        = ((0xffff0000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU]) 
           | (0xffffU & ((((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
                            ? 1U : 0U) ? ((IData)(0x100U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                              << 5U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                                >> 0x1bU)))
                           : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                << 5U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U] 
                                          >> 0x1bU)) 
                              - (IData)(0x100U))) >> 5U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xeffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU] 
        = ((0xffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xaU]) 
           | ((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                 ? 1U : 0U) ? ((IData)(0x80U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                                    >> 0x10U)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                     << 0x10U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                  >> 0x10U)) - (IData)(0x80U))) 
              << 0x10U));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0xffffffe0U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0x1fU & ((((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                          ? 1U : 0U) ? ((IData)(0x80U) 
                                        + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                            << 0x10U) 
                                           | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                              >> 0x10U)))
                         : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                              << 0x10U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU] 
                                           >> 0x10U)) 
                            - (IData)(0x80U))) >> 0x10U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xdffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0xfc00001fU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | (0x3ffffe0U & ((((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
                               ? 1U : 0U) ? ((IData)(0x40U) 
                                             + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                 << 0x1bU) 
                                                | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                   >> 5U)))
                              : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                   << 0x1bU) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 5U)) 
                                 - (IData)(0x40U))) 
                            << 5U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xbffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | ((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                 ? 1U : 0U) ? ((IData)(0x20U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                     << 6U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                               >> 0x1aU)) - (IData)(0x20U))) 
              << 0x1aU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0x7fffU & ((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                            ? 1U : 0U) ? ((IData)(0x20U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                              << 6U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 0x1aU)))
                           : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                << 6U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x20U))) >> 6U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0xbffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xbU]) 
           | ((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                 ? 1U : 0U) ? ((IData)(0x10U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                  << 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                    >> 0x1aU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                     << 6U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                               >> 0x1aU)) - (IData)(0x10U))) 
              << 0x1aU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | (0x7fffU & ((((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
                            ? 1U : 0U) ? ((IData)(0x10U) 
                                          + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                              << 6U) 
                                             | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                                >> 0x1aU)))
                           : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                << 6U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x10U))) >> 6U)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = 
        ((0x7ffffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans) 
         | (0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU] 
        = ((0x7fffU & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xcU]) 
           | ((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                 ? 1U : 0U) ? ((IData)(0x10U) + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                                    >> 0xfU)))
                : (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                     << 0x11U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                  >> 0xfU)) - (IData)(0x10U))) 
              << 0xfU));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans[0xdU] 
        = (0xfU & ((((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
                      ? 1U : 0U) ? ((IData)(0x10U) 
                                    + ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                                        << 0x11U) | 
                                       (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                        >> 0xfU))) : 
                    (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU] 
                       << 0x11U) | (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU] 
                                    >> 0xfU)) - (IData)(0x10U))) 
                   >> 0x11U));
    if (((0x100000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0U], 8U));
    }
    if (((0x200U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[1U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[1U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[1U], 7U));
    }
    if (((0x40000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[1U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[2U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[2U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[2U], 6U));
    }
    if (((0x80000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[2U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[3U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[3U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[3U], 5U));
    }
    if (((0x100U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[4U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[4U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[4U], 4U));
    }
    if (((0x20000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[3U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[5U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[5U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[5U], 3U));
    }
    if (((0x40000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[4U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                - vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[6U] 
            = ((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[6U] 
                + vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[6U], 2U));
    }
    if (((0x80U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U], 1U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[7U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[7U], 1U));
    }
    if (((0x10000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[5U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U], 2U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[8U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[8U], 2U));
    }
    if (((0x20000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[6U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U], 3U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[9U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[9U], 3U));
    }
    if (((0x40U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xaU], 4U));
    }
    if (((0x8000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[7U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU], 4U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xbU], 4U));
    }
    if (((0x10000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[8U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU], 5U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xcU], 5U));
    }
    if (((0x20U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU], 6U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xdU], 6U));
    }
    if (((0x4000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[9U])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU], 7U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xeU], 7U));
    }
    if (((0x8000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xaU])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU], 8U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0xfU], 8U));
    }
    if (((0x10U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U], 9U));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x10U], 9U));
    }
    if (((0x2000000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x11U], 0xaU));
    }
    if (((0x4000U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xcU])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x12U], 0xcU));
    }
    if (((8U & vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang[0xdU])
          ? 1U : 0U)) {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    } else {
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x13U], 0xcU));
    }
    bsg_tanh__DOT__tan_val_i = (((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                  >> 0x14U) & (1U == (IData)(vlSelf->bsg_tanh__DOT__state_r))) 
                                & (0x3e000U >= vlSelf->ang_i));
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li 
        = ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
           & (0x30U > (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt)));
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe 
        = (IData)(((vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                    >> 0x14U) & (~ ((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                    & (0U == (IData)(vlSelf->bsg_tanh__DOT__state_r))))));
    bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opA_clr_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opB_clr_lo = 1U;
    bsg_tanh__DOT__divider__DOT__opA_inv_lo = (1U & 
                                               (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    bsg_tanh__DOT__divider__DOT__opB_inv_lo = 0U;
    bsg_tanh__DOT__divider__DOT__adder1_cin_lo = (1U 
                                                  & (~ (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r)));
    vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = 0U;
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 0U;
    bsg_tanh__DOT__divider__DOT__opA_sel_lo = 0U;
    bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
    vlSelf->ready_o = ((0U == (IData)(vlSelf->bsg_tanh__DOT__state_r)) 
                       & (~ (IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe)));
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
                bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
                bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
                bsg_tanh__DOT__divider__DOT__opA_inv_lo = 1U;
                bsg_tanh__DOT__divider__DOT__adder1_cin_lo = 1U;
            } else {
                if ((2U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        bsg_tanh__DOT__divider__DOT__opB_sel_lo = 1U;
                        bsg_tanh__DOT__divider__DOT__opB_clr_lo = 0U;
                    } else if ((4U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        bsg_tanh__DOT__divider__DOT__opB_sel_lo 
                            = ((0x30U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt))
                                ? 2U : 1U);
                    } else if ((5U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        bsg_tanh__DOT__divider__DOT__opB_sel_lo = 2U;
                    } else if ((6U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        bsg_tanh__DOT__divider__DOT__opB_sel_lo = 4U;
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
    } else if ((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
        vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo = 0U;
    }
    vlSelf->bsg_tanh__DOT__divider__DOT__add1_out = 
        (0x1ffffffffffffULL & ((((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                  ^ (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opA_inv_lo)))) 
                                 & (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opA_clr_lo)))) 
                                + ((vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r 
                                    ^ (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opB_inv_lo)))) 
                                   & (- (QData)((IData)(bsg_tanh__DOT__divider__DOT__opB_clr_lo))))) 
                               + (QData)((IData)(bsg_tanh__DOT__divider__DOT__adder1_cin_lo))));
    __Vtableidx1 = (((IData)(vlSelf->val_i) << 8U) 
                    | (((IData)(vlSelf->ready_o) << 7U) 
                       | (((0U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                           << 6U) | ((0x20U & (vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val 
                                               >> 0xfU)) 
                                     | (((8U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state)) 
                                         << 4U) | (
                                                   ((0x3e000U 
                                                     < vlSelf->ang_i) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->ready_i) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->bsg_tanh__DOT__state_r))))))));
    vlSelf->bsg_tanh__DOT__state_n = Vbsg_tanh__ConstPool__TABLE_h680c41c3_0
        [__Vtableidx1];
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
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = 1U;
                bsg_tanh__DOT__divider__DOT__opA_sel_lo = 2U;
                bsg_tanh__DOT__divider__DOT__opC_sel_lo = 4U;
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
                vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo 
                    = ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r 
                                >> 0x30U)) & (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r));
                bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
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
                                    bsg_tanh__DOT__divider__DOT__opA_sel_lo = 1U;
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
                    bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
                } else if ((3U == (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    bsg_tanh__DOT__divider__DOT__opC_sel_lo = 1U;
                } else if ((4U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                    if ((5U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                        if ((6U != (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state))) {
                            bsg_tanh__DOT__divider__DOT__opC_sel_lo = 2U;
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
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U] 
        = (IData)(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out);
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U] 
        = (((IData)((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))) 
            << 0x11U) | (IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                 >> 0x20U)));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U] 
        = (((IData)((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U]))) 
            >> 0xfU) | ((IData)(((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U] 
        = ((2U & ((IData)(((QData)((IData)(vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                           >> 0x2fU)) << 1U)) | ((IData)(
                                                         ((QData)((IData)(
                                                                          vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x[0x14U])) 
                                                          >> 0x20U)) 
                                                 >> 0xfU));
    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                          << 1U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                                >> 0x30U)))))));
    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U] 
        = (((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out) 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                      << 1U)) | (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                                            >> 0x30U)))))) 
                                 >> 0x20U)));
    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U] 
        = (((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out) 
            >> 0xfU) | ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                 >> 0x20U)) << 0x11U));
    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U] 
        = (((0x1fffcU & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
                         << 2U)) | ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                             >> 0x20U)) 
                                    >> 0xfU)) | (0xfffe0000U 
                                                 & ((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
                                                    << 2U)));
    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U] 
        = ((((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r) 
             >> 0x1eU) | (0x1fffcU & ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                               >> 0x20U)) 
                                      << 2U))) | (0xfffe0000U 
                                                  & ((IData)(
                                                             (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                                              >> 0x20U)) 
                                                     << 2U)));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                          << 1U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                                >> 0x30U))))))));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U] 
        = (((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out) 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r 
                                      << 1U)) | (QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                                                               >> 0x30U))))))) 
                                 >> 0x20U)));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U] 
        = (((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__add1_out) 
            >> 0xfU) | ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                                 >> 0x20U)) << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U] 
        = (((0x1fffcU & ((IData)((0xffffffffffffULL 
                                  & ((QData)((IData)(
                                                     vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                     << 0x10U))) << 2U)) 
            | ((IData)((vlSelf->bsg_tanh__DOT__divider__DOT__add1_out 
                        >> 0x20U)) >> 0xfU)) | (0xfffe0000U 
                                                & ((IData)(
                                                           (0xffffffffffffULL 
                                                            & ((QData)((IData)(
                                                                               vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                               << 0x10U))) 
                                                   << 2U)));
    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U] 
        = ((((IData)((0xffffffffffffULL & ((QData)((IData)(
                                                           vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                           << 0x10U))) 
             >> 0x1eU) | (0x1fffcU & ((IData)(((0xffffffffffffULL 
                                                & ((QData)((IData)(
                                                                   vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                   << 0x10U)) 
                                               >> 0x20U)) 
                                      << 2U))) | ((0x40000U 
                                                   & ((IData)(
                                                              (1ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                                  >> 0x1fU))) 
                                                      << 0x12U)) 
                                                  | (0xfffe0000U 
                                                     & ((IData)(
                                                                ((0xffffffffffffULL 
                                                                  & ((QData)((IData)(
                                                                                vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y[0x14U])) 
                                                                     << 0x10U)) 
                                                                 >> 0x20U)) 
                                                        << 2U))));
    vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo))))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo))))))) 
                      >> 0x20U)));
    vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U] 
        = ((0x1ffffU & vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U]) 
           | ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                    >> 0x11U))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                                      >> 1U)))))))) 
              << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U] 
        = (((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                             vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                << 0xfU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                  >> 0x11U))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                                    >> 1U)))))))) 
            >> 0xfU) | ((IData)(((0x1ffffffffffffULL 
                                  & ((((QData)((IData)(
                                                       vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                        >> 0x11U))) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                              >> 1U))))))) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U] 
        = (3U & ((IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                                   vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[3U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[2U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i[1U])) 
                                                        >> 0x11U))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(bsg_tanh__DOT__divider__DOT__opA_sel_lo) 
                                                                          >> 1U))))))) 
                          >> 0x20U)) >> 0xfU));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo))))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo))))))) 
                      >> 0x20U)));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
        = ((0x1ffffU & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]) 
           | ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                                    >> 0x11U))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                      >> 1U)))))))) 
              << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
        = (((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                             bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U])) 
                                                << 0xfU) 
                                               | ((QData)((IData)(
                                                                  bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                                  >> 0x11U))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                    >> 1U)))))))) 
            >> 0xfU) | ((IData)(((0x1ffffffffffffULL 
                                  & ((((QData)((IData)(
                                                       bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                        >> 0x11U))) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                              >> 1U))))))) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
        = ((0xfffffffcU & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
           | ((IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                                bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[2U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[1U])) 
                                                     >> 0x11U))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                       >> 1U))))))) 
                       >> 0x20U)) >> 0xfU));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
        = ((3U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U]) 
           | ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                                    >> 2U))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                      >> 2U)))))))) 
              << 2U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
        = (0x7ffffU & (((IData)((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                                      >> 2U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                             >> 2U)))))))) 
                        >> 0x1eU) | ((IData)(((0x1ffffffffffffULL 
                                               & ((((QData)((IData)(
                                                                    bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[4U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxB__data_i[3U])) 
                                                         >> 2U))) 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(bsg_tanh__DOT__divider__DOT__opB_sel_lo) 
                                                                           >> 2U))))))) 
                                              >> 0x20U)) 
                                     << 2U)));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
        = (IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                           vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U]))) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo))))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
        = ((0xfffe0000U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]) 
           | (IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[0U]))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo))))))) 
                      >> 0x20U)));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
        = ((0x1ffffU & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]) 
           | ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U])) 
                                                  << 0xfU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                                    >> 0x11U))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                      >> 1U)))))))) 
              << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
        = (((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                             vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U])) 
                                                << 0xfU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                                  >> 0x11U))) 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                    >> 1U)))))))) 
            >> 0xfU) | ((IData)(((0x1ffffffffffffULL 
                                  & ((((QData)((IData)(
                                                       vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U])) 
                                        << 0xfU) | 
                                       ((QData)((IData)(
                                                        vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                        >> 0x11U))) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                              >> 1U))))))) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
        = ((0xfffffffcU & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
           | ((IData)(((0x1ffffffffffffULL & ((((QData)((IData)(
                                                                vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[2U])) 
                                                   << 0xfU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[1U])) 
                                                     >> 0x11U))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                       >> 1U))))))) 
                       >> 0x20U)) >> 0xfU));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
        = ((3U & vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U]) 
           | ((IData)((0x1ffffffffffffULL & ((((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                                    >> 2U))) 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                      >> 2U)))))))) 
              << 2U));
    vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
        = (0x7ffffU & (((IData)((0x1ffffffffffffULL 
                                 & ((((QData)((IData)(
                                                      vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                                      >> 2U))) 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                             >> 2U)))))))) 
                        >> 0x1eU) | ((IData)(((0x1ffffffffffffULL 
                                               & ((((QData)((IData)(
                                                                    vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[4U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i[3U])) 
                                                         >> 2U))) 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(bsg_tanh__DOT__divider__DOT__opC_sel_lo) 
                                                                           >> 2U))))))) 
                                              >> 0x20U)) 
                                     << 2U)));
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_mux = 
        (0x1ffffffffffffULL & ((((QData)((IData)(vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[3U])) 
                                 << 0x2fU) | (((QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[2U])) 
                                               << 0xfU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U])) 
                                                 >> 0x11U))) 
                               | (((QData)((IData)(
                                                   vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked[0U])))));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffeULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | (IData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                   >> 2U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                              >> 0x11U) 
                                             | vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U]))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffdULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 3U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x12U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 1U)))))) 
            << 1U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffffbULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 4U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x13U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 2U)))))) 
            << 2U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffff7ULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 5U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x14U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 3U)))))) 
            << 3U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffefULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 6U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x15U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 4U)))))) 
            << 4U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffdfULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 7U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x16U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 5U)))))) 
            << 5U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffffbfULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 8U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x17U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 6U)))))) 
            << 6U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffff7fULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 9U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                               >> 0x18U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 7U)))))) 
            << 7U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffeffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xaU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x19U) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 8U)))))) 
            << 8U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffdffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xbU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x1aU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 9U)))))) 
            << 9U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffffbffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xcU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x1bU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0xaU)))))) 
            << 0xaU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffff7ffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xdU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0xbU)))))) 
            << 0xbU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffefffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xeU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x1dU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0xcU)))))) 
            << 0xcU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffdfffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0xfU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 0x1eU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0xdU)))))) 
            << 0xdU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffffbfffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x10U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0xeU)))))) 
            << 0xeU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffff7fffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x11U) | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0xfU)))))) 
            << 0xfU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffeffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x12U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 1U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x10U)))))) 
            << 0x10U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffdffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x13U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 2U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x11U)))))) 
            << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffffbffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x14U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 3U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x12U)))))) 
            << 0x12U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffff7ffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x15U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 4U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x13U)))))) 
            << 0x13U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffefffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x16U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 5U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x14U)))))) 
            << 0x14U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffdfffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x17U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x15U)))))) 
            << 0x15U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffffbfffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x18U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 7U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x16U)))))) 
            << 0x16U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffff7fffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x19U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 8U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x17U)))))) 
            << 0x17U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffeffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1aU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 9U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x18U)))))) 
            << 0x18U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffdffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1bU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0xaU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x19U)))))) 
            << 0x19U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffffbffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1cU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0xbU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x1aU)))))) 
            << 0x1aU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffff7ffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1dU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0xcU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x1bU)))))) 
            << 0x1bU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffefffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1eU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0xdU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x1cU)))))) 
            << 0x1cU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffdfffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                    >> 0x1fU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0xeU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                    >> 0x1dU)))))) 
            << 0x1dU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffffbfffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                   | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                       >> 0xfU) | (
                                                   vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                   >> 0x1eU)))))) 
            << 0x1eU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffff7fffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 1U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x10U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[0U] 
                                                 >> 0x1fU)))))) 
            << 0x1fU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffeffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 2U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x11U) 
                                              | vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U]))))) 
            << 0x20U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffdffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 3U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x12U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 1U)))))) 
            << 0x21U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fffbffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 4U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x13U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 2U)))))) 
            << 0x22U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fff7ffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 5U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x14U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 3U)))))) 
            << 0x23U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffefffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 6U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x15U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 4U)))))) 
            << 0x24U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffdfffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 7U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x16U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 5U)))))) 
            << 0x25U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ffbfffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 8U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x17U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 6U)))))) 
            << 0x26U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1ff7fffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 9U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                               >> 0x18U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                 >> 7U)))))) 
            << 0x27U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1feffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xaU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x19U) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 8U)))))) 
            << 0x28U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fdffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xbU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x1aU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 9U)))))) 
            << 0x29U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1fbffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xcU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x1bU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 0xaU)))))) 
            << 0x2aU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1f7ffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xdU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 0xbU)))))) 
            << 0x2bU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1efffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xeU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x1dU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 0xcU)))))) 
            << 0x2cU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1dfffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0xfU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                 >> 0x1eU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                   >> 0xdU)))))) 
            << 0x2dU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x1bfffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0x10U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[2U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0xeU)))))) 
            << 0x2eU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0x17fffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0x11U) | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0xfU)))))) 
            << 0x2fU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = 
        ((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[4U] 
                                    >> 0x12U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[3U] 
                                                  >> 1U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked[1U] 
                                                    >> 0x10U)))))) 
            << 0x30U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffeULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | (IData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                   >> 2U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                              >> 0x11U) 
                                             | vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U]))))));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffdULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 3U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x12U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 1U)))))) 
            << 1U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffffbULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 4U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x13U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 2U)))))) 
            << 2U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffff7ULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 5U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x14U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 3U)))))) 
            << 3U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffefULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 6U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x15U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 4U)))))) 
            << 4U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffdfULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 7U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x16U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 5U)))))) 
            << 5U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffffbfULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 8U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x17U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 6U)))))) 
            << 6U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffff7fULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 9U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                               >> 0x18U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 7U)))))) 
            << 7U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffeffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xaU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x19U) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 8U)))))) 
            << 8U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffdffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xbU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x1aU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 9U)))))) 
            << 9U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffffbffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xcU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x1bU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 0xaU)))))) 
            << 0xaU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffff7ffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xdU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 0xbU)))))) 
            << 0xbU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffefffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xeU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x1dU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 0xcU)))))) 
            << 0xcU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffdfffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0xfU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 0x1eU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 0xdU)))))) 
            << 0xdU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffffbfffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x10U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0xeU)))))) 
            << 0xeU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffff7fffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x11U) | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0xfU)))))) 
            << 0xfU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffeffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x12U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 1U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x10U)))))) 
            << 0x10U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffdffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x13U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 2U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x11U)))))) 
            << 0x11U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffffbffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x14U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 3U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x12U)))))) 
            << 0x12U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffff7ffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x15U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 4U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x13U)))))) 
            << 0x13U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffefffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x16U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 5U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x14U)))))) 
            << 0x14U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffdfffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x17U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 6U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x15U)))))) 
            << 0x15U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffffbfffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x18U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 7U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x16U)))))) 
            << 0x16U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffff7fffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x19U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 8U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x17U)))))) 
            << 0x17U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffeffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1aU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 9U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x18U)))))) 
            << 0x18U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffdffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1bU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0xaU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x19U)))))) 
            << 0x19U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffffbffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1cU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0xbU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1aU)))))) 
            << 0x1aU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffff7ffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1dU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0xcU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1bU)))))) 
            << 0x1bU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffefffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1eU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0xdU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1cU)))))) 
            << 0x1cU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffdfffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                    >> 0x1fU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0xeU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                    >> 0x1dU)))))) 
            << 0x1dU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffffbfffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                   | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                       >> 0xfU) | (
                                                   vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                   >> 0x1eU)))))) 
            << 0x1eU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffff7fffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 1U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x10U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[0U] 
                                                 >> 0x1fU)))))) 
            << 0x1fU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffeffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 2U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x11U) 
                                              | vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U]))))) 
            << 0x20U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffdffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 3U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x12U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 1U)))))) 
            << 0x21U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fffbffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 4U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x13U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 2U)))))) 
            << 0x22U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fff7ffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 5U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x14U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 3U)))))) 
            << 0x23U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffefffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 6U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x15U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 4U)))))) 
            << 0x24U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffdfffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 7U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x16U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 5U)))))) 
            << 0x25U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ffbfffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 8U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x17U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 6U)))))) 
            << 0x26U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1ff7fffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 9U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                               >> 0x18U) 
                                              | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                 >> 7U)))))) 
            << 0x27U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1feffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xaU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x19U) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 8U)))))) 
            << 0x28U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fdffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xbU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x1aU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 9U)))))) 
            << 0x29U));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1fbffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xcU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x1bU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 0xaU)))))) 
            << 0x2aU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1f7ffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xdU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x1cU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 0xbU)))))) 
            << 0x2bU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1efffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xeU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x1dU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 0xcU)))))) 
            << 0x2cU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1dfffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0xfU) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                 >> 0x1eU) 
                                                | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                   >> 0xdU)))))) 
            << 0x2dU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x1bfffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0x10U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[2U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                    >> 0xeU)))))) 
            << 0x2eU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0x17fffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0x11U) | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                    >> 0xfU)))))) 
            << 0x2fU));
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = 
        ((0xffffffffffffULL & vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux) 
         | ((QData)((IData)((1U & ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[4U] 
                                    >> 0x12U) | ((vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[3U] 
                                                  >> 1U) 
                                                 | (vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked[1U] 
                                                    >> 0x10U)))))) 
            << 0x30U));
}

VL_ATTR_COLD void Vbsg_tanh___024root___eval_initial(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vbsg_tanh___024root___eval_settle(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_settle\n"); );
    // Body
    Vbsg_tanh___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vbsg_tanh___024root___final(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___final\n"); );
}

VL_ATTR_COLD void Vbsg_tanh___024root___ctor_var_reset(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->ang_i = VL_RAND_RESET_I(21);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->val_i = VL_RAND_RESET_I(1);
    vlSelf->reset_i = VL_RAND_RESET_I(1);
    vlSelf->tanh_o = VL_RAND_RESET_I(32);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->val_o = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__tanh_r = VL_RAND_RESET_I(32);
    vlSelf->bsg_tanh__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->bsg_tanh__DOT__state_n = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(672, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x);
    VL_RAND_RESET_W(672, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y);
    VL_RAND_RESET_W(441, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang);
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(640, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__x_ans);
    VL_RAND_RESET_W(640, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__y_ans);
    VL_RAND_RESET_W(420, vlSelf->bsg_tanh__DOT__sinhcosh__DOT__ang_ans);
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__val_ans = VL_RAND_RESET_I(20);
    vlSelf->bsg_tanh__DOT__sinhcosh__DOT__stall_pipe = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__latch_signed_div_lo = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_mux = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__add1_out = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(98, vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__muxA__data_i);
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_mux = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_mux = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_ld_lo = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_ld_lo = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_ld_lo = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, vlSelf->bsg_tanh__DOT__divider__DOT____Vcellinp__genblk1__DOT__muxC__data_i);
    vlSelf->bsg_tanh__DOT__divider__DOT__req_reg__DOT__data_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(98, vlSelf->bsg_tanh__DOT__divider__DOT__muxA__DOT__data_masked);
    vlSelf->bsg_tanh__DOT__divider__DOT__opA_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__opB_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__opC_reg__DOT__data_r = VL_RAND_RESET_Q(49);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__q_neg_r = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__r_neg_r = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__neg_ld = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__add1_neg_last_r = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_cnt = VL_RAND_RESET_I(6);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_up_li = VL_RAND_RESET_I(1);
    vlSelf->bsg_tanh__DOT__divider__DOT__control__DOT__calc_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(147, vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxB__DOT__data_masked);
    VL_RAND_RESET_W(147, vlSelf->bsg_tanh__DOT__divider__DOT__genblk1__DOT__muxC__DOT__data_masked);
}
