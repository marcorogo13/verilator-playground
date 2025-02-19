// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir__Syms.h"
#include "Vfir___024root.h"

VL_ATTR_COLD void Vfir___024root___eval_static__TOP(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->fir__DOT__count = 0U;
    ++(vlSymsp->__Vcoverage[39]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__stl(Vfir___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfir___024root___eval_triggers__stl(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfir___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vfir___024root___stl_sequent__TOP__0(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->fir__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->fir__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset_n) ^ (IData)(vlSelf->fir__DOT____Vtogcov__reset_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->fir__DOT____Vtogcov__reset_n = vlSelf->reset_n;
    }
    if (((IData)(vlSelf->valid_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__valid_in))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->fir__DOT____Vtogcov__valid_in = vlSelf->valid_in;
    }
    if (((IData)(vlSelf->valid_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__valid_out))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->fir__DOT____Vtogcov__valid_out = vlSelf->valid_out;
    }
    if ((1U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xfeU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (1U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((2U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xfdU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (2U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((4U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xfbU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (4U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((8U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xf7U 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (8U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((0x10U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xefU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((0x20U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xdfU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((0x40U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0xbfU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((0x80U & ((IData)(vlSelf->data_in) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_in)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->fir__DOT____Vtogcov__data_in = ((0x7fU 
                                                 & (IData)(vlSelf->fir__DOT____Vtogcov__data_in)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->data_in)));
    }
    if ((1U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xfeU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((2U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xfdU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((4U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xfbU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((8U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xf7U 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((0x10U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xefU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((0x20U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xdfU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((0x40U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0xbfU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->data_out)));
    }
    if ((0x80U & ((IData)(vlSelf->data_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->fir__DOT____Vtogcov__data_out = ((0x7fU 
                                                  & (IData)(vlSelf->fir__DOT____Vtogcov__data_out)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->data_out)));
    }
    vlSelf->fir__DOT__adder_inst__DOT__sum_temp = (0x1ffU 
                                                   & ((IData)(vlSelf->data_in) 
                                                      + (IData)(vlSelf->data_in)));
    if ((0x100U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                   ^ (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum_temp)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum_temp 
            = ((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum_temp)) 
               | (0x100U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xfeU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (1U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((2U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xfdU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (2U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((4U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xfbU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (4U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((8U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xf7U & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (8U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x10U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xefU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (0x10U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x20U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xdfU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (0x20U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x40U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0xbfU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (0x40U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x80U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->fir__DOT____Vtogcov__data_out_adder 
            = ((0x7fU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_adder)) 
               | (0x80U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)) 
               ^ (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1feU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((0x7fU & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                         >> 1U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                    >> 1U)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1fdU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((0x3fU & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                         >> 2U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                    >> 2U)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1fbU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((0x1fU & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                         >> 3U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                    >> 3U)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1f7U & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((0xfU & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                        >> 4U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1efU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((7U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                      >> 5U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                 >> 5U)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1dfU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((1U & ((3U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                      >> 6U)) ^ ((IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum) 
                                 >> 6U)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x1bfU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x80U & ((IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp) 
                  ^ (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = ((0x17fU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp)));
    }
    if ((0x100U & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum 
            = (0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT____Vtogcov__sum));
    }
}

void Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(Vfir_multiplier* vlSelf);
void Vfir___024root___ico_sequent__TOP__1(Vfir___024root* vlSelf);

VL_ATTR_COLD void Vfir___024root___eval_stl(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfir___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__10__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__9__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__8__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__7__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__6__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__5__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__4__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__3__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__2__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__1__KET__));
        Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0((&vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__));
        Vfir___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vfir___024root___configure_coverage(Vfir___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "fir.sv", 11, 11, ".fir", "v_toggle/fir", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "fir.sv", 12, 11, ".fir", "v_toggle/fir", "reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "fir.sv", 13, 23, ".fir", "v_toggle/fir", "data_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "fir.sv", 14, 11, ".fir", "v_toggle/fir", "valid_in", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "fir.sv", 15, 16, ".fir", "v_toggle/fir", "valid_out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "fir.sv", 16, 28, ".fir", "v_toggle/fir", "data_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "fir.sv", 20, 19, ".fir", "v_toggle/fir", "data_out_adder[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "fir.sv", 21, 19, ".fir", "v_toggle/fir", "data_out_multiplier[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "fir.sv", 44, 5, ".fir", "v_branch/fir", "if", "44-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "fir.sv", 44, 6, ".fir", "v_branch/fir", "else", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "fir.sv", 43, 1, ".fir", "v_line/fir", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "fir.sv", 52, 17, ".fir", "v_line/fir", "block", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "fir.sv", 57, 9, ".fir", "v_branch/fir", "if", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "fir.sv", 57, 10, ".fir", "v_branch/fir", "else", "59-60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "fir.sv", 54, 5, ".fir", "v_branch/fir", "if", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "fir.sv", 54, 6, ".fir", "v_branch/fir", "else", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "fir.sv", 53, 1, ".fir", "v_line/fir", "block", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "adder.sv", 4, 23, ".fir.adder_inst", "v_toggle/adder", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "adder.sv", 5, 23, ".fir.adder_inst", "v_toggle/adder", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "adder.sv", 6, 22, ".fir.adder_inst", "v_toggle/adder", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "adder.sv", 9, 21, ".fir.adder_inst", "v_toggle/adder", "sum_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "register.sv", 2, 11, ".fir.register_inst", "v_toggle/register", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "register.sv", 3, 11, ".fir.register_inst", "v_toggle/register", "reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "register.sv", 4, 23, ".fir.register_inst", "v_toggle/register", "data_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "register.sv", 5, 28, ".fir.register_inst", "v_toggle/register", "data_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "register.sv", 9, 9, ".fir.register_inst", "v_branch/register", "if", "9-10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "register.sv", 9, 10, ".fir.register_inst", "v_branch/register", "else", "11-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "register.sv", 8, 5, ".fir.register_inst", "v_line/register", "block", "8");
}
