// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbsg_cordic_sine_cosine_hyperbolic.h"
#include "Vbsg_cordic_sine_cosine_hyperbolic__Syms.h"

//============================================================
// Constructors

Vbsg_cordic_sine_cosine_hyperbolic::Vbsg_cordic_sine_cosine_hyperbolic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbsg_cordic_sine_cosine_hyperbolic__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , ready_i{vlSymsp->TOP.ready_i}
    , val_i{vlSymsp->TOP.val_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , val_o{vlSymsp->TOP.val_o}
    , ang_i{vlSymsp->TOP.ang_i}
    , sinh_o{vlSymsp->TOP.sinh_o}
    , cosh_o{vlSymsp->TOP.cosh_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbsg_cordic_sine_cosine_hyperbolic::Vbsg_cordic_sine_cosine_hyperbolic(const char* _vcname__)
    : Vbsg_cordic_sine_cosine_hyperbolic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbsg_cordic_sine_cosine_hyperbolic::~Vbsg_cordic_sine_cosine_hyperbolic() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
#ifdef VL_DEBUG
void Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_debug_assertions(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);
#endif  // VL_DEBUG
void Vbsg_cordic_sine_cosine_hyperbolic___024root___final(Vbsg_cordic_sine_cosine_hyperbolic___024root* vlSelf);

static void _eval_initial_loop(Vbsg_cordic_sine_cosine_hyperbolic__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_settle(&(vlSymsp->TOP));
        Vbsg_cordic_sine_cosine_hyperbolic___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbsg_cordic_sine_cosine_hyperbolic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbsg_cordic_sine_cosine_hyperbolic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbsg_cordic_sine_cosine_hyperbolic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbsg_cordic_sine_cosine_hyperbolic___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbsg_cordic_sine_cosine_hyperbolic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbsg_cordic_sine_cosine_hyperbolic::final() {
    Vbsg_cordic_sine_cosine_hyperbolic___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbsg_cordic_sine_cosine_hyperbolic::hierName() const { return vlSymsp->name(); }
const char* Vbsg_cordic_sine_cosine_hyperbolic::modelName() const { return "Vbsg_cordic_sine_cosine_hyperbolic"; }
unsigned Vbsg_cordic_sine_cosine_hyperbolic::threads() const { return 1; }
