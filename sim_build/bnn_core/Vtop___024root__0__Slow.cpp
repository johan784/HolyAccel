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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge bnn_core.pe_array[0].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge bnn_core.pe_array[1].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge bnn_core.pe_array[2].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge bnn_core.pe_array[3].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge bnn_core.pe_array[4].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge bnn_core.pe_array[5].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge bnn_core.pe_array[6].pe.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge bnn_core.pe_array[7].pe.clk)\n");
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
    vlSelf->thr_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4076694504013468458ull);
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
    vlSelf->bnn_core__DOT__thr_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14667787368618506552ull);
    vlSelf->bnn_core__DOT__inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7479091559004971989ull);
    vlSelf->bnn_core__DOT__inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17597350583217022333ull);
    vlSelf->bnn_core__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17301780654366984295ull);
    vlSelf->bnn_core__DOT__wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8396891445333315254ull);
    vlSelf->bnn_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2473508126831164002ull);
    vlSelf->bnn_core__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12340235754788155668ull);
    vlSelf->bnn_core__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1401124621652146167ull);
    vlSelf->bnn_core__DOT__in_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11379535487939955184ull);
    vlSelf->bnn_core__DOT__wt_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8160481091308235331ull);
    vlSelf->bnn_core__DOT__thr_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1834481752246906786ull);
    vlSelf->bnn_core__DOT__input_words = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5035982751863161378ull);
    vlSelf->bnn_core__DOT__output_neurons = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14207856559435635266ull);
    vlSelf->bnn_core__DOT__layer_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9669427264237718429ull);
    vlSelf->bnn_core__DOT__neuron_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15533458101650097230ull);
    vlSelf->bnn_core__DOT__pe_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13950495441558374965ull);
    vlSelf->bnn_core__DOT__word_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3842065454169950504ull);
    vlSelf->bnn_core__DOT__activ_word_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5106136138027455775ull);
    vlSelf->bnn_core__DOT__wt_word_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16552013008092976896ull);
    vlSelf->bnn_core__DOT__input_word_last = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9881214468253817663ull);
    vlSelf->bnn_core__DOT__output_neuron_last = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12206730911975848300ull);
    vlSelf->bnn_core__DOT__bram_primed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5890481290407617394ull);
    vlSelf->bnn_core__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14229442604586180964ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->bnn_core__DOT__current_desc, __VscopeHash, 17872365047116872639ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->bnn_core__DOT__layer_table[__Vi0], __VscopeHash, 11805080809170408840ull);
    }
    vlSelf->bnn_core__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16543947028958614708ull);
    vlSelf->bnn_core__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83173001366247790ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_result[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3090367017206315230ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__output_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6043956501941859606ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__activation_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4464763206686278405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->bnn_core__DOT__weights_buffer[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10651952866762962305ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__threshold_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13938466322322305166ull);
    }
    vlSelf->bnn_core__DOT__unnamedblk2__DOT__n = 0;
    vlSelf->bnn_core__DOT__unnamedblk1__DOT__n = 0;
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2113319556521068876ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10911598605727453290ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12497103576606628185ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12023592472438938653ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10106002638263271275ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7589199233577539533ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1763654973890005581ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13320908157398299583ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18106540433672546831ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3136150058678093285ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15789774687208258269ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9967743943285727481ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 847760535656598217ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4198476411513623015ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14507799701714853418ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2406703755283267060ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13791206918503531882ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10027863284228515820ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9925989227996585623ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298892828530353163ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 568674896160021332ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15392859075957424162ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4107899329409406672ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2802845142851581081ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16957520555621384323ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1217178570967486259ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7009439774394579763ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13122229981227562525ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2926083227012291329ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2061871490331988363ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2969697720944969075ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1318544913669447263ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4211146705753484009ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13969127791600912617ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13710083916786954286ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13713871103552203185ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 494964518088837415ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6579515455757056601ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13399787361963410271ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 468014431060484385ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12787515821479576447ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15800419871360635468ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12312535549733557360ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3390141814005538744ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6662062098453724256ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17855770571659179647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4220448910245260672ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13678388037431474835ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9746985297021815055ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6944482072083839357ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11230336518107216873ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9943547850708321539ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5990588402799905856ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5496856907650515721ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10658207178683936445ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10928097001846971377ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13189066748135049311ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3280861678358457057ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3648860200096246018ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7076627847489976562ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5673378368560219324ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17786036946916318614ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17712206494979115530ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18354612907442947439ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11100975558602621104ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18336976597069332680ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12338034347562091680ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15638126632761367991ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 803574739680459202ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4881983104526144188ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3352321742042437970ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4107622736528484482ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7109866790755397327ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8122684843707691019ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 734918553185358641ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2085601877118070361ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13417781439312012724ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6338035046086149233ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15110079580827908900ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17297399211364510688ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13002168541934474723ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7869606346609571059ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 935827154344427892ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15447814950871175249ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8533437307496857126ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14847356856861691209ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9592803230258486269ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15623174541593831270ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16608524245650638423ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17067268271669521122ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8540426034639949518ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18402369643992591785ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8757404485042419670ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2023477376727407932ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16097655119258773237ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14181884644081352985ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 663807781720612295ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 908409892210636572ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3100776277006126826ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3982789191456052270ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9431595375317828095ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9519538740394110591ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 104436593279178817ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2421497264793369011ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16239525974389004821ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12809221155882607083ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4514770899679505029ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14874845129041687930ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15924152939280647824ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14228720874589597450ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5963349189581803543ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13127224878419706613ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1589349869754061857ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13266256256021781477ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9472014633157889065ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10975718877088419862ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7524562045502943776ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9036858849780710790ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16531087649946522565ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17917085786231471770ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5134583289273566903ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5731050906999559293ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8838355337424890790ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13939672600735329957ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9827526799225266660ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18398791447549483988ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17673786176815518461ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1219073066906931515ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14649323133329169399ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8768978244296317855ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__threshold = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10892442666670496577ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13226667818087197435ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8280082644588738386ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11448869550926643356ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2575291741708601688ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11228524233622828118ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6721762259571328774ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4800935606673033423ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2191306059372261921ull);
    }
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10497261842275279452ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2545275876887189038ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8829968468217191818ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12887669866508726551ull);
    vlSelf->bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13902847035786517076ull);
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
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
