// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfir__Syms.h"


void Vfir___024root__trace_chg_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfir___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_chg_0\n"); );
    // Init
    Vfir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir___024root*>(voidSelf);
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfir___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfir___024root__trace_chg_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp))),8);
        bufp->chgCData(oldp+1,(vlSelf->fir__DOT__data_out_multiplier),8);
        bufp->chgSData(oldp+2,((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp))),9);
        bufp->chgSData(oldp+3,(vlSelf->fir__DOT__adder_inst__DOT__sum_temp),9);
        bufp->chgCData(oldp+4,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__10__KET__.__PVT__product_temp) 
                                         >> 7U))),8);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__10__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+6,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__9__KET__.__PVT__product_temp) 
                                         >> 7U))),8);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__9__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__8__KET__.__PVT__product_temp) 
                                         >> 7U))),8);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__8__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+10,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__7__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__7__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+12,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__6__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+13,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__6__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+14,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__5__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+15,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__5__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+16,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__4__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+17,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__4__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+18,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__3__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+19,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__3__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+20,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__2__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+21,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__2__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+22,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__1__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+23,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__1__KET__.__PVT__product_temp),16);
        bufp->chgCData(oldp+24,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__PVT__product_temp) 
                                          >> 7U))),8);
        bufp->chgSData(oldp+25,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__PVT__product_temp),16);
    }
    bufp->chgBit(oldp+26,(vlSelf->clk));
    bufp->chgBit(oldp+27,(vlSelf->reset_n));
    bufp->chgCData(oldp+28,(vlSelf->data_in),8);
    bufp->chgBit(oldp+29,(vlSelf->valid_in));
    bufp->chgBit(oldp+30,(vlSelf->valid_out));
    bufp->chgCData(oldp+31,(vlSelf->data_out),8);
    bufp->chgIData(oldp+32,(vlSelf->fir__DOT__count),32);
}

void Vfir___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_cleanup\n"); );
    // Init
    Vfir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir___024root*>(voidSelf);
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
