// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfir.h for the primary calling header

#ifndef VERILATED_VFIR___024ROOT_H_
#define VERILATED_VFIR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vfir_multiplier;


class Vfir__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfir___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__10__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__9__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__8__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__7__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__6__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__5__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__4__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__3__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__2__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__1__KET__;
    Vfir_multiplier* __PVT__fir__DOT__multiplier_inst__BRA__0__KET__;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(valid_in,0,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(data_out,7,0);
    CData/*7:0*/ fir__DOT__data_out_multiplier;
    CData/*0:0*/ fir__DOT____Vtogcov__clk;
    CData/*0:0*/ fir__DOT____Vtogcov__reset_n;
    CData/*7:0*/ fir__DOT____Vtogcov__data_in;
    CData/*0:0*/ fir__DOT____Vtogcov__valid_in;
    CData/*0:0*/ fir__DOT____Vtogcov__valid_out;
    CData/*7:0*/ fir__DOT____Vtogcov__data_out;
    CData/*7:0*/ fir__DOT____Vtogcov__data_out_adder;
    CData/*7:0*/ fir__DOT____Vtogcov__data_out_multiplier;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ fir__DOT__adder_inst__DOT__sum_temp;
    SData/*8:0*/ fir__DOT__adder_inst__DOT____Vtogcov__sum;
    SData/*8:0*/ fir__DOT__adder_inst__DOT____Vtogcov__sum_temp;
    IData/*31:0*/ fir__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfir__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfir___024root(Vfir__Syms* symsp, const char* v__name);
    ~Vfir___024root();
    VL_UNCOPYABLE(Vfir___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
