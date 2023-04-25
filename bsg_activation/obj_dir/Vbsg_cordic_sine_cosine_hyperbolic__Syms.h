// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC__SYMS_H_
#define VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbsg_cordic_sine_cosine_hyperbolic.h"

// INCLUDE MODULE CLASSES
#include "Vbsg_cordic_sine_cosine_hyperbolic___024root.h"

// SYMS CLASS (contains all model state)
class Vbsg_cordic_sine_cosine_hyperbolic__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbsg_cordic_sine_cosine_hyperbolic* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbsg_cordic_sine_cosine_hyperbolic___024root TOP;

    // CONSTRUCTORS
    Vbsg_cordic_sine_cosine_hyperbolic__Syms(VerilatedContext* contextp, const char* namep, Vbsg_cordic_sine_cosine_hyperbolic* modelp);
    ~Vbsg_cordic_sine_cosine_hyperbolic__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
