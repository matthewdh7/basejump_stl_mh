// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_tanh.h for the primary calling header

#include "verilated.h"

#include "Vbsg_tanh__Syms.h"
#include "Vbsg_tanh___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_tanh___024root___dump_triggers__ico(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_tanh___024root___eval_triggers__ico(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_tanh___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_tanh___024root___dump_triggers__act(Vbsg_tanh___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_tanh___024root___eval_triggers__act(Vbsg_tanh___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_tanh__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_tanh___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_i)));
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_tanh___024root___dump_triggers__act(vlSelf);
    }
#endif
}
