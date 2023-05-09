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
            = ((0x1fffeU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (IData)(vlSelf->val_i));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fffdU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (2U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fffbU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (4U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fff7U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (8U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                        << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffefU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x10U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffdfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x20U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ffbfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x40U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1ff7fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x80U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                           << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1feffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x100U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fdffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x200U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1fbffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x400U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1f7ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x800U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                            << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1efffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x1000U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1dfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x2000U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x1bfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x4000U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0x17fffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x8000U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
                             << 1U)));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val) 
               | (0x10000U & ((IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
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
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] = 0x15f37d0U;
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
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U]) 
               | (IData)(vlSelf->ang_i));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
            = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
                  >> 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
            = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U]) 
               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
                  << 0x10U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
               >> 0x10U);
    }
    vlSelf->val_o = (1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                           >> 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = (0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val);
    vlSelf->sinh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U];
    vlSelf->cosh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                           ? 1U : 0U) ? ((IData)(0xc79U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                             - (IData)(0xc79U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0xb15U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                  >> 0x10U)) - (IData)(0xb15U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                           ? 1U : 0U) ? ((IData)(0x9b0U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                             - (IData)(0x9b0U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x849U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                  >> 0x10U)) - (IData)(0x849U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                           ? 1U : 0U) ? ((IData)(0x6deU) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                             - (IData)(0x6deU)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x56aU) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                  >> 0x10U)) - (IData)(0x56aU))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                           ? 1U : 0U) ? ((IData)(0x3e4U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                             - (IData)(0x3e4U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x232U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                  >> 0x10U)) - (IData)(0x232U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                           ? 1U : 0U) ? ((IData)(0x105U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                             - (IData)(0x105U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x80U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                  >> 0x10U)) - (IData)(0x80U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                           ? 1U : 0U) ? ((IData)(0x40U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                             - (IData)(0x40U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x40U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                  >> 0x10U)) - (IData)(0x40U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                           ? 1U : 0U) ? ((IData)(0x20U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                             - (IData)(0x20U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(0x10U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                  >> 0x10U)) - (IData)(0x10U))) 
              << 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                           ? 1U : 0U) ? ((IData)(8U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                             - (IData)(8U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = ((0xffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U]) 
           | ((((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                 >> 0x1fU) ? 1U : 0U) ? ((IData)(4U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                             << 0x10U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                               >> 0x10U)))
                : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                     << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                  >> 0x10U)) - (IData)(4U))) 
              << 0x10U));
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
          >> 0x1fU) ? 1U : 0U)) {
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
    if (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
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
    if (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
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
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
    if (VL_UNLIKELY((vlSelf->val_i & 0xfeU))) {
        Verilated::overWidthError("val_i");}
}
#endif  // VL_DEBUG
