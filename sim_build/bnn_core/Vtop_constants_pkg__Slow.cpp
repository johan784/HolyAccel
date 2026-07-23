// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_constants_pkg
constexpr IData/*31:0*/ Vtop_constants_pkg::TOTAL_WORDS;
constexpr IData/*31:0*/ Vtop_constants_pkg::ACCUM_WIDTH;
constexpr IData/*31:0*/ Vtop_constants_pkg::WORD_WIDTH;
constexpr IData/*31:0*/ Vtop_constants_pkg::NUM_PE;


void Vtop_constants_pkg___ctor_var_reset(Vtop_constants_pkg* vlSelf);

void Vtop_constants_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_constants_pkg___ctor_var_reset(this);
}

void Vtop_constants_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_constants_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
