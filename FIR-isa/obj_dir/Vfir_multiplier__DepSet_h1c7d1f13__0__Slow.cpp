// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir_multiplier.h"

VL_ATTR_COLD void Vfir_multiplier___ctor_var_reset(Vfir_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfir_multiplier___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->product = VL_RAND_RESET_I(8);
    vlSelf->__PVT__product_temp = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__product = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__product_temp = VL_RAND_RESET_I(16);
}
