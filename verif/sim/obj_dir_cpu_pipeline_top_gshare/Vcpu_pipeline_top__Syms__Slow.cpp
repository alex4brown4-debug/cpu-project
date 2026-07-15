// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu_pipeline_top__pch.h"

Vcpu_pipeline_top__Syms::Vcpu_pipeline_top__Syms(VerilatedContext* contextp, const char* namep, Vcpu_pipeline_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1884);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_cpu_pipeline_top__reg_file_i = new VerilatedScope{this, "cpu_pipeline_top.reg_file_i", "reg_file_i", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_cpu_pipeline_top__reg_file_i->varInsert("regs", &(TOP.cpu_pipeline_top__DOT__reg_file_i__DOT__regs), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RD|VLVF_CONTINUOUSLY, 1, 1 ,0,31 ,31,0);
}

Vcpu_pipeline_top__Syms::~Vcpu_pipeline_top__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_cpu_pipeline_top__reg_file_i, __Vscopep_cpu_pipeline_top__reg_file_i = nullptr);
    // Tear down sub module instances
}
