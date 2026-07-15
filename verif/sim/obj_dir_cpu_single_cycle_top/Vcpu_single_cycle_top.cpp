// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_single_cycle_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcpu_single_cycle_top::Vcpu_single_cycle_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_single_cycle_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , halt{vlSymsp->TOP.halt}
    , rvfi_valid{vlSymsp->TOP.rvfi_valid}
    , rvfi_rd_addr{vlSymsp->TOP.rvfi_rd_addr}
    , rvfi_mem_rmask{vlSymsp->TOP.rvfi_mem_rmask}
    , rvfi_mem_wmask{vlSymsp->TOP.rvfi_mem_wmask}
    , pc_out{vlSymsp->TOP.pc_out}
    , instr_out{vlSymsp->TOP.instr_out}
    , rvfi_insn{vlSymsp->TOP.rvfi_insn}
    , rvfi_pc_rdata{vlSymsp->TOP.rvfi_pc_rdata}
    , rvfi_pc_wdata{vlSymsp->TOP.rvfi_pc_wdata}
    , rvfi_rd_wdata{vlSymsp->TOP.rvfi_rd_wdata}
    , rvfi_mem_addr{vlSymsp->TOP.rvfi_mem_addr}
    , rvfi_mem_rdata{vlSymsp->TOP.rvfi_mem_rdata}
    , rvfi_mem_wdata{vlSymsp->TOP.rvfi_mem_wdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcpu_single_cycle_top::Vcpu_single_cycle_top(const char* _vcname__)
    : Vcpu_single_cycle_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_single_cycle_top::~Vcpu_single_cycle_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu_single_cycle_top___024root___eval_debug_assertions(Vcpu_single_cycle_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_single_cycle_top___024root___eval_static(Vcpu_single_cycle_top___024root* vlSelf);
void Vcpu_single_cycle_top___024root___eval_initial(Vcpu_single_cycle_top___024root* vlSelf);
void Vcpu_single_cycle_top___024root___eval_settle(Vcpu_single_cycle_top___024root* vlSelf);
void Vcpu_single_cycle_top___024root___eval(Vcpu_single_cycle_top___024root* vlSelf);

void Vcpu_single_cycle_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_single_cycle_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_single_cycle_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcpu_single_cycle_top___024root___eval_static(&(vlSymsp->TOP));
        Vcpu_single_cycle_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcpu_single_cycle_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcpu_single_cycle_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcpu_single_cycle_top::eventsPending() { return false; }

uint64_t Vcpu_single_cycle_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcpu_single_cycle_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcpu_single_cycle_top___024root___eval_final(Vcpu_single_cycle_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_single_cycle_top::final() {
    contextp()->executingFinal(true);
    Vcpu_single_cycle_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_single_cycle_top::hierName() const { return vlSymsp->name(); }
const char* Vcpu_single_cycle_top::modelName() const { return "Vcpu_single_cycle_top"; }
unsigned Vcpu_single_cycle_top::threads() const { return 1; }
void Vcpu_single_cycle_top::prepareClone() const { contextp()->prepareClone(); }
void Vcpu_single_cycle_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcpu_single_cycle_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcpu_single_cycle_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcpu_single_cycle_top___024root__trace_init_top(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu_single_cycle_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_single_cycle_top___024root*>(voidSelf);
    Vcpu_single_cycle_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcpu_single_cycle_top___024root__trace_decl_types(tracep);
    Vcpu_single_cycle_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_single_cycle_top___024root__trace_register(Vcpu_single_cycle_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_single_cycle_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcpu_single_cycle_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 105);
    Vcpu_single_cycle_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
