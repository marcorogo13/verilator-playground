// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour__pch.h"
#include "Vour__Syms.h"
#include "Vour___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vour___024root___dump_triggers__ico(Vour___024root* vlSelf);
#endif  // VL_DEBUG

void Vour___024root___eval_triggers__ico(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vour___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vour___024root___ico_sequent__TOP__0(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->our__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->our__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->our__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->our__DOT____Vtogcov__reset = vlSelf->reset;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vour___024root___dump_triggers__act(Vour___024root* vlSelf);
#endif  // VL_DEBUG

void Vour___024root___eval_triggers__act(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vour___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vour___024root___nba_sequent__TOP__0(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__our__DOT__count_c;
    __Vdly__our__DOT__count_c = 0;
    // Body
    ++(vlSymsp->__Vcoverage[38]);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[37]);
        if ((0x63U <= vlSelf->our__DOT__count_c)) {
            ++(vlSymsp->__Vcoverage[34]);
        }
        if ((0x63U > vlSelf->our__DOT__count_c)) {
            ++(vlSymsp->__Vcoverage[35]);
        }
    }
    if ((0x1eU == vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[39]);
    }
    if ((0x12cU == vlSelf->our__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[40]);
    }
    __Vdly__our__DOT__count_c = vlSelf->our__DOT__count_c;
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[36]);
    }
    if (vlSelf->reset) {
        __Vdly__our__DOT__count_c = 0U;
    } else {
        __Vdly__our__DOT__count_c = ((IData)(1U) + vlSelf->our__DOT__count_c);
        if (VL_UNLIKELY((0x63U <= vlSelf->our__DOT__count_c))) {
            VL_WRITEF("*-* All Finished *-*\n");
            VL_FINISH_MT("our.sv", 19, "");
        }
    }
    vlSelf->our__DOT__count_c = __Vdly__our__DOT__count_c;
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
