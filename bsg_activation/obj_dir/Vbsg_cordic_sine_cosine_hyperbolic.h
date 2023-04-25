// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC_H_
#define VERILATED_VBSG_CORDIC_SINE_COSINE_HYPERBOLIC_H_  // guard

#include "verilated.h"

class Vbsg_cordic_sine_cosine_hyperbolic__Syms;
class Vbsg_cordic_sine_cosine_hyperbolic___024root;

// This class is the main interface to the Verilated model
class Vbsg_cordic_sine_cosine_hyperbolic VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vbsg_cordic_sine_cosine_hyperbolic__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&ready_i,0,0);
    VL_IN8(&val_i,0,0);
    VL_OUT8(&ready_o,0,0);
    VL_OUT8(&val_o,0,0);
    VL_IN(&ang_i,20,0);
    VL_OUT(&sinh_o,31,0);
    VL_OUT(&cosh_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vbsg_cordic_sine_cosine_hyperbolic___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vbsg_cordic_sine_cosine_hyperbolic(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vbsg_cordic_sine_cosine_hyperbolic(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vbsg_cordic_sine_cosine_hyperbolic();
  private:
    VL_UNCOPYABLE(Vbsg_cordic_sine_cosine_hyperbolic);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
