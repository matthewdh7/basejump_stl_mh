// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_tanh.h for the primary calling header

#include "verilated.h"

#include "Vbsg_tanh__Syms.h"
#include "Vbsg_tanh___024root.h"

void Vbsg_tanh___024root___ctor_var_reset(Vbsg_tanh___024root* vlSelf);

Vbsg_tanh___024root::Vbsg_tanh___024root(Vbsg_tanh__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbsg_tanh___024root___ctor_var_reset(this);
}

void Vbsg_tanh___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbsg_tanh___024root::~Vbsg_tanh___024root() {
}
