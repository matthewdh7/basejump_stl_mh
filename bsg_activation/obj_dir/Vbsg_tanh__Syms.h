// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBSG_TANH__SYMS_H_
#define VERILATED_VBSG_TANH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbsg_tanh.h"

// INCLUDE MODULE CLASSES
#include "Vbsg_tanh___024root.h"

// SYMS CLASS (contains all model state)
class Vbsg_tanh__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbsg_tanh* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbsg_tanh___024root            TOP;

    // CONSTRUCTORS
    Vbsg_tanh__Syms(VerilatedContext* contextp, const char* namep, Vbsg_tanh* modelp);
    ~Vbsg_tanh__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
