// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour__pch.h"
#include "Vour__Syms.h"
#include "Vour___024root.h"

VL_ATTR_COLD void Vour___024root___eval_initial__TOP(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_initial__TOP\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[47]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vour___024root___dump_triggers__stl(Vour___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vour___024root___eval_triggers__stl(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vour___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vour___024root___stl_sequent__TOP__0(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x32U == vlSelf->our__DOT__count_c))) {
        VL_WRITEF("[%0t] got 50\n",64,VL_TIME_UNITED_Q(1),
                  -12);
    }
    if (VL_UNLIKELY((0x1f4U == vlSelf->our__DOT__count_c))) {
        VL_WRITEF("[%0t] got 600\n",64,VL_TIME_UNITED_Q(1),
                  -12);
    }
    if ((0x1f4U == vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[45]);
    }
    if ((0x32U == vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[43]);
    }
    if ((0x32U != vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[44]);
    }
    if ((0x1f4U != vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[46]);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->our__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->our__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->our__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->our__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((0x32U == vlSelf->our__DOT__count_c) ^ (IData)(vlSelf->our__DOT____Vtogcov__count_hit_50))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->our__DOT____Vtogcov__count_hit_50 = 
            (0x32U == vlSelf->our__DOT__count_c);
    }
    if (((0x1f4U == vlSelf->our__DOT__count_c) ^ (IData)(vlSelf->our__DOT____Vtogcov__count_hit_500))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->our__DOT____Vtogcov__count_hit_500 
            = (0x1f4U == vlSelf->our__DOT__count_c);
    }
    if ((1U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffffeU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (1U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((2U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffffdU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (2U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((4U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffffbU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (4U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((8U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffff7U 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (8U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x10U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffffefU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x10U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x20U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffffdfU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x20U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x40U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffffbfU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x40U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x80U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffff7fU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x80U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x100U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffeffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x100U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x200U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffdffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x200U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x400U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffffbffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x400U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x800U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffff7ffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x800U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x1000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffefffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x1000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x2000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffdfffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x2000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x4000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffffbfffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x4000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x8000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffff7fffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x8000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x10000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffeffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x10000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x20000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffdffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x20000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x40000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfffbffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x40000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x80000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfff7ffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x80000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x100000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffefffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x100000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x200000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffdfffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x200000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x400000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xffbfffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x400000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x800000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xff7fffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x800000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x1000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfeffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x1000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x2000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfdffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x2000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x4000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xfbffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x4000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x8000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xf7ffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x8000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x10000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xefffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x10000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x20000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xdfffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x20000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if ((0x40000000U & (vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0xbfffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x40000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
    if (((vlSelf->our__DOT__count_c ^ vlSelf->our__DOT____Vtogcov__count_c) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->our__DOT____Vtogcov__count_c = ((0x7fffffffU 
                                                 & vlSelf->our__DOT____Vtogcov__count_c) 
                                                | (0x80000000U 
                                                   & vlSelf->our__DOT__count_c));
    }
}

VL_ATTR_COLD void Vour___024root___configure_coverage(Vour___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "our.sv", 5, 16, ".our", "v_toggle/our", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "our.sv", 6, 16, ".our", "v_toggle/our", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "our.sv", 9, 15, ".our", "v_toggle/our", "count_c[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "our.sv", 17, 3, ".our", "v_branch/our", "if", "17-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "our.sv", 17, 4, ".our", "v_branch/our", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "our.sv", 12, 7, ".our", "v_branch/our", "if", "12-13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "our.sv", 12, 8, ".our", "v_branch/our", "else", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "our.sv", 10, 4, ".our", "v_line/our", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "our.sv", 25, 4, ".our", "v_user/our", "cover", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "our.sv", 26, 4, ".our", "v_user/our", "cover", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "our.sv", 29, 9, ".our", "v_toggle/our", "count_hit_50", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "our.sv", 30, 9, ".our", "v_toggle/our", "count_hit_500", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "our.sv", 37, 7, ".our", "v_branch/our", "if", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "our.sv", 37, 8, ".our", "v_branch/our", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "our.sv", 40, 7, ".our", "v_branch/our", "if", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "our.sv", 40, 8, ".our", "v_branch/our", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "our.sv", 36, 4, ".our", "v_line/our", "block", "36");
}
