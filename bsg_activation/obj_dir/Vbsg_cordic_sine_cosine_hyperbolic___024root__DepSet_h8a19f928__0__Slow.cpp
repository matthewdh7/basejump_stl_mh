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
    vlSelf->cosh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x14U];
    vlSelf->sinh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x14U];
    vlSelf->val_o = (1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                           >> 0x14U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffffeU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (1U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                            ? 1U : 0U) ? ((IData)(0x31e41U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                              - (IData)(0x31e41U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffffdU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (2U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffffbU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (4U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffff7U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffefU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffdfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfffbfU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfff7fU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffeffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                            ? 1U : 0U) ? ((IData)(0x4162U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                              - (IData)(0x4162U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffdffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xffbffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x400U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xff7ffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x800U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfefffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x1000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfdfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x2000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xfbfffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xf7fffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xeffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
        = ((0xfff00000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU]) 
           | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                            ? 1U : 0U) ? ((IData)(0x80U) 
                                          + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                           : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                              - (IData)(0x80U)))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xdffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xbffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0xbffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x7ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
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
    vlSelf->ang_i = VL_RAND_RESET_I(20);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->val_i = VL_RAND_RESET_I(1);
    vlSelf->sinh_o = VL_RAND_RESET_I(32);
    vlSelf->cosh_o = VL_RAND_RESET_I(32);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->val_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(672, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x);
    VL_RAND_RESET_W(672, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y);
    VL_RAND_RESET_W(420, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(640, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans);
    VL_RAND_RESET_W(640, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans);
    VL_RAND_RESET_W(400, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans = VL_RAND_RESET_I(20);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe = VL_RAND_RESET_I(1);
}
