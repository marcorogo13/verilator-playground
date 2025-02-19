// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir__Syms.h"
#include "Vfir_multiplier.h"

VL_INLINE_OPT void Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(Vfir_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0\n"); );
    // Body
    vlSelf->__PVT__product_temp = (0xffffU & ((IData)(vlSymsp->TOP.data_in) 
                                              * (IData)(vlSymsp->TOP.data_in)));
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 7U) ^ (IData)(vlSelf->__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->__Vtogcov__product = ((0xfeU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (1U & ((IData)(vlSelf->__PVT__product_temp) 
                                               >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 8U) ^ ((IData)(vlSelf->__Vtogcov__product) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->__Vtogcov__product = ((0xfdU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (2U & ((IData)(vlSelf->__PVT__product_temp) 
                                               >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__product) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->__Vtogcov__product = ((0xfbU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (4U & ((IData)(vlSelf->__PVT__product_temp) 
                                               >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__product) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->__Vtogcov__product = ((0xf7U & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (8U & ((IData)(vlSelf->__PVT__product_temp) 
                                               >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__product) 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->__Vtogcov__product = ((0xefU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (0x10U & ((IData)(vlSelf->__PVT__product_temp) 
                                                  >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 0xcU) ^ ((IData)(vlSelf->__Vtogcov__product) 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->__Vtogcov__product = ((0xdfU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (0x20U & ((IData)(vlSelf->__PVT__product_temp) 
                                                  >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__product) 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->__Vtogcov__product = ((0xbfU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (0x40U & ((IData)(vlSelf->__PVT__product_temp) 
                                                  >> 7U)));
    }
    if ((1U & (((IData)(vlSelf->__PVT__product_temp) 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__product) 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->__Vtogcov__product = ((0x7fU & (IData)(vlSelf->__Vtogcov__product)) 
                                      | (0x80U & ((IData)(vlSelf->__PVT__product_temp) 
                                                  >> 7U)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__product_temp) 
               ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->__Vtogcov__product_temp = ((0xfffeU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (1U & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__product_temp) 
               ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->__Vtogcov__product_temp = ((0xfffdU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (2U & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__product_temp) 
               ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->__Vtogcov__product_temp = ((0xfffbU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (4U & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__product_temp) 
               ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->__Vtogcov__product_temp = ((0xfff7U 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (8U & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__product_temp) 
                  ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->__Vtogcov__product_temp = ((0xffefU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (0x10U 
                                              & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__product_temp) 
                  ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->__Vtogcov__product_temp = ((0xffdfU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (0x20U 
                                              & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__product_temp) 
                  ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->__Vtogcov__product_temp = ((0xffbfU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (0x40U 
                                              & (IData)(vlSelf->__PVT__product_temp)));
    }
    if ((0x8000U & ((IData)(vlSelf->__PVT__product_temp) 
                    ^ (IData)(vlSelf->__Vtogcov__product_temp)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->__Vtogcov__product_temp = ((0x7fffU 
                                            & (IData)(vlSelf->__Vtogcov__product_temp)) 
                                           | (0x8000U 
                                              & (IData)(vlSelf->__PVT__product_temp)));
    }
}
