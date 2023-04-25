// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#ifndef VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC___024ROOT_H_
#define VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC___024ROOT_H_  // guard

#include "verilated.h"

class Vbsg_cordic_sine_cosine_hyperbolic__Syms;

class Vbsg_cordic_sine_cosine_hyperbolic___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    CData/*0:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe;
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(ang_i,20,0);
    VL_OUT(sinh_o,31,0);
    VL_OUT(cosh_o,31,0);
    VlWide<21>/*671:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__x;
    VlWide<21>/*671:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__y;
    VlWide<14>/*440:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__ang;
    IData/*20:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__val;
    VlWide<20>/*639:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans;
    VlWide<20>/*639:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans;
    VlWide<14>/*419:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans;
    IData/*19:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbsg_cordic_sine_cosine_hyperbolic___024root(Vbsg_cordic_sine_cosine_hyperbolic__Syms* symsp, const char* name);
    ~Vbsg_cordic_sine_cosine_hyperbolic___024root();
    VL_UNCOPYABLE(Vbsg_cordic_sine_cosine_hyperbolic___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
