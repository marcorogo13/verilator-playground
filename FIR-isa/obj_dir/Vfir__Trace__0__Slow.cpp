// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfir__Syms.h"


VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__0__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__1__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__2__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__3__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__4__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__5__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__6__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__7__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__8__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__9__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"COEFF_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+36,0,"COEFFICIENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"data_out_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"data_out_multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("multiplier_inst[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__0__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__1__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__2__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__3__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__4__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__5__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__6__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__7__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__8__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier_inst[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__9__KET____0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+33,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("adder_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+4,0,"sum_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__10__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__9__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__9__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__8__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__8__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__7__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__7__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__6__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__6__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__5__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__5__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__4__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__4__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__3__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__3__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__2__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__2__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__1__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__0__KET____0(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_sub__TOP__fir__DOT__multiplier_inst__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"product_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vfir___024root__trace_init_top(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_init_top\n"); );
    // Body
    Vfir___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfir___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfir___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfir___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfir___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfir___024root__trace_register(Vfir___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfir___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfir___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfir___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfir___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfir___024root__trace_const_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfir___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_const_0\n"); );
    // Init
    Vfir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir___024root*>(voidSelf);
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfir___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfir___024root__trace_const_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+34,(8U),32);
    bufp->fullIData(oldp+35,(0xbU),32);
    __Vtemp_1[0U] = 0x8090a0bU;
    __Vtemp_1[1U] = 0x4050607U;
    __Vtemp_1[2U] = 0x10203U;
    bufp->fullWData(oldp+36,(__Vtemp_1),88);
}

VL_ATTR_COLD void Vfir___024root__trace_full_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfir___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_full_0\n"); );
    // Init
    Vfir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir___024root*>(voidSelf);
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfir___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfir___024root__trace_full_0_sub_0(Vfir___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp))),8);
    bufp->fullCData(oldp+2,(vlSelf->fir__DOT__data_out_multiplier),8);
    bufp->fullSData(oldp+3,((0xffU & (IData)(vlSelf->fir__DOT__adder_inst__DOT__sum_temp))),9);
    bufp->fullSData(oldp+4,(vlSelf->fir__DOT__adder_inst__DOT__sum_temp),9);
    bufp->fullCData(oldp+5,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__10__KET__.__PVT__product_temp) 
                                      >> 7U))),8);
    bufp->fullSData(oldp+6,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__10__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+7,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__9__KET__.__PVT__product_temp) 
                                      >> 7U))),8);
    bufp->fullSData(oldp+8,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__9__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__8__KET__.__PVT__product_temp) 
                                      >> 7U))),8);
    bufp->fullSData(oldp+10,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__8__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+11,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__7__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__7__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+13,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__6__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+14,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__6__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+15,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__5__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+16,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__5__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+17,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__4__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+18,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__4__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+19,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__3__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+20,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__3__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+21,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__2__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+22,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__2__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+23,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__1__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+24,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__1__KET__.__PVT__product_temp),16);
    bufp->fullCData(oldp+25,((0xffU & ((IData)(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__PVT__product_temp) 
                                       >> 7U))),8);
    bufp->fullSData(oldp+26,(vlSymsp->TOP__fir__DOT__multiplier_inst__BRA__0__KET__.__PVT__product_temp),16);
    bufp->fullBit(oldp+27,(vlSelf->clk));
    bufp->fullBit(oldp+28,(vlSelf->reset_n));
    bufp->fullCData(oldp+29,(vlSelf->data_in),8);
    bufp->fullBit(oldp+30,(vlSelf->valid_in));
    bufp->fullBit(oldp+31,(vlSelf->valid_out));
    bufp->fullCData(oldp+32,(vlSelf->data_out),8);
    bufp->fullIData(oldp+33,(vlSelf->fir__DOT__count),32);
}
