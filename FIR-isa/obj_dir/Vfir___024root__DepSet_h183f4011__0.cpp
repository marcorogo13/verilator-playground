// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir__Syms.h"
#include "Vfir___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__ico(Vfir___024root* vlSelf);
#endif  // VL_DEBUG

void Vfir___024root___eval_triggers__ico(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfir___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfir___024root___ico_sequent__TOP__0(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___ico_sequent__TOP__0\n"); );
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

VL_INLINE_OPT void Vfir___024root___ico_sequent__TOP__1(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->fir__DOT__data_out_multiplier = (0xffU 
                                             & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__PVT__product_temp) 
                                                >> 7U));
    if ((1U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xfeU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (1U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((2U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xfdU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (2U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((4U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xfbU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (4U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((8U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
               ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xf7U & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (8U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((0x10U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xefU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (0x10U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((0x20U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xdfU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (0x20U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((0x40U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0xbfU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (0x40U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
    if ((0x80U & ((IData)(vlSelf->fir__DOT__data_out_multiplier) 
                  ^ (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->fir__DOT____Vtogcov__data_out_multiplier 
            = ((0x7fU & (IData)(vlSelf->fir__DOT____Vtogcov__data_out_multiplier)) 
               | (0x80U & (IData)(vlSelf->fir__DOT__data_out_multiplier)));
    }
}

void Vfir_multiplier___ico_sequent__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(Vfir_multiplier* vlSelf);

void Vfir___024root___eval_ico(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vfir___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__act(Vfir___024root* vlSelf);
#endif  // VL_DEBUG

void Vfir___024root___eval_triggers__act(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfir___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfir___024root___nba_sequent__TOP__0(Vfir___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___nba_sequent__TOP__0\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[38]);
    ++(vlSymsp->__Vcoverage[44]);
    ++(vlSymsp->__Vcoverage[57]);
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        ++(vlSymsp->__Vcoverage[36]);
        ++(vlSymsp->__Vcoverage[42]);
        ++(vlSymsp->__Vcoverage[55]);
    }
    if (vlSelf->reset_n) {
        ++(vlSymsp->__Vcoverage[37]);
        ++(vlSymsp->__Vcoverage[43]);
        ++(vlSymsp->__Vcoverage[56]);
        if (VL_GTS_III(32, 0x64U, vlSelf->fir__DOT__count)) {
            ++(vlSymsp->__Vcoverage[40]);
        }
        if (VL_LTES_III(32, 0x64U, vlSelf->fir__DOT__count)) {
            ++(vlSymsp->__Vcoverage[41]);
        }
    }
    if (vlSelf->reset_n) {
        if (VL_LIKELY(VL_GTS_III(32, 0x64U, vlSelf->fir__DOT__count))) {
            vlSelf->fir__DOT__count = ((IData)(1U) 
                                       + vlSelf->fir__DOT__count);
        } else {
            VL_FINISH_MT("fir.sv", 60, "");
        }
    } else {
        vlSelf->fir__DOT__count = 0U;
    }
    vlSelf->data_out = ((IData)(vlSelf->reset_n) ? (IData)(vlSelf->data_in)
                         : 0U);
    vlSelf->valid_out = ((IData)(vlSelf->reset_n) && (IData)(vlSelf->valid_in));
    if (((IData)(vlSelf->valid_out) ^ (IData)(vlSelf->fir__DOT____Vtogcov__valid_out))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->fir__DOT____Vtogcov__valid_out = vlSelf->valid_out;
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
}
