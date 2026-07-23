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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*2:0*/ bnn_core__DOT__layer_idx;
        CData/*2:0*/ bnn_core__DOT__neuron_idx;
        CData/*2:0*/ bnn_core__DOT__pe_idx;
        CData/*2:0*/ bnn_core__DOT__word_idx;
        CData/*2:0*/ bnn_core__DOT__activ_word_idx;
        CData/*2:0*/ bnn_core__DOT__wt_word_idx;
        CData/*2:0*/ bnn_core__DOT__input_word_last;
        CData/*2:0*/ bnn_core__DOT__output_neuron_last;
        CData/*0:0*/ bnn_core__DOT__bram_primed;
        CData/*3:0*/ bnn_core__DOT__state;
        CData/*0:0*/ bnn_core__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__clear_accumulator;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__rstn;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable;
        CData/*0:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator;
        CData/*5:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk__0;
        SData/*15:0*/ bnn_core__DOT__input_words;
        SData/*15:0*/ bnn_core__DOT__output_neurons;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__threshold;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value;
        SData/*9:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
        VL_IN(in_ptr,31,0);
        VL_IN(wt_ptr,31,0);
        VL_IN(thr_ptr,31,0);
        VL_OUT(inp_bram_addr,31,0);
        VL_IN(inp_bram_dout,31,0);
        VL_OUT(wt_bram_addr,31,0);
        VL_IN(wt_bram_dout,31,0);
        VL_OUT(result,31,0);
        IData/*31:0*/ bnn_core__DOT__in_ptr;
        IData/*31:0*/ bnn_core__DOT__wt_ptr;
        IData/*31:0*/ bnn_core__DOT__thr_ptr;
        IData/*31:0*/ bnn_core__DOT__inp_bram_addr;
        IData/*31:0*/ bnn_core__DOT__inp_bram_dout;
        IData/*31:0*/ bnn_core__DOT__wt_bram_addr;
        IData/*31:0*/ bnn_core__DOT__wt_bram_dout;
        IData/*31:0*/ bnn_core__DOT__result;
        IData/*31:0*/ bnn_core__DOT__in_ptr_reg;
        IData/*31:0*/ bnn_core__DOT__wt_ptr_reg;
        IData/*31:0*/ bnn_core__DOT__thr_ptr_reg;
        IData/*31:0*/ bnn_core__DOT__unnamedblk2__DOT__n;
        IData/*31:0*/ bnn_core__DOT__unnamedblk1__DOT__n;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer;
    };
    struct {
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp;
        IData/*31:0*/ bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt;
        IData/*31:0*/ __VactIterCount;
        VlWide<4>/*127:0*/ bnn_core__DOT__current_desc;
        VlUnpacked<VlWide<4>/*127:0*/, 8> bnn_core__DOT__layer_table;
        VlUnpacked<SData/*9:0*/, 8> bnn_core__DOT__pe_result;
        VlUnpacked<IData/*31:0*/, 8> bnn_core__DOT__output_buffer;
        VlUnpacked<IData/*31:0*/, 8> bnn_core__DOT__activation_buffer;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> bnn_core__DOT__weights_buffer;
        VlUnpacked<SData/*9:0*/, 8> bnn_core__DOT__threshold_buffer;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4;
        VlUnpacked<CData/*1:0*/, 16> bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1;
        VlUnpacked<CData/*2:0*/, 8> bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2;
        VlUnpacked<CData/*3:0*/, 4> bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3;
        VlUnpacked<CData/*4:0*/, 2> bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 8>, false, IData/*31:0*/, 1> __VdlyCommitQueuebnn_core__DOT__output_buffer;
    VlNBACommitQueue<VlUnpacked<SData/*9:0*/, 8>, false, SData/*9:0*/, 1> __VdlyCommitQueuebnn_core__DOT__threshold_buffer;

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
