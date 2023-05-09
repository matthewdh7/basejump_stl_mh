// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#include "verilated.h"

#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___settle__TOP__0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->cosh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U];
    vlSelf->sinh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U];
    vlSelf->val_o = (1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                           >> 0x10U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffeU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (1U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                           ? 1U : 0U) ? ((IData)(0xc79U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                             - (IData)(0xc79U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffdU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (2U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffbU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (4U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                           ? 1U : 0U) ? ((IData)(0x9b0U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                             - (IData)(0x9b0U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfff7U & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffefU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                           ? 1U : 0U) ? ((IData)(0x6deU) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                             - (IData)(0x6deU)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffdfU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffbfU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                           ? 1U : 0U) ? ((IData)(0x3e4U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                             - (IData)(0x3e4U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xff7fU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfeffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                           ? 1U : 0U) ? ((IData)(0x105U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                             - (IData)(0x105U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfdffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfbffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x400U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                           ? 1U : 0U) ? ((IData)(0x40U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                             - (IData)(0x40U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xf7ffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xefffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x1000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                           ? 1U : 0U) ? ((IData)(0x20U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                             - (IData)(0x20U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xdfffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x2000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xbfffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = ((0xffff0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U]) 
           | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                           ? 1U : 0U) ? ((IData)(8U) 
                                         + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                          : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                             - (IData)(8U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x7fffU & (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans)) 
           | (0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe 
        = ((IData)(vlSelf->val_o) & (~ (IData)(vlSelf->ready_i)));
    vlSelf->ready_o = (1U & (~ (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe)));
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle\n"); );
    // Body
    Vbsg_cordic_sine_cosine_hyperbolic___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___final(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___final\n"); );
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___ctor_var_reset(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->ang_i = VL_RAND_RESET_I(16);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->val_i = VL_RAND_RESET_I(1);
    vlSelf->sinh_o = VL_RAND_RESET_I(32);
    vlSelf->cosh_o = VL_RAND_RESET_I(32);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->val_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(544, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x);
    VL_RAND_RESET_W(544, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y);
    VL_RAND_RESET_W(272, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val = VL_RAND_RESET_I(17);
    VL_RAND_RESET_W(512, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans);
    VL_RAND_RESET_W(512, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans);
    VL_RAND_RESET_W(256, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans = VL_RAND_RESET_I(16);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe = VL_RAND_RESET_I(1);
}
