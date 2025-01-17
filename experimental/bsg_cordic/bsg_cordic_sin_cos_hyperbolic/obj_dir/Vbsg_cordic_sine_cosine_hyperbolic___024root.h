// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_cordic_sine_cosine_hyperbolic.h for the primary calling header

#ifndef VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC___024ROOT_H_
#define VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC___024ROOT_H_  // guard

#include "verilated.h"

class Vbsg_cordic_sine_cosine_hyperbolic__Syms;
VL_MODULE(Vbsg_cordic_sine_cosine_hyperbolic___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_IN8(val_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(val_o,0,0);
    CData/*0:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__stall_pipe;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
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
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vbsg_cordic_sine_cosine_hyperbolic___024root(const char* name);
    ~Vbsg_cordic_sine_cosine_hyperbolic___024root();
    VL_UNCOPYABLE(Vbsg_cordic_sine_cosine_hyperbolic___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vbsg_cordic_sine_cosine_hyperbolic__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
