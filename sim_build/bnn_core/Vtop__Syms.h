// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_constants_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_constants_pkg             TOP__constants_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_bnn_core;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__0__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__0__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__1__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__1__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__2__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__2__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__3__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__3__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__4__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__4__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__5__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__5__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__6__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__6__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__7__KET__;
    VerilatedScope* __Vscopep_bnn_core__pe_array__BRA__7__KET____pe;
    VerilatedScope* __Vscopep_bnn_core__unnamedblk1;
    VerilatedScope* __Vscopep_bnn_core__unnamedblk2;
    VerilatedScope* __Vscopep_constants_pkg;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
