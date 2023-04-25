// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#include "verilated.h"

#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_static(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_final(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_triggers__stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("bsg_cordic_sine_cosine_hyperbolic.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___stl_sequent__TOP__0(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    IData/*31:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0;
    VlWide<3>/*95:0*/ __Vtemp_h44496e3d__0;
    VlWide<5>/*159:0*/ __Vtemp_h48d73a8b__0;
    VlWide<7>/*223:0*/ __Vtemp_h61d28071__0;
    VlWide<9>/*287:0*/ __Vtemp_hac73fd22__0;
    VlWide<11>/*351:0*/ __Vtemp_hcfc3bb1f__0;
    VlWide<13>/*415:0*/ __Vtemp_h297894d1__0;
    // Body
    vlSelf->sinh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x14U];
    vlSelf->cosh_o = vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x14U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0x7ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans 
        = ((0x3ffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans) 
           | (0xc0000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val));
    __Vtemp_h44496e3d__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fffffU 
                                                          & ((0x40000000U 
                                                              & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                              ? 
                                                             ((IData)(0x26c0eU) 
                                                              + 
                                                              ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                << 0x16U) 
                                                               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                  >> 0xaU)))
                                                              : 
                                                             (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                << 0x16U) 
                                                               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                  >> 0xaU)) 
                                                              - (IData)(0x26c0eU)))))) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            (0x1fffffU 
                                                             & ((0x200U 
                                                                 & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                                 ? 
                                                                ((IData)(0x2c548U) 
                                                                 + 
                                                                 ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                     >> 0x15U)))
                                                                 : 
                                                                (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                   << 0xbU) 
                                                                  | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                     >> 0x15U)) 
                                                                 - (IData)(0x2c548U)))))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             (0x1fffffU 
                                                              & ((0x100000U 
                                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                                  ? 
                                                                 ((IData)(0x31e41U) 
                                                                  + 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                                  : 
                                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                  - (IData)(0x31e41U)))))))));
    __Vtemp_h44496e3d__0[1U] = ((((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                   ? ((IData)(0x21252U) 
                                      + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                          << 1U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                          >> 0x1fU)))
                                   : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                        << 1U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                  >> 0x1fU)) 
                                      - (IData)(0x21252U))) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x1fffffU 
                                                                         & ((0x40000000U 
                                                                             & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                                             ? 
                                                                            ((IData)(0x26c0eU) 
                                                                             + 
                                                                             ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                               << 0x16U) 
                                                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                                >> 0xaU)))
                                                                             : 
                                                                            (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                               << 0x16U) 
                                                                              | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                                >> 0xaU)) 
                                                                             - (IData)(0x26c0eU)))))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (0x1fffffU 
                                                                            & ((0x200U 
                                                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])
                                                                                ? 
                                                                               ((IData)(0x2c548U) 
                                                                                + 
                                                                                ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                                >> 0x15U)))
                                                                                : 
                                                                               (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                                >> 0x15U)) 
                                                                                - (IData)(0x2c548U)))))) 
                                                           << 0x15U) 
                                                          | (QData)((IData)(
                                                                            (0x1fffffU 
                                                                             & ((0x100000U 
                                                                                & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                                                 ? 
                                                                                ((IData)(0x31e41U) 
                                                                                + 
                                                                                vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])
                                                                                 : 
                                                                                (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U] 
                                                                                - (IData)(0x31e41U)))))))) 
                                                      >> 0x20U)));
    __Vtemp_h48d73a8b__0[3U] = ((((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                   ? ((IData)(0xf913U) 
                                      + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                          << 2U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                          >> 0x1eU)))
                                   : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                        << 2U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                  >> 0x1eU)) 
                                      - (IData)(0xf913U))) 
                                 << 0x1eU) | ((0x3ffffe00U 
                                               & (((0x20000000U 
                                                    & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                    ? 
                                                   ((IData)(0x15aa1U) 
                                                    + 
                                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                        >> 9U)))
                                                    : 
                                                   (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                        >> 9U)) 
                                                    - (IData)(0x15aa1U))) 
                                                  << 9U)) 
                                              | (0x1ffU 
                                                 & (((0x100U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
                                                      ? 
                                                     ((IData)(0x1b78cU) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                        << 0xcU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                          >> 0x14U)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                        << 0xcU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                          >> 0x14U)) 
                                                      - (IData)(0x1b78cU))) 
                                                    >> 0xcU))));
    __Vtemp_h61d28071__0[5U] = ((((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                   ? ((IData)(0x202bU) 
                                      + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                          << 3U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                          >> 0x1dU)))
                                   : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                        << 3U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                  >> 0x1dU)) 
                                      - (IData)(0x202bU))) 
                                 << 0x1dU) | ((0x1fffff00U 
                                               & (((0x10000000U 
                                                    & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                    ? 
                                                   ((IData)(0x4162U) 
                                                    + 
                                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                        >> 8U)))
                                                    : 
                                                   (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                        >> 8U)) 
                                                    - (IData)(0x4162U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (((0x80U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
                                                      ? 
                                                     ((IData)(0x8c9fU) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                        << 0xdU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                          >> 0x13U)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                        << 0xdU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                          >> 0x13U)) 
                                                      - (IData)(0x8c9fU))) 
                                                    >> 0xdU))));
    __Vtemp_hac73fd22__0[7U] = ((((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                   ? ((IData)(0x800U) 
                                      + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                          << 4U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                          >> 0x1cU)))
                                   : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                        << 4U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                  >> 0x1cU)) 
                                      - (IData)(0x800U))) 
                                 << 0x1cU) | ((0xfffff80U 
                                               & (((0x8000000U 
                                                    & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                    ? 
                                                   ((IData)(0x1005U) 
                                                    + 
                                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      << 0x19U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                        >> 7U)))
                                                    : 
                                                   (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                      << 0x19U) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                        >> 7U)) 
                                                    - (IData)(0x1005U))) 
                                                  << 7U)) 
                                              | (0x7fU 
                                                 & (((0x40U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
                                                      ? 
                                                     ((IData)(0x1005U) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                        << 0xeU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                          >> 0x12U)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                        << 0xeU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                          >> 0x12U)) 
                                                      - (IData)(0x1005U))) 
                                                    >> 0xeU))));
    __Vtemp_hcfc3bb1f__0[9U] = ((((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                   ? ((IData)(0x100U) 
                                      + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                          << 5U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                          >> 0x1bU)))
                                   : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                        << 5U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                  >> 0x1bU)) 
                                      - (IData)(0x100U))) 
                                 << 0x1bU) | ((0x7ffffc0U 
                                               & (((0x4000000U 
                                                    & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                    ? 
                                                   ((IData)(0x200U) 
                                                    + 
                                                    ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                        >> 6U)))
                                                    : 
                                                   (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                        >> 6U)) 
                                                    - (IData)(0x200U))) 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (((0x20U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
                                                      ? 
                                                     ((IData)(0x400U) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                        << 0xfU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                          >> 0x11U)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                                        << 0xfU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                          >> 0x11U)) 
                                                      - (IData)(0x400U))) 
                                                    >> 0xfU))));
    __Vtemp_h297894d1__0[0xbU] = ((((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                     ? ((IData)(0x20U) 
                                        + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                            << 6U) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                              >> 0x1aU)))
                                     : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                          << 6U) | 
                                         (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                                        - (IData)(0x20U))) 
                                   << 0x1aU) | ((0x3ffffe0U 
                                                 & (((0x2000000U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                      ? 
                                                     ((IData)(0x40U) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                          >> 5U)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                          >> 5U)) 
                                                      - (IData)(0x40U))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (((0x10U 
                                                        & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                        ? 
                                                       ((IData)(0x80U) 
                                                        + 
                                                        ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                          << 0x10U) 
                                                         | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                            >> 0x10U)))
                                                        : 
                                                       (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                          << 0x10U) 
                                                         | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                            >> 0x10U)) 
                                                        - (IData)(0x80U))) 
                                                      >> 0x10U))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0U] 
        = __Vtemp_h44496e3d__0[0U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[1U] 
        = __Vtemp_h44496e3d__0[1U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[2U] 
        = ((((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])
              ? ((IData)(0x1b78cU) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                       << 0xcU) | (
                                                   vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                                   >> 0x14U)))
              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                   << 0xcU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                               >> 0x14U)) - (IData)(0x1b78cU))) 
            << 0x14U) | (0xfffffU & (((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])
                                       ? ((IData)(0x21252U) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                              << 1U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                                >> 0x1fU)))
                                       : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U] 
                                            << 1U) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U] 
                                              >> 0x1fU)) 
                                          - (IData)(0x21252U))) 
                                     >> 1U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[3U] 
        = __Vtemp_h48d73a8b__0[3U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[4U] 
        = ((((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])
              ? ((IData)(0x8c9fU) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                      << 0xdU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                                  >> 0x13U)))
              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                   << 0xdU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                               >> 0x13U)) - (IData)(0x8c9fU))) 
            << 0x13U) | (0x7ffffU & (((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])
                                       ? ((IData)(0xf913U) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                              << 2U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                                >> 0x1eU)))
                                       : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U] 
                                            << 2U) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U] 
                                              >> 0x1eU)) 
                                          - (IData)(0xf913U))) 
                                     >> 2U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[5U] 
        = __Vtemp_h61d28071__0[5U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[6U] 
        = ((((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])
              ? ((IData)(0x1005U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                      << 0xeU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                                  >> 0x12U)))
              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                   << 0xeU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                               >> 0x12U)) - (IData)(0x1005U))) 
            << 0x12U) | (0x3ffffU & (((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])
                                       ? ((IData)(0x202bU) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                              << 3U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                                >> 0x1dU)))
                                       : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U] 
                                            << 3U) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U] 
                                              >> 0x1dU)) 
                                          - (IData)(0x202bU))) 
                                     >> 3U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[7U] 
        = __Vtemp_hac73fd22__0[7U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[8U] 
        = ((((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])
              ? ((IData)(0x400U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                     << 0xfU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                                 >> 0x11U)))
              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                   << 0xfU) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                               >> 0x11U)) - (IData)(0x400U))) 
            << 0x11U) | (0x1ffffU & (((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])
                                       ? ((IData)(0x800U) 
                                          + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                              << 4U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                                >> 0x1cU)))
                                       : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U] 
                                            << 4U) 
                                           | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U] 
                                              >> 0x1cU)) 
                                          - (IData)(0x800U))) 
                                     >> 4U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[9U] 
        = __Vtemp_hcfc3bb1f__0[9U];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xaU] 
        = ((((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
              ? ((IData)(0x80U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                    << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                                 >> 0x10U)))
              : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                   << 0x10U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                >> 0x10U)) - (IData)(0x80U))) 
            << 0x10U) | (0xffffU & (((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])
                                      ? ((IData)(0x100U) 
                                         + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                             << 5U) 
                                            | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                               >> 0x1bU)))
                                      : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU] 
                                           << 5U) | 
                                          (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U] 
                                           >> 0x1bU)) 
                                         - (IData)(0x100U))) 
                                    >> 5U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = __Vtemp_h297894d1__0[0xbU];
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU] 
        = ((0xffff8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU]) 
           | (0x7fffU & (((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                           ? ((IData)(0x20U) + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                 << 6U) 
                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                   >> 0x1aU)))
                           : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                << 6U) | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                          >> 0x1aU)) 
                              - (IData)(0x20U))) >> 6U)));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU] 
        = ((0x3ffffffU & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xbU]) 
           | ((IData)((((QData)((IData)((0x1fffffU 
                                         & ((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                             ? ((IData)(0x10U) 
                                                + (
                                                   (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                    << 0x11U) 
                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                      >> 0xfU)))
                                             : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                  << 0x11U) 
                                                 | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                    >> 0xfU)) 
                                                - (IData)(0x10U)))))) 
                        << 0x15U) | (QData)((IData)(
                                                    (0x1fffffU 
                                                     & ((0x4000U 
                                                         & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                         ? 
                                                        ((IData)(0x10U) 
                                                         + 
                                                         ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                           << 6U) 
                                                          | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                             >> 0x1aU)))
                                                         : 
                                                        (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                           << 6U) 
                                                          | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                             >> 0x1aU)) 
                                                         - (IData)(0x10U)))))))) 
              << 0x1aU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xcU] 
        = (((IData)((((QData)((IData)((0x1fffffU & 
                                       ((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                         ? ((IData)(0x10U) 
                                            + ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                << 0x11U) 
                                               | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                  >> 0xfU)))
                                         : (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                              << 0x11U) 
                                             | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                >> 0xfU)) 
                                            - (IData)(0x10U)))))) 
                      << 0x15U) | (QData)((IData)((0x1fffffU 
                                                   & ((0x4000U 
                                                       & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                       ? 
                                                      ((IData)(0x10U) 
                                                       + 
                                                       ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                         << 6U) 
                                                        | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                           >> 0x1aU)))
                                                       : 
                                                      (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                         << 6U) 
                                                        | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                           >> 0x1aU)) 
                                                       - (IData)(0x10U)))))))) 
            >> 6U) | ((IData)(((((QData)((IData)((0x1fffffU 
                                                  & ((8U 
                                                      & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                                      ? 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                        << 0x11U) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                          >> 0xfU)))
                                                      : 
                                                     (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                        << 0x11U) 
                                                       | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                          >> 0xfU)) 
                                                      - (IData)(0x10U)))))) 
                                 << 0x15U) | (QData)((IData)(
                                                             (0x1fffffU 
                                                              & ((0x4000U 
                                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                                  ? 
                                                                 ((IData)(0x10U) 
                                                                  + 
                                                                  ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                                    << 6U) 
                                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                                      >> 0x1aU)))
                                                                  : 
                                                                 (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                                    << 6U) 
                                                                   | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                                      >> 0x1aU)) 
                                                                  - (IData)(0x10U))))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans[0xdU] 
        = (0xfU & ((IData)(((((QData)((IData)((0x1fffffU 
                                               & ((8U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                       >> 0xfU)))
                                                   : 
                                                  (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU] 
                                                     << 0x11U) 
                                                    | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                       >> 0xfU)) 
                                                   - (IData)(0x10U)))))) 
                              << 0x15U) | (QData)((IData)(
                                                          (0x1fffffU 
                                                           & ((0x4000U 
                                                               & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                               ? 
                                                              ((IData)(0x10U) 
                                                               + 
                                                               ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                                 << 6U) 
                                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                                   >> 0x1aU)))
                                                               : 
                                                              (((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU] 
                                                                 << 6U) 
                                                                | (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU] 
                                                                   >> 0x1aU)) 
                                                               - (IData)(0x10U))))))) 
                            >> 0x20U)) >> 6U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                      ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))
                                      : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                  ? 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU))
                                                  : 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)))))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x13U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                       ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))
                                       : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U], 0xcU))))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                   ? 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU))
                                                   : 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xcU)))))) 
                   >> 0x20U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                      ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))
                                      : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                  ? 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU))
                                                  : 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)))))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x13U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xdU])
                                       ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))
                                       : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x13U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x13U], 0xcU))))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                                   ? 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU))
                                                   : 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xcU)))))) 
                   >> 0x20U));
    vlSelf->val_o = (1U & (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val 
                           >> 0x14U));
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]);
    bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
        = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
           + vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe 
        = ((~ (IData)(vlSelf->ready_i)) & (IData)(vlSelf->val_o));
    if ((0x100000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0U], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__0__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0U], 8U));
    }
    if ((0x200U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[1U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[1U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[1U], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[1U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__1__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[1U], 7U));
    }
    if ((0x40000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[1U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[2U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[2U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[2U], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[2U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__2__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[2U], 6U));
    }
    if ((0x80000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[2U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[3U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[3U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[3U], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[3U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__3__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[3U], 5U));
    }
    if ((0x100U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[4U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[4U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[4U], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[4U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__4__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[4U], 4U));
    }
    if ((0x20000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[3U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[5U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[5U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[5U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[5U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__5__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[5U], 3U));
    }
    if ((0x40000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[4U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[6U] 
            = ((vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U] 
                - vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U]) 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[6U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[6U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[6U] 
            = (bsg_cordic_sine_cosine_hyperbolic__DOT__stage_neg__BRA__6__KET____DOT__cs__DOT____VdfgTmp_hf1a1495c__0 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[6U], 2U));
    }
    if ((0x80U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U], 1U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[7U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[7U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[7U], 1U));
    }
    if ((0x10000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[5U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U], 2U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[8U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[8U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[8U], 2U));
    }
    if ((0x20000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[6U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U], 3U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[9U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[9U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[9U], 3U));
    }
    if ((0x40U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xaU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xaU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xaU], 4U));
    }
    if ((0x8000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[7U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU], 4U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xbU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xbU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xbU], 4U));
    }
    if ((0x10000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[8U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU], 5U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xcU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xcU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xcU], 5U));
    }
    if ((0x20U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU], 6U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xdU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xdU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xdU], 6U));
    }
    if ((0x4000000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[9U])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU], 7U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xeU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xeU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xeU], 7U));
    }
    if ((0x8000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xaU])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU], 8U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0xfU] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0xfU] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0xfU], 8U));
    }
    if ((0x10U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])) {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
               - VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U));
    } else {
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U], 9U));
        vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x10U] 
            = (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x10U] 
               + VL_SHIFTRS_III(32,32,32, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x10U], 9U));
    }
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x11U] 
        = (IData)((((QData)((IData)(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))
                                      : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))))) 
                    << 0x20U) | (QData)((IData)(((0x2000000U 
                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                  ? 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU))
                                                  : 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)))))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans[0x12U] 
        = (IData)(((((QData)((IData)(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                       ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))
                                       : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U], 0xbU))))) 
                     << 0x20U) | (QData)((IData)(((0x2000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                   ? 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU))
                                                   : 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U], 0xaU)))))) 
                   >> 0x20U));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x11U] 
        = (IData)((((QData)((IData)(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                      ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                         - VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))
                                      : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                         + VL_SHIFTRS_III(32,32,32, 
                                                          vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))))) 
                    << 0x20U) | (QData)((IData)(((0x2000000U 
                                                  & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                  ? 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                                  - 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU))
                                                  : 
                                                 (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                                  + 
                                                  VL_SHIFTRS_III(32,32,32, 
                                                                 vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)))))));
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans[0x12U] 
        = (IData)(((((QData)((IData)(((0x4000U & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xcU])
                                       ? (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                          - VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))
                                       : (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x12U] 
                                          + VL_SHIFTRS_III(32,32,32, 
                                                           vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x12U], 0xbU))))) 
                     << 0x20U) | (QData)((IData)(((0x2000000U 
                                                   & vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang[0xbU])
                                                   ? 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                                   - 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU))
                                                   : 
                                                  (vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y[0x11U] 
                                                   + 
                                                   VL_SHIFTRS_III(32,32,32, 
                                                                  vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x[0x11U], 0xaU)))))) 
                   >> 0x20U));
    vlSelf->ready_o = (1U & (~ (IData)(vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe)));
}

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vbsg_cordic_sine_cosine_hyperbolic___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__ico(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__act(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__nba(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___ctor_var_reset(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->ang_i = VL_RAND_RESET_I(21);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->val_i = VL_RAND_RESET_I(1);
    vlSelf->sinh_o = VL_RAND_RESET_I(32);
    vlSelf->cosh_o = VL_RAND_RESET_I(32);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->val_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(672, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x);
    VL_RAND_RESET_W(672, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y);
    VL_RAND_RESET_W(441, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(640, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans);
    VL_RAND_RESET_W(640, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans);
    VL_RAND_RESET_W(420, vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans = VL_RAND_RESET_I(20);
    vlSelf->bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe = VL_RAND_RESET_I(1);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
