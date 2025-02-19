// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFIR_H_
#define VERILATED_VFIR_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vfir__Syms;
class Vfir___024root;
class VerilatedVcdC;
class Vfir_multiplier;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vfir VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vfir__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset_n,0,0);
    VL_IN8(&data_in,7,0);
    VL_IN8(&valid_in,0,0);
    VL_OUT8(&valid_out,0,0);
    VL_OUT8(&data_out,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__10__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__9__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__8__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__7__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__6__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__5__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__4__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__3__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__2__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__1__KET__;
    Vfir_multiplier* const __PVT__fir__DOT__multiplier_inst__BRA__0__KET__;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vfir___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vfir(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vfir(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vfir();
  private:
    VL_UNCOPYABLE(Vfir);  ///< Copying not allowed

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
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
