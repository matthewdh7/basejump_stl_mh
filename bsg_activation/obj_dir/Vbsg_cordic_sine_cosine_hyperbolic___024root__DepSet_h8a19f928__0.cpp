// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#include "verilated.h"

#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

VL_INLINE_OPT void Vbsg_cordic_sine_cosine_hyperbolic___024root___sequent__TOP__0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe)))) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffffeU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (IData)(vlSelf->val_i));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffffdU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (2U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffffbU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (4U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffff7U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (8U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fffefU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x10U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fffdfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x20U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fffbfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x40U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fff7fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x80U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffeffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x100U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffdffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x200U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffbffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x400U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ff7ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x800U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fefffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x1000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fdfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x2000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fbfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x4000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1f7fffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x8000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1effffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x10000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1dffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x20000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1bffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x40000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x17ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x80000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x17ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x80000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                              << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x100000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
                               << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] = 0U;
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[1U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[2U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[3U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[4U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[5U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[6U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[7U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[8U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[9U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xaU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xbU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xcU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xdU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xeU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xfU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x10U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x11U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x14U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x13U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] = 0x57ce0293U;
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[1U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[2U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[3U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[4U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[5U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[6U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[7U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[8U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[9U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xaU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xbU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xcU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xdU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xeU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xfU];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x10U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x11U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x14U] 
            = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x13U];
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
            = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U]) 
               | vlSelf->ang_i);
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
            = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
                  << 0x14U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
            = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U]) 
               | (0xffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
                           >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
            = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U]) 
               | (0xfffff00U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                                 << 0x14U) | (0xfff00U 
                                              & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
                                                 >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
            = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U]) 
               | (0xf0000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U]) 
               | (0xffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                             >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U]) 
               | (0xffff0000U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
                                  << 0x14U) | (0xf0000U 
                                               & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                                                  >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
            = ((0xfffffff0U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U]) 
               | (0xfU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
                          >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
            = ((0xff00000fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U]) 
               | (0xfffff0U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                                << 0x14U) | (0xffff0U 
                                             & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
                                                >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
            = ((0xffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U]) 
               | (0xff000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
            = ((0xfffff000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U]) 
               | (0xfffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                            >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
            = ((0xfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U]) 
               | (0xfffff000U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
                                  << 0x14U) | (0xff000U 
                                               & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                                                  >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
            = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
                  >> 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
            = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
                  << 0x14U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
            = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U]) 
               | (0xffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
                           >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
            = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U]) 
               | (0xfffff00U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                                 << 0x14U) | (0xfff00U 
                                              & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
                                                 >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
            = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U]) 
               | (0xf0000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U]) 
               | (0xffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                             >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U]) 
               | (0xffff0000U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
                                  << 0x14U) | (0xf0000U 
                                               & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                                                  >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
            = ((0xfffffff0U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U]) 
               | (0xfU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
                          >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
            = ((0xff00000fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U]) 
               | (0xfffff0U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
                                << 0x14U) | (0xffff0U 
                                             & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
                                                >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
            = ((0xffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U]) 
               | (0xff000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
            = ((0xfffff000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U]) 
               | (0xfffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
                            >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
            = ((0xfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U]) 
               | (0xfffff000U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U] 
                                  << 0x14U) | (0xff000U 
                                               & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
                                                  >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
            = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U] 
                  >> 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
            = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
                  << 0x14U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
            = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU]) 
               | (0xffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
                           >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
            = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU]) 
               | (0xfffff00U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                                 << 0x14U) | (0xfff00U 
                                              & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
                                                 >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
            = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU]) 
               | (0xf0000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU]) 
               | (0xffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                             >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
            = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU]) 
               | (0xf0000000U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                                 << 0x14U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU]) 
               | (0xffffU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                             >> 0xcU)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU]) 
               | (0xffff0000U & ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU] 
                                  << 0x14U) | (0xf0000U 
                                               & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
                                                  >> 0xcU)))));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
            = (0xfU & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU] 
                       >> 0xcU));
    }
    vlSelf->val_o = (1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                           >> 0x14U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x7ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x3ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0xc0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->sinh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x14U];
    vlSelf->cosh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x14U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                            ? 1U : 0U) ? ((IData)(0x31e41U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                              - (IData)(0x31e41U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                 ? 1U : 0U) ? ((IData)(0x2c548U) + 
                               ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                 << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                             >> 0x14U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                     << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                 >> 0x14U)) - (IData)(0x2c548U))) 
              << 0x14U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | (0xffU & ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                          ? 1U : 0U) ? ((IData)(0x2c548U) 
                                        + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                            << 0xcU) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                              >> 0x14U)))
                         : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                              << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                          >> 0x14U)) 
                            - (IData)(0x2c548U))) >> 0xcU)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | (0xfffff00U & ((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                               ? 1U : 0U) ? ((IData)(0x26c0eU) 
                                             + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                 << 0x18U) 
                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                   >> 8U)))
                              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                   << 0x18U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                >> 8U)) 
                                 - (IData)(0x26c0eU))) 
                            << 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                 ? 1U : 0U) ? ((IData)(0x21252U) + 
                               ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                 << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                           >> 0x1cU)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                     << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                               >> 0x1cU)) - (IData)(0x21252U))) 
              << 0x1cU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U]) 
           | (0xffffU & ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                            ? 1U : 0U) ? ((IData)(0x21252U) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                              << 4U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                >> 0x1cU)))
                           : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                          >> 0x1cU)) 
                              - (IData)(0x21252U))) 
                         >> 4U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U]) 
           | ((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                 ? 1U : 0U) ? ((IData)(0x1b78cU) + 
                               ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                 << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                              >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                  >> 0x10U)) - (IData)(0x1b78cU))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xfffffff0U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | (0xfU & ((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                         ? 1U : 0U) ? ((IData)(0x1b78cU) 
                                       + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                           << 0x10U) 
                                          | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                             >> 0x10U)))
                        : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                             << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                          >> 0x10U)) 
                           - (IData)(0x1b78cU))) >> 0x10U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xff00000fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | (0xfffff0U & ((((0x800000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                              ? 1U : 0U) ? ((IData)(0x15aa1U) 
                                            + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                << 0x1cU) 
                                               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                  >> 4U)))
                             : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                  << 0x1cU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                               >> 4U)) 
                                - (IData)(0x15aa1U))) 
                           << 4U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | ((((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                 ? 1U : 0U) ? ((IData)(0xf913U) + (
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                    << 8U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      >> 0x18U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                     << 8U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                               >> 0x18U)) - (IData)(0xf913U))) 
              << 0x18U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((0xfffff000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U]) 
           | (0xfffU & ((((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                           ? 1U : 0U) ? ((IData)(0xf913U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                             << 8U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                               >> 0x18U)))
                          : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                               << 8U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                         >> 0x18U)) 
                             - (IData)(0xf913U))) >> 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((0xfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x8c9fU) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                             << 0x14U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                               >> 0xcU)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                     << 0x14U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                  >> 0xcU)) - (IData)(0x8c9fU))) 
              << 0xcU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                            ? 1U : 0U) ? ((IData)(0x4162U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                              - (IData)(0x4162U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                 ? 1U : 0U) ? ((IData)(0x202bU) + (
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                    << 0xcU) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      >> 0x14U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                     << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                 >> 0x14U)) - (IData)(0x202bU))) 
              << 0x14U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | (0xffU & ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                          ? 1U : 0U) ? ((IData)(0x202bU) 
                                        + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                            << 0xcU) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                              >> 0x14U)))
                         : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                              << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                          >> 0x14U)) 
                            - (IData)(0x202bU))) >> 0xcU)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | (0xfffff00U & ((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                               ? 1U : 0U) ? ((IData)(0x1005U) 
                                             + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                 << 0x18U) 
                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                   >> 8U)))
                              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                   << 0x18U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                >> 8U)) 
                                 - (IData)(0x1005U))) 
                            << 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                 ? 1U : 0U) ? ((IData)(0x1005U) + (
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                    << 4U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                      >> 0x1cU)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                     << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                               >> 0x1cU)) - (IData)(0x1005U))) 
              << 0x1cU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U]) 
           | (0xffffU & ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                            ? 1U : 0U) ? ((IData)(0x1005U) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                              << 4U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                >> 0x1cU)))
                           : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                          >> 0x1cU)) 
                              - (IData)(0x1005U))) 
                         >> 4U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U]) 
           | ((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                 ? 1U : 0U) ? ((IData)(0x800U) + ((
                                                   vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                   << 0x10U) 
                                                  | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                     >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                  >> 0x10U)) - (IData)(0x800U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
        = ((0xfffffff0U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U]) 
           | (0xfU & ((((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                         ? 1U : 0U) ? ((IData)(0x800U) 
                                       + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                           << 0x10U) 
                                          | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                             >> 0x10U)))
                        : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                             << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                          >> 0x10U)) 
                           - (IData)(0x800U))) >> 0x10U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
        = ((0xff00000fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U]) 
           | (0xfffff0U & ((((0x800000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                              ? 1U : 0U) ? ((IData)(0x400U) 
                                            + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                << 0x1cU) 
                                               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                  >> 4U)))
                             : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                  << 0x1cU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                               >> 4U)) 
                                - (IData)(0x400U))) 
                           << 4U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
        = ((0xffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U]) 
           | ((((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                 ? 1U : 0U) ? ((IData)(0x200U) + ((
                                                   vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                   << 8U) 
                                                  | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                     >> 0x18U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                     << 8U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                               >> 0x18U)) - (IData)(0x200U))) 
              << 0x18U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U] 
        = ((0xfffff000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U]) 
           | (0xfffU & ((((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                           ? 1U : 0U) ? ((IData)(0x200U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                             << 8U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                               >> 0x18U)))
                          : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                               << 8U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                         >> 0x18U)) 
                             - (IData)(0x200U))) >> 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U] 
        = ((0xfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x100U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                             << 0x14U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                               >> 0xcU)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                     << 0x14U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                  >> 0xcU)) - (IData)(0x100U))) 
              << 0xcU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                            ? 1U : 0U) ? ((IData)(0x80U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                              - (IData)(0x80U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
        = ((0xfffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU]) 
           | ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                 ? 1U : 0U) ? ((IData)(0x40U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                  << 0xcU) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                    >> 0x14U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                     << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                 >> 0x14U)) - (IData)(0x40U))) 
              << 0x14U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = ((0xffffff00U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU]) 
           | (0xffU & ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                          ? 1U : 0U) ? ((IData)(0x40U) 
                                        + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                            << 0xcU) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                              >> 0x14U)))
                         : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                              << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                          >> 0x14U)) 
                            - (IData)(0x40U))) >> 0xcU)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU]) 
           | (0xfffff00U & ((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                               ? 1U : 0U) ? ((IData)(0x20U) 
                                             + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                 << 0x18U) 
                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                   >> 8U)))
                              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                   << 0x18U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                >> 8U)) 
                                 - (IData)(0x20U))) 
                            << 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = ((0xf00000ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU]) 
           | (0xfffff00U & ((((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                               ? 1U : 0U) ? ((IData)(0x10U) 
                                             + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                 << 0x18U) 
                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                   >> 8U)))
                              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                   << 0x18U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                >> 8U)) 
                                 - (IData)(0x10U))) 
                            << 8U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = ((0xfffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU]) 
           | ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                 ? 1U : 0U) ? ((IData)(0x10U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                  << 4U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                    >> 0x1cU)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                     << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                               >> 0x1cU)) - (IData)(0x10U))) 
              << 0x1cU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU] 
        = (0xffffU & ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                         ? 1U : 0U) ? ((IData)(0x10U) 
                                       + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                           << 4U) | 
                                          (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                           >> 0x1cU)))
                        : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                             << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                       >> 0x1cU)) - (IData)(0x10U))) 
                      >> 4U));
    if (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U));
    }
    if (((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U));
    }
    if (((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U));
    }
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U));
    }
    if (((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U));
    }
    if (((0x800000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U));
    }
    if (((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U));
    }
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U));
    }
    if (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U));
    }
    if (((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U));
    }
    if (((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U));
    }
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U));
    }
    if (((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U));
    }
    if (((0x800000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U));
    }
    if (((0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U));
    }
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
          >> 0x1fU) ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U));
    }
    if (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U));
    }
    if (((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x11U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x11U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU));
    }
    if (((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU));
    }
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
          ? 1U : 0U)) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x13U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x13U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU));
    }
}

VL_INLINE_OPT void Vbsg_cordic_sine_cosine_hyperbolic___024root___combo__TOP__0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe 
        = ((IData)(vlSelf->val_o) & (~ (IData)(vlSelf->ready_i)));
    vlSelf->ready_o = (1U & (~ (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe)));
}

void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vbsg_cordic_sine_cosine_hyperbolic___024root___sequent__TOP__0(vlSelf);
    }
    Vbsg_cordic_sine_cosine_hyperbolic___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_debug_assertions(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->ang_i & 0xfff00000U))) {
        Verilated::overWidthError("ang_i");}
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
    if (VL_UNLIKELY((vlSelf->val_i & 0xfeU))) {
        Verilated::overWidthError("val_i");}
}
#endif  // VL_DEBUG
