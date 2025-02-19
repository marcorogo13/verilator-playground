// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfir__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfir::Vfir(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfir__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , data_in{vlSymsp->TOP.data_in}
    , valid_in{vlSymsp->TOP.valid_in}
    , valid_out{vlSymsp->TOP.valid_out}
    , data_out{vlSymsp->TOP.data_out}
    , __PVT__fir__DOT__multiplier_inst__BRA__10__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__10__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__9__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__9__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__8__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__8__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__7__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__7__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__6__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__6__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__5__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__5__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__4__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__4__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__3__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__3__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__2__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__2__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__1__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__1__KET__}
    , __PVT__fir__DOT__multiplier_inst__BRA__0__KET__{vlSymsp->TOP.__PVT__fir__DOT__multiplier_inst__BRA__0__KET__}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfir::Vfir(const char* _vcname__)
    : Vfir(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfir::~Vfir() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfir___024root___eval_debug_assertions(Vfir___024root* vlSelf);
#endif  // VL_DEBUG
void Vfir___024root___eval_static(Vfir___024root* vlSelf);
void Vfir___024root___eval_initial(Vfir___024root* vlSelf);
void Vfir___024root___eval_settle(Vfir___024root* vlSelf);
void Vfir___024root___eval(Vfir___024root* vlSelf);

void Vfir::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfir::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfir___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfir___024root___eval_static(&(vlSymsp->TOP));
        Vfir___024root___eval_initial(&(vlSymsp->TOP));
        Vfir___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfir___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfir::eventsPending() { return false; }

uint64_t Vfir::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfir::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfir___024root___eval_final(Vfir___024root* vlSelf);

VL_ATTR_COLD void Vfir::final() {
    Vfir___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfir::hierName() const { return vlSymsp->name(); }
const char* Vfir::modelName() const { return "Vfir"; }
unsigned Vfir::threads() const { return 1; }
void Vfir::prepareClone() const { contextp()->prepareClone(); }
void Vfir::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfir::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfir___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfir___024root__trace_init_top(Vfir___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfir___024root*>(voidSelf);
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfir___024root__trace_decl_types(tracep);
    Vfir___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfir___024root__trace_register(Vfir___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfir::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfir::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfir___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
