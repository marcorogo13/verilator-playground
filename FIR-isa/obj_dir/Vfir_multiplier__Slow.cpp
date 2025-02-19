// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir__Syms.h"
#include "Vfir_multiplier.h"

void Vfir_multiplier___ctor_var_reset(Vfir_multiplier* vlSelf);

Vfir_multiplier::Vfir_multiplier(Vfir__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfir_multiplier___ctor_var_reset(this);
}

void Vfir_multiplier___configure_coverage(Vfir_multiplier* vlSelf, bool first);

void Vfir_multiplier::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vfir_multiplier___configure_coverage(this, first);
}

Vfir_multiplier::~Vfir_multiplier() {
}

// Coverage
void Vfir_multiplier::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
