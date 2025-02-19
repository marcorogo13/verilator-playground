// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfir__pch.h"
#include "Vfir.h"
#include "Vfir___024root.h"
#include "Vfir_multiplier.h"

// FUNCTIONS
Vfir__Syms::~Vfir__Syms()
{
}

Vfir__Syms::Vfir__Syms(VerilatedContext* contextp, const char* namep, Vfir* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__fir__DOT__multiplier_inst__BRA__0__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[0]")}
    , TOP__fir__DOT__multiplier_inst__BRA__10__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[10]")}
    , TOP__fir__DOT__multiplier_inst__BRA__1__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[1]")}
    , TOP__fir__DOT__multiplier_inst__BRA__2__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[2]")}
    , TOP__fir__DOT__multiplier_inst__BRA__3__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[3]")}
    , TOP__fir__DOT__multiplier_inst__BRA__4__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[4]")}
    , TOP__fir__DOT__multiplier_inst__BRA__5__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[5]")}
    , TOP__fir__DOT__multiplier_inst__BRA__6__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[6]")}
    , TOP__fir__DOT__multiplier_inst__BRA__7__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[7]")}
    , TOP__fir__DOT__multiplier_inst__BRA__8__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[8]")}
    , TOP__fir__DOT__multiplier_inst__BRA__9__KET__{this, Verilated::catName(namep, "fir.multiplier_inst[9]")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__0__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__0__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__10__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__10__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__1__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__1__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__2__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__2__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__3__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__3__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__4__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__4__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__5__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__5__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__6__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__6__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__7__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__7__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__8__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__8__KET__;
    TOP.__PVT__fir__DOT__multiplier_inst__BRA__9__KET__ = &TOP__fir__DOT__multiplier_inst__BRA__9__KET__;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__Vconfigure(true);
    TOP__fir__DOT__multiplier_inst__BRA__10__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__1__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__2__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__3__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__4__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__5__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__6__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__7__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__8__KET__.__Vconfigure(false);
    TOP__fir__DOT__multiplier_inst__BRA__9__KET__.__Vconfigure(false);
}
