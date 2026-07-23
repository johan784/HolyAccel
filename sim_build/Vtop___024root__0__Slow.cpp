// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__bnn_core__DOT__pe__DOT__clk__0 
        = vlSelfRef.bnn_core__DOT__pe__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("bnn_core.sv", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.bnn_core__DOT__enable = (2U == (IData)(vlSelfRef.bnn_core__DOT__state));
    vlSelfRef.bnn_core__DOT__clk = vlSelfRef.clk;
    vlSelfRef.bnn_core__DOT__rstn = vlSelfRef.rstn;
    vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value 
        = vlSelfRef.bnn_core__DOT__pe__DOT__accumulator;
    vlSelfRef.bnn_core__DOT__start = vlSelfRef.start;
    vlSelfRef.bnn_core__DOT__pe__DOT__input_register 
        = vlSelfRef.bnn_core__DOT__inputs_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__weight_register 
        = vlSelfRef.bnn_core__DOT__weights_reg;
    vlSelfRef.bnn_core__DOT__pe__DOT__enable = vlSelfRef.bnn_core__DOT__enable;
    vlSelfRef.bnn_core__DOT__pe__DOT__clk = vlSelfRef.bnn_core__DOT__clk;
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge bnn_core.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge bnn_core.pe.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377340664288042355ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->in_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1552093381306776366ull);
    vlSelf->wt_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8117328316984842943ull);
    vlSelf->inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12650297158695283969ull);
    vlSelf->inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7527751476978293627ull);
    vlSelf->wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14323540552723015882ull);
    vlSelf->wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2734903549513720768ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->bnn_core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7723983082861513685ull);
    vlSelf->bnn_core__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15916520163081470324ull);
    vlSelf->bnn_core__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15081433006357284134ull);
    vlSelf->bnn_core__DOT__in_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4785989156776295688ull);
    vlSelf->bnn_core__DOT__wt_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6310832293109907633ull);
    vlSelf->bnn_core__DOT__inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7479091559004971989ull);
    vlSelf->bnn_core__DOT__inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17597350583217022333ull);
    vlSelf->bnn_core__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17301780654366984295ull);
    vlSelf->bnn_core__DOT__wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8396891445333315254ull);
    vlSelf->bnn_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2473508126831164002ull);
    vlSelf->bnn_core__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12340235754788155668ull);
    vlSelf->bnn_core__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1401124621652146167ull);
    vlSelf->bnn_core__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16543947028958614708ull);
    vlSelf->bnn_core__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83173001366247790ull);
    vlSelf->bnn_core__DOT__pe_result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3090367017206315230ull);
    vlSelf->bnn_core__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14229442604586180964ull);
    vlSelf->bnn_core__DOT__word_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3842065454169950504ull);
    vlSelf->bnn_core__DOT__offset_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18145601177696293118ull);
    vlSelf->bnn_core__DOT__inputs_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17514949415781640340ull);
    vlSelf->bnn_core__DOT__weights_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2019678504914377456ull);
    vlSelf->bnn_core__DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8343233129608790592ull);
    vlSelf->bnn_core__DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17760502936290398090ull);
    vlSelf->bnn_core__DOT__pe__DOT__input_register = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7513238791286065208ull);
    vlSelf->bnn_core__DOT__pe__DOT__weight_register = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1563054325870518857ull);
    vlSelf->bnn_core__DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1195770328889799530ull);
    vlSelf->bnn_core__DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6328259926240051270ull);
    vlSelf->bnn_core__DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004658405902069491ull);
    vlSelf->bnn_core__DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7179590413985538559ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2014585506712687182ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9485501785232647787ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14720796467089965883ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13139440174297857851ull);
    }
    vlSelf->bnn_core__DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5866508217383561057ull);
    vlSelf->bnn_core__DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11657126672189718248ull);
    vlSelf->bnn_core__DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6884517167544824468ull);
    vlSelf->bnn_core__DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11195280766923019962ull);
    vlSelf->bnn_core__DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11312343120132755170ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
