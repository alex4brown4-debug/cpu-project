// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_SINGLE_CYCLE_TOP__SYMS_H_
#define VERILATED_VCPU_SINGLE_CYCLE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu_single_cycle_top.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_single_cycle_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcpu_single_cycle_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu_single_cycle_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu_single_cycle_top___024root TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_cpu_single_cycle_top__reg_file_i;

    // CONSTRUCTORS
    Vcpu_single_cycle_top__Syms(VerilatedContext* contextp, const char* namep, Vcpu_single_cycle_top* modelp);
    ~Vcpu_single_cycle_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
