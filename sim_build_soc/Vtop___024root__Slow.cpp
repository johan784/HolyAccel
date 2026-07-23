// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_COUNTERS;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_COUNTERS64;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_REGS_16_31;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_REGS_DUALPORT;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__LATCHED_MEM_RDATA;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TWO_STAGE_SHIFT;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__BARREL_SHIFTER;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TWO_CYCLE_COMPARE;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TWO_CYCLE_ALU;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__COMPRESSED_ISA;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__CATCH_MISALIGN;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__CATCH_ILLINSN;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_PCPI;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_MUL;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_FAST_MUL;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_DIV;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_IRQ;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_IRQ_QREGS;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_IRQ_TIMER;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__ENABLE_TRACE;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__REGS_INIT_ZERO;
constexpr CData/*0:0*/ Vtop___024root::top_soc__DOT__uut__DOT__WITH_PCPI;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_trap;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_fetch;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_ld_rs1;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_ld_rs2;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_exec;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_shift;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_stmem;
constexpr CData/*7:0*/ Vtop___024root::top_soc__DOT__uut__DOT__cpu_state_ldmem;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__MASKED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__LATCHED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__PROGADDR_RESET;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__PROGADDR_IRQ;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__STACKADDR;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__irq_timer;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__irq_ebreak;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__irq_buserror;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__irqregs_offset;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__regfile_size;
constexpr IData/*31:0*/ Vtop___024root::top_soc__DOT__uut__DOT__regindex_bits;
constexpr QData/*35:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TRACE_BRANCH;
constexpr QData/*35:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TRACE_ADDR;
constexpr QData/*35:0*/ Vtop___024root::top_soc__DOT__uut__DOT__TRACE_IRQ;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
