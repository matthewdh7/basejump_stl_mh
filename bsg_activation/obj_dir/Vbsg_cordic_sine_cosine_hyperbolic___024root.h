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
    VL_IN16(ang_i,15,0);
    VlWide<9>/*271:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__ang;
    VlWide<8>/*255:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__ang_ans;
    SData/*15:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__val_ans;
    VL_OUT(sinh_o,31,0);
    VL_OUT(cosh_o,31,0);
    VlWide<17>/*543:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__x;
    VlWide<17>/*543:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__y;
    IData/*16:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__val;
    VlWide<16>/*511:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__x_ans;
    VlWide<16>/*511:0*/ bsg_cordic_sine_cosine_hyperbolic__DOT__y_ans;

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
