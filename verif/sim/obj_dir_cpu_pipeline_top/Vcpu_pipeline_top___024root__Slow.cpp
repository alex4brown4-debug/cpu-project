// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_pipeline_top.h for the primary calling header

#include "Vcpu_pipeline_top__pch.h"

void Vcpu_pipeline_top___024root___ctor_var_reset(Vcpu_pipeline_top___024root* vlSelf);

Vcpu_pipeline_top___024root::Vcpu_pipeline_top___024root(Vcpu_pipeline_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcpu_pipeline_top___024root___ctor_var_reset(this);
}

void Vcpu_pipeline_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_pipeline_top___024root::~Vcpu_pipeline_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
