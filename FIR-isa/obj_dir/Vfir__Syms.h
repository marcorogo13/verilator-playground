// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIR__SYMS_H_
#define VERILATED_VFIR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfir.h"

// INCLUDE MODULE CLASSES
#include "Vfir___024root.h"
#include "Vfir_multiplier.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfir__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfir* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfir___024root                 TOP;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__0__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__10__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__1__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__2__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__3__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__4__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__5__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__6__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__7__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__8__KET__;
    Vfir_multiplier                TOP__fir__DOT__multiplier_inst__BRA__9__KET__;

    // COVERAGE
    uint32_t __Vcoverage[74];

    // CONSTRUCTORS
    Vfir__Syms(VerilatedContext* contextp, const char* namep, Vfir* modelp);
    ~Vfir__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
