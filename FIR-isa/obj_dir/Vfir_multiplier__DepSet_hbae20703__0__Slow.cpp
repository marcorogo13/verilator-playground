// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir__Syms.h"
#include "Vfir_multiplier.h"

VL_ATTR_COLD void Vfir_multiplier___configure_coverage(Vfir_multiplier* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfir_multiplier___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "multiplier.sv", 2, 23, "", "v_toggle/multiplier", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "multiplier.sv", 3, 23, "", "v_toggle/multiplier", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "multiplier.sv", 4, 24, "", "v_toggle/multiplier", "product[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "multiplier.sv", 7, 25, "", "v_toggle/multiplier", "product_temp[15]", "");
}
