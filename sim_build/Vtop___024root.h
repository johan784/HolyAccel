// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_constants_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_constants_pkg* __PVT__constants_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ bnn_core__DOT__clk;
    CData/*0:0*/ bnn_core__DOT__rstn;
    CData/*0:0*/ bnn_core__DOT__start;
    CData/*0:0*/ bnn_core__DOT__busy;
    CData/*0:0*/ bnn_core__DOT__done;
    CData/*0:0*/ bnn_core__DOT__enable;
    CData/*0:0*/ bnn_core__DOT__clear_accumulator;
    CData/*2:0*/ bnn_core__DOT__state;
    CData/*2:0*/ bnn_core__DOT__word_idx;
    CData/*0:0*/ bnn_core__DOT__pe__DOT__clk;
    CData/*0:0*/ bnn_core__DOT__pe__DOT__rstn;
    CData/*0:0*/ bnn_core__DOT__pe__DOT__enable;
    CData/*0:0*/ bnn_core__DOT__pe__DOT__clear_accumulator;
    CData/*5:0*/ bnn_core__DOT__pe__DOT__sum_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe__DOT__clk__0;
    SData/*8:0*/ bnn_core__DOT__pe_result;
    SData/*8:0*/ bnn_core__DOT__pe__DOT__neuron_value;
    SData/*8:0*/ bnn_core__DOT__pe__DOT__accumulator;
    VL_IN(in_ptr,31,0);
    VL_IN(wt_ptr,31,0);
    VL_OUT(inp_bram_addr,31,0);
    VL_IN(inp_bram_dout,31,0);
    VL_OUT(wt_bram_addr,31,0);
    VL_IN(wt_bram_dout,31,0);
    VL_OUT(result,31,0);
    IData/*31:0*/ bnn_core__DOT__in_ptr;
    IData/*31:0*/ bnn_core__DOT__wt_ptr;
    IData/*31:0*/ bnn_core__DOT__inp_bram_addr;
    IData/*31:0*/ bnn_core__DOT__inp_bram_dout;
    IData/*31:0*/ bnn_core__DOT__wt_bram_addr;
    IData/*31:0*/ bnn_core__DOT__wt_bram_dout;
    IData/*31:0*/ bnn_core__DOT__result;
    IData/*31:0*/ bnn_core__DOT__offset_count;
    IData/*31:0*/ bnn_core__DOT__inputs_reg;
    IData/*31:0*/ bnn_core__DOT__weights_reg;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__input_register;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__weight_register;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__xnor_result;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__i;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__inp;
    IData/*31:0*/ bnn_core__DOT__pe__DOT__wt;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe__DOT__stage1;
    VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe__DOT__stage2;
    VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe__DOT__stage3;
    VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe__DOT__stage4;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
