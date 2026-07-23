// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer = 0;
    // Body
    vlSelfRef.bnn_core__DOT__in_ptr = vlSelfRef.in_ptr;
    vlSelfRef.bnn_core__DOT__wt_ptr = vlSelfRef.wt_ptr;
    vlSelfRef.bnn_core__DOT__thr_ptr = vlSelfRef.thr_ptr;
    vlSelfRef.inp_bram_addr = vlSelfRef.bnn_core__DOT__inp_bram_addr;
    vlSelfRef.bnn_core__DOT__inp_bram_dout = vlSelfRef.inp_bram_dout;
    vlSelfRef.wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_bram_addr;
    vlSelfRef.bnn_core__DOT__wt_bram_dout = vlSelfRef.wt_bram_dout;
    vlSelfRef.busy = vlSelfRef.bnn_core__DOT__busy;
    vlSelfRef.done = vlSelfRef.bnn_core__DOT__done;
    vlSelfRef.result = vlSelfRef.bnn_core__DOT__result;
    vlSelfRef.bnn_core__DOT__input_word_last = (7U 
                                                & ((IData)(vlSelfRef.bnn_core__DOT__input_words) 
                                                   - (IData)(1U)));
    vlSelfRef.bnn_core__DOT__output_neuron_last = (7U 
                                                   & ((IData)(vlSelfRef.bnn_core__DOT__output_neurons) 
                                                      - (IData)(1U)));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [0U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [1U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [2U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [3U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [4U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [5U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [6U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [7U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[0U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[1U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[2U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[3U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[4U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[5U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[6U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[7U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__clk = vlSelfRef.clk;
    vlSelfRef.bnn_core__DOT__rstn = vlSelfRef.rstn;
    vlSelfRef.bnn_core__DOT__enable = (5U == (IData)(vlSelfRef.bnn_core__DOT__state));
    vlSelfRef.bnn_core__DOT__start = vlSelfRef.start;
    bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer 
        = vlSelfRef.bnn_core__DOT__activation_buffer
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_result[0U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[1U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[2U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[3U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[4U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[5U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[6U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_result[7U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__rstn 
        = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__clear_accumulator = ((0U 
                                                   == (IData)(vlSelfRef.bnn_core__DOT__state)) 
                                                  & (IData)(vlSelfRef.bnn_core__DOT__start));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4
                          [1U]));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk__0))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk__0))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.bnn_core__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator 
                = (0x000003ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator 
        = __Vdly__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer = 0;
    CData/*3:0*/ __Vdly__bnn_core__DOT__state;
    __Vdly__bnn_core__DOT__state = 0;
    CData/*2:0*/ __Vdly__bnn_core__DOT__wt_word_idx;
    __Vdly__bnn_core__DOT__wt_word_idx = 0;
    IData/*31:0*/ __Vdly__bnn_core__DOT__wt_bram_addr;
    __Vdly__bnn_core__DOT__wt_bram_addr = 0;
    IData/*31:0*/ __VdlyVal__bnn_core__DOT__output_buffer__v0;
    __VdlyVal__bnn_core__DOT__output_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bnn_core__DOT__output_buffer__v0;
    __VdlyDim0__bnn_core__DOT__output_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__bnn_core__DOT__weights_buffer__v0;
    __VdlyVal__bnn_core__DOT__weights_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bnn_core__DOT__weights_buffer__v0;
    __VdlyDim0__bnn_core__DOT__weights_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim1__bnn_core__DOT__weights_buffer__v0;
    __VdlyDim1__bnn_core__DOT__weights_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__bnn_core__DOT__weights_buffer__v0;
    __VdlySet__bnn_core__DOT__weights_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__bnn_core__DOT__activation_buffer__v0;
    __VdlyVal__bnn_core__DOT__activation_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bnn_core__DOT__activation_buffer__v0;
    __VdlyDim0__bnn_core__DOT__activation_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__bnn_core__DOT__activation_buffer__v0;
    __VdlySet__bnn_core__DOT__activation_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bnn_core__DOT__output_buffer__v1;
    __VdlyDim0__bnn_core__DOT__output_buffer__v1 = 0;
    CData/*2:0*/ __VdlyDim0__bnn_core__DOT__threshold_buffer__v0;
    __VdlyDim0__bnn_core__DOT__threshold_buffer__v0 = 0;
    // Body
    __Vdly__bnn_core__DOT__wt_word_idx = vlSelfRef.bnn_core__DOT__wt_word_idx;
    __Vdly__bnn_core__DOT__wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_bram_addr;
    __Vdly__bnn_core__DOT__state = vlSelfRef.bnn_core__DOT__state;
    __VdlySet__bnn_core__DOT__activation_buffer__v0 = 0U;
    __VdlySet__bnn_core__DOT__weights_buffer__v0 = 0U;
    if (vlSelfRef.bnn_core__DOT__rstn) {
        vlSelfRef.bnn_core__DOT__done = 0U;
        if ((8U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            __Vdly__bnn_core__DOT__state = 0U;
            vlSelfRef.bnn_core__DOT__busy = 0U;
        } else if ((4U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
                    vlSelfRef.bnn_core__DOT__busy = 0U;
                    vlSelfRef.bnn_core__DOT__done = 1U;
                    __Vdly__bnn_core__DOT__state = 0U;
                } else {
                    vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n = 0U;
                    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n)) {
                        __VdlyVal__bnn_core__DOT__output_buffer__v0 
                            = (((- (IData)((1U & (vlSelfRef.bnn_core__DOT__pe_result
                                                  [
                                                  (7U 
                                                   & vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n)] 
                                                  >> 9U)))) 
                                << 0x0000000aU) | vlSelfRef.bnn_core__DOT__pe_result
                               [(7U & vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n)]);
                        __VdlyDim0__bnn_core__DOT__output_buffer__v0 
                            = (7U & vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n);
                        vlSelfRef.__VdlyCommitQueuebnn_core__DOT__output_buffer.enqueue(__VdlyVal__bnn_core__DOT__output_buffer__v0, (IData)(__VdlyDim0__bnn_core__DOT__output_buffer__v0));
                        vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n 
                            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n);
                    }
                    vlSelfRef.bnn_core__DOT__result 
                        = (((- (IData)((1U & (vlSelfRef.bnn_core__DOT__pe_result
                                              [0U] 
                                              >> 9U)))) 
                            << 0x0000000aU) | vlSelfRef.bnn_core__DOT__pe_result
                           [0U]);
                    __Vdly__bnn_core__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
                if (((IData)(vlSelfRef.bnn_core__DOT__word_idx) 
                     == (IData)(vlSelfRef.bnn_core__DOT__input_word_last))) {
                    __Vdly__bnn_core__DOT__state = 6U;
                } else {
                    vlSelfRef.bnn_core__DOT__word_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.bnn_core__DOT__word_idx)));
                }
            } else {
                __VdlyVal__bnn_core__DOT__weights_buffer__v0 
                    = vlSelfRef.bnn_core__DOT__wt_bram_dout;
                __VdlyDim0__bnn_core__DOT__weights_buffer__v0 
                    = vlSelfRef.bnn_core__DOT__wt_word_idx;
                __VdlyDim1__bnn_core__DOT__weights_buffer__v0 
                    = vlSelfRef.bnn_core__DOT__pe_idx;
                __VdlySet__bnn_core__DOT__weights_buffer__v0 = 1U;
                if (((IData)(vlSelfRef.bnn_core__DOT__wt_word_idx) 
                     == (IData)(vlSelfRef.bnn_core__DOT__input_word_last))) {
                    __Vdly__bnn_core__DOT__wt_word_idx = 0U;
                    if (((IData)(vlSelfRef.bnn_core__DOT__pe_idx) 
                         == (IData)(vlSelfRef.bnn_core__DOT__output_neuron_last))) {
                        vlSelfRef.bnn_core__DOT__word_idx = 0U;
                        __Vdly__bnn_core__DOT__state = 5U;
                    } else {
                        vlSelfRef.bnn_core__DOT__pe_idx 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.bnn_core__DOT__pe_idx)));
                        __Vdly__bnn_core__DOT__wt_bram_addr 
                            = ((IData)(4U) + vlSelfRef.bnn_core__DOT__wt_bram_addr);
                    }
                } else {
                    __Vdly__bnn_core__DOT__wt_word_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.bnn_core__DOT__wt_word_idx)));
                    __Vdly__bnn_core__DOT__wt_bram_addr 
                        = ((IData)(4U) + vlSelfRef.bnn_core__DOT__wt_bram_addr);
                }
            }
        } else if ((2U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
                __VdlyVal__bnn_core__DOT__activation_buffer__v0 
                    = vlSelfRef.bnn_core__DOT__inp_bram_dout;
                __VdlyDim0__bnn_core__DOT__activation_buffer__v0 
                    = vlSelfRef.bnn_core__DOT__activ_word_idx;
                __VdlySet__bnn_core__DOT__activation_buffer__v0 = 1U;
                if (((IData)(vlSelfRef.bnn_core__DOT__activ_word_idx) 
                     == (IData)(vlSelfRef.bnn_core__DOT__input_word_last))) {
                    __Vdly__bnn_core__DOT__wt_word_idx = 0U;
                    vlSelfRef.bnn_core__DOT__pe_idx = 0U;
                    __Vdly__bnn_core__DOT__state = 4U;
                } else {
                    vlSelfRef.bnn_core__DOT__activ_word_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.bnn_core__DOT__activ_word_idx)));
                    vlSelfRef.bnn_core__DOT__inp_bram_addr 
                        = ((IData)(4U) + vlSelfRef.bnn_core__DOT__inp_bram_addr);
                }
            } else if (vlSelfRef.bnn_core__DOT__bram_primed) {
                __Vdly__bnn_core__DOT__state = 3U;
            } else {
                vlSelfRef.bnn_core__DOT__bram_primed = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            vlSelfRef.bnn_core__DOT__activ_word_idx = 0U;
            __Vdly__bnn_core__DOT__wt_word_idx = 0U;
            vlSelfRef.bnn_core__DOT__pe_idx = 0U;
            vlSelfRef.bnn_core__DOT__inp_bram_addr 
                = vlSelfRef.bnn_core__DOT__in_ptr;
            __Vdly__bnn_core__DOT__wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_ptr;
            vlSelfRef.bnn_core__DOT__current_desc[0U] 
                = (0x00080000U | (0x0000ffffU & vlSelfRef.bnn_core__DOT__current_desc[0U]));
            vlSelfRef.bnn_core__DOT__current_desc[1U] 
                = vlSelfRef.bnn_core__DOT__thr_ptr;
            vlSelfRef.bnn_core__DOT__current_desc[2U] 
                = ((0x0000ffffU & (IData)((((QData)((IData)(vlSelfRef.bnn_core__DOT__in_ptr)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.bnn_core__DOT__wt_ptr))))) 
                   | (0xffff0000U & (IData)((((QData)((IData)(vlSelfRef.bnn_core__DOT__in_ptr)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.bnn_core__DOT__wt_ptr))))));
            vlSelfRef.bnn_core__DOT__current_desc[3U] 
                = ((0x0000ffffU & (IData)(((((QData)((IData)(vlSelfRef.bnn_core__DOT__in_ptr)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.bnn_core__DOT__wt_ptr))) 
                                           >> 0x00000020U))) 
                   | (0xffff0000U & (IData)(((((QData)((IData)(vlSelfRef.bnn_core__DOT__in_ptr)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.bnn_core__DOT__wt_ptr))) 
                                             >> 0x00000020U))));
            vlSelfRef.bnn_core__DOT__in_ptr_reg = vlSelfRef.bnn_core__DOT__in_ptr;
            vlSelfRef.bnn_core__DOT__wt_ptr_reg = vlSelfRef.bnn_core__DOT__wt_ptr;
            vlSelfRef.bnn_core__DOT__thr_ptr_reg = vlSelfRef.bnn_core__DOT__thr_ptr;
            vlSelfRef.bnn_core__DOT__input_words = 8U;
            vlSelfRef.bnn_core__DOT__output_neurons = 8U;
            vlSelfRef.bnn_core__DOT__layer_idx = 0U;
            vlSelfRef.bnn_core__DOT__neuron_idx = 0U;
            vlSelfRef.bnn_core__DOT__word_idx = 0U;
            vlSelfRef.bnn_core__DOT__bram_primed = 0U;
            __Vdly__bnn_core__DOT__state = 2U;
            vlSelfRef.bnn_core__DOT__current_desc[0U] 
                = (8U | (0xffff0000U & vlSelfRef.bnn_core__DOT__current_desc[0U]));
        } else {
            vlSelfRef.bnn_core__DOT__busy = 0U;
            if (vlSelfRef.bnn_core__DOT__start) {
                vlSelfRef.bnn_core__DOT__busy = 1U;
                __Vdly__bnn_core__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.bnn_core__DOT__inp_bram_addr = 0U;
        __Vdly__bnn_core__DOT__wt_bram_addr = 0U;
        vlSelfRef.bnn_core__DOT__pe_idx = 0U;
        vlSelfRef.bnn_core__DOT__activ_word_idx = 0U;
        __Vdly__bnn_core__DOT__wt_word_idx = 0U;
        vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n = 0U;
        __Vdly__bnn_core__DOT__state = 0U;
        vlSelfRef.bnn_core__DOT__busy = 0U;
        vlSelfRef.bnn_core__DOT__done = 0U;
        vlSelfRef.bnn_core__DOT__result = 0U;
        vlSelfRef.bnn_core__DOT__in_ptr_reg = 0U;
        vlSelfRef.bnn_core__DOT__wt_ptr_reg = 0U;
        vlSelfRef.bnn_core__DOT__thr_ptr_reg = 0U;
        vlSelfRef.bnn_core__DOT__input_words = 8U;
        vlSelfRef.bnn_core__DOT__output_neurons = 8U;
        vlSelfRef.bnn_core__DOT__layer_idx = 0U;
        vlSelfRef.bnn_core__DOT__neuron_idx = 0U;
        vlSelfRef.bnn_core__DOT__word_idx = 0U;
        vlSelfRef.bnn_core__DOT__bram_primed = 0U;
        vlSelfRef.bnn_core__DOT__current_desc[0U] = 0U;
        vlSelfRef.bnn_core__DOT__current_desc[1U] = 0U;
        vlSelfRef.bnn_core__DOT__current_desc[2U] = 0U;
        vlSelfRef.bnn_core__DOT__current_desc[3U] = 0U;
        while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n)) {
            __VdlyDim0__bnn_core__DOT__output_buffer__v1 
                = (7U & vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n);
            vlSelfRef.__VdlyCommitQueuebnn_core__DOT__output_buffer.enqueue(0U, (IData)(__VdlyDim0__bnn_core__DOT__output_buffer__v1));
            __VdlyDim0__bnn_core__DOT__threshold_buffer__v0 
                = (7U & vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n);
            vlSelfRef.__VdlyCommitQueuebnn_core__DOT__threshold_buffer.enqueue(0U, (IData)(__VdlyDim0__bnn_core__DOT__threshold_buffer__v0));
            vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n 
                = ((IData)(1U) + vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n);
        }
    }
    vlSelfRef.__VdlyCommitQueuebnn_core__DOT__output_buffer.commit(vlSelfRef.bnn_core__DOT__output_buffer);
    vlSelfRef.bnn_core__DOT__wt_word_idx = __Vdly__bnn_core__DOT__wt_word_idx;
    vlSelfRef.bnn_core__DOT__wt_bram_addr = __Vdly__bnn_core__DOT__wt_bram_addr;
    vlSelfRef.__VdlyCommitQueuebnn_core__DOT__threshold_buffer.commit(vlSelfRef.bnn_core__DOT__threshold_buffer);
    vlSelfRef.bnn_core__DOT__state = __Vdly__bnn_core__DOT__state;
    if (__VdlySet__bnn_core__DOT__activation_buffer__v0) {
        vlSelfRef.bnn_core__DOT__activation_buffer[__VdlyDim0__bnn_core__DOT__activation_buffer__v0] 
            = __VdlyVal__bnn_core__DOT__activation_buffer__v0;
    }
    if (__VdlySet__bnn_core__DOT__weights_buffer__v0) {
        vlSelfRef.bnn_core__DOT__weights_buffer[__VdlyDim1__bnn_core__DOT__weights_buffer__v0][__VdlyDim0__bnn_core__DOT__weights_buffer__v0] 
            = __VdlyVal__bnn_core__DOT__weights_buffer__v0;
    }
    vlSelfRef.done = vlSelfRef.bnn_core__DOT__done;
    vlSelfRef.busy = vlSelfRef.bnn_core__DOT__busy;
    vlSelfRef.result = vlSelfRef.bnn_core__DOT__result;
    vlSelfRef.wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_bram_addr;
    vlSelfRef.inp_bram_addr = vlSelfRef.bnn_core__DOT__inp_bram_addr;
    vlSelfRef.bnn_core__DOT__input_word_last = (7U 
                                                & ((IData)(vlSelfRef.bnn_core__DOT__input_words) 
                                                   - (IData)(1U)));
    vlSelfRef.bnn_core__DOT__output_neuron_last = (7U 
                                                   & ((IData)(vlSelfRef.bnn_core__DOT__output_neurons) 
                                                      - (IData)(1U)));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [0U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [1U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [2U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [3U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [4U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [5U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [6U];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__threshold 
        = vlSelfRef.bnn_core__DOT__threshold_buffer
        [7U];
    vlSelfRef.bnn_core__DOT__enable = (5U == (IData)(vlSelfRef.bnn_core__DOT__state));
    vlSelfRef.bnn_core__DOT__clear_accumulator = ((0U 
                                                   == (IData)(vlSelfRef.bnn_core__DOT__state)) 
                                                  & (IData)(vlSelfRef.bnn_core__DOT__start));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[0U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[1U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[2U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[3U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[4U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[5U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[6U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer 
        = vlSelfRef.bnn_core__DOT__weights_buffer[7U]
        [vlSelfRef.bnn_core__DOT__word_idx];
    bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer 
        = vlSelfRef.bnn_core__DOT__activation_buffer
        [vlSelfRef.bnn_core__DOT__word_idx];
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable 
        = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer 
        = bnn_core__DOT____Vcellinp__pe_array__BRA__0__KET____DOT__pe__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp 
        = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer;
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp 
              ^ vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4
                          [1U]));
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[0U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[1U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[2U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[3U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[4U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[5U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[6U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result[7U] = vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("bnn_core.sv", 5, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("bnn_core.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("bnn_core.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rstn & 0xfeU)))) {
        Verilated::overWidthError("rstn");
    }
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
}
#endif  // VL_DEBUG
