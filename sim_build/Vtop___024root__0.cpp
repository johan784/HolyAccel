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
    // Body
    vlSelfRef.bnn_core__DOT__in_ptr = vlSelfRef.in_ptr;
    vlSelfRef.bnn_core__DOT__wt_ptr = vlSelfRef.wt_ptr;
    vlSelfRef.inp_bram_addr = vlSelfRef.bnn_core__DOT__inp_bram_addr;
    vlSelfRef.bnn_core__DOT__inp_bram_dout = vlSelfRef.inp_bram_dout;
    vlSelfRef.wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_bram_addr;
    vlSelfRef.bnn_core__DOT__wt_bram_dout = vlSelfRef.wt_bram_dout;
    vlSelfRef.busy = vlSelfRef.bnn_core__DOT__busy;
    vlSelfRef.done = vlSelfRef.bnn_core__DOT__done;
    vlSelfRef.result = vlSelfRef.bnn_core__DOT__result;
    vlSelfRef.bnn_core__DOT__clk = vlSelfRef.clk;
    vlSelfRef.bnn_core__DOT__enable = (2U == (IData)(vlSelfRef.bnn_core__DOT__state));
    vlSelfRef.bnn_core__DOT__rstn = vlSelfRef.rstn;
    vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__start = vlSelfRef.start;
    vlSelfRef.bnn_core__DOT__pe__DOT__input_register 
        = vlSelfRef.bnn_core__DOT__inputs_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__weight_register 
        = vlSelfRef.bnn_core__DOT__weights_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__clk = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.bnn_core__DOT__pe__DOT__enable = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe__DOT__rstn = vlSelfRef.bnn_core__DOT__rstn;
    vlSelfRef.bnn_core__DOT__pe_result = vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value;
    vlSelfRef.bnn_core__DOT__clear_accumulator = 0U;
    if (((0U == (IData)(vlSelfRef.bnn_core__DOT__state)) 
         & (IData)(vlSelfRef.bnn_core__DOT__start))) {
        vlSelfRef.bnn_core__DOT__clear_accumulator = 1U;
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__inp = vlSelfRef.bnn_core__DOT__pe__DOT__input_register;
    vlSelfRef.bnn_core__DOT__pe__DOT__wt = vlSelfRef.bnn_core__DOT__pe__DOT__weight_register;
    vlSelfRef.bnn_core__DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result = 
        (~ (vlSelfRef.bnn_core__DOT__pe__DOT__inp ^ vlSelfRef.bnn_core__DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage1[(0x0000000fU 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage2[(7U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage3[(3U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage4[(1U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__sum_reg = (0x0000003fU 
                                                 & (vlSelfRef.bnn_core__DOT__pe__DOT__stage4
                                                    [0U] 
                                                    + 
                                                    vlSelfRef.bnn_core__DOT__pe__DOT__stage4
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
                                                    ((((IData)(vlSelfRef.bnn_core__DOT__pe__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe__DOT__clk__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.bnn_core__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe__DOT__clk;
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
    SData/*8:0*/ __Vdly__bnn_core__DOT__pe__DOT__accumulator;
    __Vdly__bnn_core__DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__bnn_core__DOT__pe__DOT__accumulator = vlSelfRef.bnn_core__DOT__pe__DOT__accumulator;
    if (vlSelfRef.bnn_core__DOT__pe__DOT__rstn) {
        if (vlSelfRef.bnn_core__DOT__pe__DOT__clear_accumulator) {
            __Vdly__bnn_core__DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.bnn_core__DOT__pe__DOT__enable) {
            __Vdly__bnn_core__DOT__pe__DOT__accumulator 
                = (0x000001ffU & ((IData)(vlSelfRef.bnn_core__DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.bnn_core__DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__bnn_core__DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__accumulator = __Vdly__bnn_core__DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__bnn_core__DOT__state;
    __Vdly__bnn_core__DOT__state = 0;
    IData/*31:0*/ __Vdly__bnn_core__DOT__offset_count;
    __Vdly__bnn_core__DOT__offset_count = 0;
    // Body
    __Vdly__bnn_core__DOT__offset_count = vlSelfRef.bnn_core__DOT__offset_count;
    __Vdly__bnn_core__DOT__state = vlSelfRef.bnn_core__DOT__state;
    if (vlSelfRef.bnn_core__DOT__rstn) {
        if ((4U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            __Vdly__bnn_core__DOT__state = ((2U & (IData)(vlSelfRef.bnn_core__DOT__state))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))
                                              ? 0U : 1U));
        } else if ((2U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
                vlSelfRef.bnn_core__DOT__busy = 0U;
                vlSelfRef.bnn_core__DOT__done = 1U;
                vlSelfRef.bnn_core__DOT__result = vlSelfRef.bnn_core__DOT__pe_result;
                __Vdly__bnn_core__DOT__state = 0U;
            } else {
                if ((7U > (IData)(vlSelfRef.bnn_core__DOT__word_idx))) {
                    __Vdly__bnn_core__DOT__offset_count 
                        = ((IData)(4U) + vlSelfRef.bnn_core__DOT__offset_count);
                    vlSelfRef.bnn_core__DOT__inp_bram_addr 
                        = ((IData)(4U) + (vlSelfRef.bnn_core__DOT__in_ptr 
                                          + vlSelfRef.bnn_core__DOT__offset_count));
                    vlSelfRef.bnn_core__DOT__wt_bram_addr 
                        = ((IData)(4U) + (vlSelfRef.bnn_core__DOT__wt_ptr 
                                          + vlSelfRef.bnn_core__DOT__offset_count));
                }
                if ((7U == (IData)(vlSelfRef.bnn_core__DOT__word_idx))) {
                    __Vdly__bnn_core__DOT__state = 3U;
                } else {
                    vlSelfRef.bnn_core__DOT__word_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.bnn_core__DOT__word_idx)));
                    __Vdly__bnn_core__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.bnn_core__DOT__state))) {
            vlSelfRef.bnn_core__DOT__inputs_reg = vlSelfRef.bnn_core__DOT__inp_bram_dout;
            vlSelfRef.bnn_core__DOT__weights_reg = vlSelfRef.bnn_core__DOT__wt_bram_dout;
            __Vdly__bnn_core__DOT__state = 2U;
        } else if (vlSelfRef.bnn_core__DOT__start) {
            vlSelfRef.bnn_core__DOT__word_idx = 0U;
            __Vdly__bnn_core__DOT__offset_count = 0U;
            vlSelfRef.bnn_core__DOT__busy = 1U;
            __Vdly__bnn_core__DOT__state = 4U;
            vlSelfRef.bnn_core__DOT__done = 0U;
            vlSelfRef.bnn_core__DOT__inp_bram_addr 
                = vlSelfRef.bnn_core__DOT__in_ptr;
            vlSelfRef.bnn_core__DOT__wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_ptr;
        }
    } else {
        __Vdly__bnn_core__DOT__offset_count = 0U;
        vlSelfRef.bnn_core__DOT__word_idx = 0U;
        __Vdly__bnn_core__DOT__state = 0U;
        vlSelfRef.bnn_core__DOT__busy = 0U;
        vlSelfRef.bnn_core__DOT__done = 0U;
        vlSelfRef.bnn_core__DOT__result = 0U;
        vlSelfRef.bnn_core__DOT__inp_bram_addr = 0U;
        vlSelfRef.bnn_core__DOT__wt_bram_addr = 0U;
        vlSelfRef.bnn_core__DOT__inputs_reg = 0U;
        vlSelfRef.bnn_core__DOT__weights_reg = 0U;
    }
    vlSelfRef.bnn_core__DOT__offset_count = __Vdly__bnn_core__DOT__offset_count;
    vlSelfRef.bnn_core__DOT__state = __Vdly__bnn_core__DOT__state;
    vlSelfRef.busy = vlSelfRef.bnn_core__DOT__busy;
    vlSelfRef.done = vlSelfRef.bnn_core__DOT__done;
    vlSelfRef.result = vlSelfRef.bnn_core__DOT__result;
    vlSelfRef.inp_bram_addr = vlSelfRef.bnn_core__DOT__inp_bram_addr;
    vlSelfRef.wt_bram_addr = vlSelfRef.bnn_core__DOT__wt_bram_addr;
    vlSelfRef.bnn_core__DOT__enable = (2U == (IData)(vlSelfRef.bnn_core__DOT__state));
    vlSelfRef.bnn_core__DOT__clear_accumulator = 0U;
    if (((0U == (IData)(vlSelfRef.bnn_core__DOT__state)) 
         & (IData)(vlSelfRef.bnn_core__DOT__start))) {
        vlSelfRef.bnn_core__DOT__clear_accumulator = 1U;
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__input_register 
        = vlSelfRef.bnn_core__DOT__inputs_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__weight_register 
        = vlSelfRef.bnn_core__DOT__weights_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__enable = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.bnn_core__DOT__clear_accumulator;
    vlSelfRef.bnn_core__DOT__pe__DOT__inp = vlSelfRef.bnn_core__DOT__pe__DOT__input_register;
    vlSelfRef.bnn_core__DOT__pe__DOT__wt = vlSelfRef.bnn_core__DOT__pe__DOT__weight_register;
    vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result = 
        (~ (vlSelfRef.bnn_core__DOT__pe__DOT__inp ^ vlSelfRef.bnn_core__DOT__pe__DOT__wt));
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage1[(0x0000000fU 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))))));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage2[(7U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                     + vlSelfRef.bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage3[(3U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.bnn_core__DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.bnn_core__DOT__pe__DOT__stage4[(1U 
                                                  & vlSelfRef.bnn_core__DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.bnn_core__DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.bnn_core__DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.bnn_core__DOT__pe__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.bnn_core__DOT__pe__DOT__sum_reg = (0x0000003fU 
                                                 & (vlSelfRef.bnn_core__DOT__pe__DOT__stage4
                                                    [0U] 
                                                    + 
                                                    vlSelfRef.bnn_core__DOT__pe__DOT__stage4
                                                    [1U]));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bnn_core__DOT__pe_result = vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
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
