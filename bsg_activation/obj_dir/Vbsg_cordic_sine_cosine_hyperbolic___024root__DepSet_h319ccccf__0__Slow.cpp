// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#include "verilated.h"

#include "Vbsg_cordic_sine_cosine_hyperbolic__Syms.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_triggers__stl(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_cordic_sine_cosine_hyperbolic___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
