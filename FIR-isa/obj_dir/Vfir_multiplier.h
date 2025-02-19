// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfir.h for the primary calling header

#ifndef VERILATED_VFIR_MULTIPLIER_H_
#define VERILATED_VFIR_MULTIPLIER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vfir__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfir_multiplier final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_OUT8(product,7,0);
    CData/*7:0*/ __Vtogcov__product;
    SData/*15:0*/ __PVT__product_temp;
    SData/*15:0*/ __Vtogcov__product_temp;

    // INTERNAL VARIABLES
    Vfir__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfir_multiplier(Vfir__Syms* symsp, const char* v__name);
    ~Vfir_multiplier();
    VL_UNCOPYABLE(Vfir_multiplier);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
