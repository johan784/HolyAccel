// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__clk__0 
        = vlSelfRef.top_soc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__uut__DOT__clk__0 
        = vlSelfRef.top_soc__DOT__uut__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__aclk__0 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aclk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk__0 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk__0 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs = 0U;
    VL_READMEM_N(true, 32, 16384, 0, "bram_init.hex"s
                 ,  &(vlSelfRef.top_soc__DOT__bram)
                 , 0, ~0ULL);
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_mul_wr = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_mul_wait = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_mul_ready = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_div_wr = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_div_wait = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_div_ready = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword_xfer = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word = 0U;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bresp = 0U;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rresp = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_mul_rd = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_div_rd = 0U;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bready = 1U;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rready = 1U;
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
            VL_FATAL_MT("top_soc.sv", 3, "", "Settle region did not converge after 100 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top_soc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top_soc.uut.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge top_soc.u_bnn_accelerator.aclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge top_soc.u_bnn_accelerator.i_bnn_core.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge top_soc.u_bnn_accelerator.i_bnn_core.pe.clk)\n");
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
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214934560881419504ull);
    vlSelf->led = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14009161575225144129ull);
    vlSelf->top_soc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10235411401702137133ull);
    vlSelf->top_soc__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 170224740553610851ull);
    vlSelf->top_soc__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15330589362140265414ull);
    vlSelf->top_soc__DOT__led = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12475220544543370511ull);
    vlSelf->top_soc__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9664666014505291808ull);
    vlSelf->top_soc__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9002839332166807902ull);
    vlSelf->top_soc__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12096939089219020287ull);
    vlSelf->top_soc__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1598364605464533917ull);
    vlSelf->top_soc__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12112284404021363080ull);
    vlSelf->top_soc__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10828227366880484969ull);
    vlSelf->top_soc__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9446718817502263057ull);
    vlSelf->top_soc__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4708167307685657398ull);
    vlSelf->top_soc__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7031644715196229217ull);
    vlSelf->top_soc__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1817538944747495156ull);
    vlSelf->top_soc__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6831734174909530421ull);
    vlSelf->top_soc__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11675591656556066895ull);
    vlSelf->top_soc__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2211753884876540909ull);
    vlSelf->top_soc__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10230790831513080228ull);
    vlSelf->top_soc__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10541872216624648380ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top_soc__DOT__inp_bram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11701805466683229492ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top_soc__DOT__wt_bram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11116220642318323581ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top_soc__DOT__bram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9623754850514552499ull);
    }
    vlSelf->top_soc__DOT__bram_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4252463490970548664ull);
    vlSelf->top_soc__DOT__mem_ready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8275177031033297733ull);
    vlSelf->top_soc__DOT__led_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10991968250493551792ull);
    vlSelf->top_soc__DOT__select_led = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13382871291812529206ull);
    vlSelf->top_soc__DOT__select_inp_bram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16942382683313407815ull);
    vlSelf->top_soc__DOT__select_wt_bram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6698048396670731184ull);
    vlSelf->top_soc__DOT__select_bram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13098840961251858435ull);
    vlSelf->top_soc__DOT__select_bnn_axi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7250925443145469514ull);
    vlSelf->top_soc__DOT__inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14179783998967893539ull);
    vlSelf->top_soc__DOT__inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3797384401304817835ull);
    vlSelf->top_soc__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12068265458616631055ull);
    vlSelf->top_soc__DOT__wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 77394040642982494ull);
    vlSelf->top_soc__DOT__axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11001271135551392307ull);
    vlSelf->top_soc__DOT__axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11689404696328320496ull);
    vlSelf->top_soc__DOT__axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13469703832218873622ull);
    vlSelf->top_soc__DOT__axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9309053587326396554ull);
    vlSelf->top_soc__DOT__axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2801656573455678308ull);
    vlSelf->top_soc__DOT__axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5058216535919150172ull);
    vlSelf->top_soc__DOT__uut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9458895623327036216ull);
    vlSelf->top_soc__DOT__uut__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16416053362703552172ull);
    vlSelf->top_soc__DOT__uut__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17672013181154554583ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13616940069636526837ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049215325447798684ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17534197183029997852ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1945509399422254697ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13655435354604352490ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4764623971997856546ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8518703441881531607ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1279005094470184372ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3464567689232861466ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1632045612134920875ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14657798455623297370ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 883181167726605295ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15368130544817288042ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6299950649073870357ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1481288489401171636ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9691565595949753938ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 467543368217836302ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5511456952618866552ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10746542237912345634ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7071508984029814148ull);
    vlSelf->top_soc__DOT__uut__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1619064057403034762ull);
    vlSelf->top_soc__DOT__uut__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7292941581521575817ull);
    vlSelf->top_soc__DOT__uut__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11835632368224755204ull);
    vlSelf->top_soc__DOT__uut__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 6280298162654414560ull);
    vlSelf->top_soc__DOT__uut__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14610530131740900557ull);
    vlSelf->top_soc__DOT__uut__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5869274609705458263ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15342246770406975777ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13251591832422499858ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16608982316968981160ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8501503079424057477ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12112873498719266814ull);
    vlSelf->top_soc__DOT__uut__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9884530409132343216ull);
    vlSelf->top_soc__DOT__uut__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14135438566020129700ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15400184933822019757ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6077787898485791649ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16125718795975577814ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10453810487168855000ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15724431051199910848ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8829062227802680416ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 151314963833583766ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15310481778312261538ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7589960475982007149ull);
    vlSelf->top_soc__DOT__uut__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12260371209199743713ull);
    vlSelf->top_soc__DOT__uut__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2729735127549986391ull);
    vlSelf->top_soc__DOT__uut__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 798218911993495133ull);
    vlSelf->top_soc__DOT__uut__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10662737863387285988ull);
    vlSelf->top_soc__DOT__uut__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14275281792461981071ull);
    vlSelf->top_soc__DOT__uut__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9562142103864370721ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_soc__DOT__uut__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 185638926597050402ull);
    }
    vlSelf->top_soc__DOT__uut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17620914689462303685ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10742860050267237621ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7297030821547457565ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1246706831274903406ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298885524133781293ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3681666863214217964ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1074798227182831019ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3461055297130498806ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12724806695956485977ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13936413306410236690ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 764577754182206534ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_int_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17151735172599644796ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1450709676855414295ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15847160032074931203ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15731515170040249183ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9544669894973031236ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6548844263181902654ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12443201649171408651ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12911065164556928982ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 625185202876233374ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903632764251719997ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 231001816823384149ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3629292491511629188ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9241746298664900253ull);
    vlSelf->top_soc__DOT__uut__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3408623983779257252ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_firstword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12133300438014365601ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_firstword_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10521973476983970307ull);
    vlSelf->top_soc__DOT__uut__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16701182715355847072ull);
    vlSelf->top_soc__DOT__uut__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11791086043996627401ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8223535429835008540ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9153583254278491709ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_rdata_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17701653641856233719ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15398397942164966705ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12300514922742929473ull);
    vlSelf->top_soc__DOT__uut__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17116515331540018936ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11948734702693969599ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9777611365031130155ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16203576913757414611ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1074083254296864970ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18146909476151870862ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3124232014198122473ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11279769848381381904ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8317539890979114196ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8808793811559978417ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9360868109539205142ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11807712444461546863ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631453436787755844ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17336959710976900292ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5566862567575311986ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6750628468025060440ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1538476979821628507ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4094977006882048522ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11543264685692358442ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7821271401724694217ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 933127181673021708ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6363632146070442232ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13741979694321070447ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8857709163271833950ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3262855361204652279ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4488965566248823492ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5271730313011129926ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13529857354206236481ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11840018104322652357ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10756678633170847672ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15510650412793505727ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3027762052416872625ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15853073217270565587ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3982223650409457472ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10690560561903257996ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11603187939463353876ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5393852106164494036ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7586723754655308067ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9852931164244667672ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16644100925773322744ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14691735949257899954ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5858142518670588512ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14763256492254353103ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4506456747575331241ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900504575042896030ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5693432423703822290ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4965316666812196913ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3851326030097249271ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10310103363225189320ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 119537733019326120ull);
    vlSelf->top_soc__DOT__uut__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2295555748951023489ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 343749921445880907ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18397745058076943100ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4475305727943472263ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7308766181323203283ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15809628932999161311ull);
    vlSelf->top_soc__DOT__uut__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857768251943548833ull);
    vlSelf->top_soc__DOT__uut__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15205842588483599754ull);
    vlSelf->top_soc__DOT__uut__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18228099201906113288ull);
    vlSelf->top_soc__DOT__uut__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8511602806615631580ull);
    vlSelf->top_soc__DOT__uut__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15064302591401711386ull);
    vlSelf->top_soc__DOT__uut__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9441012304335143476ull);
    vlSelf->top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11675917017211986442ull);
    vlSelf->top_soc__DOT__uut__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10318528055979179075ull);
    vlSelf->top_soc__DOT__uut__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1211859191857352600ull);
    vlSelf->top_soc__DOT__uut__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2520028580769551307ull);
    vlSelf->top_soc__DOT__uut__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157676801322495062ull);
    vlSelf->top_soc__DOT__uut__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5139142626650361570ull);
    vlSelf->top_soc__DOT__uut__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139969482489937955ull);
    vlSelf->top_soc__DOT__uut__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13749085414951384046ull);
    vlSelf->top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9056283836093962798ull);
    vlSelf->top_soc__DOT__uut__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379143453749689128ull);
    vlSelf->top_soc__DOT__uut__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14934099893320306395ull);
    vlSelf->top_soc__DOT__uut__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8415675166724323837ull);
    vlSelf->top_soc__DOT__uut__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16854064777827506987ull);
    vlSelf->top_soc__DOT__uut__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867144392837063630ull);
    vlSelf->top_soc__DOT__uut__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 245625261646230478ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6023643910245534530ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6694445388392470019ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8247204460764919820ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4868508666280295389ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10241166736166538074ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13321140626065917092ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15459324512403496417ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8216721393173688988ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3023896254522080254ull);
    vlSelf->top_soc__DOT__uut__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17175277923477873903ull);
    vlSelf->top_soc__DOT__uut__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16037861432620638205ull);
    vlSelf->top_soc__DOT__uut__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13174552195185759305ull);
    vlSelf->top_soc__DOT__uut__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16643825782894056204ull);
    vlSelf->top_soc__DOT__uut__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7655020836370715634ull);
    vlSelf->top_soc__DOT__uut__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16489034642862840102ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12698454449411720751ull);
    vlSelf->top_soc__DOT__uut__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11304968750744371084ull);
    vlSelf->top_soc__DOT__uut__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671942954127982775ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11219432749017423840ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12988207306207712280ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6480217964517227597ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8027436165639965189ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 971190978524680459ull);
    vlSelf->top_soc__DOT__uut__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12599200945318672468ull);
    vlSelf->top_soc__DOT__uut__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4465598935653490376ull);
    vlSelf->top_soc__DOT__uut__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12209256804169041594ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top_soc__DOT__uut__DOT__dbg_ascii_state, __VscopeHash, 1455449082184128786ull);
    vlSelf->top_soc__DOT__uut__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16770615607682656140ull);
    vlSelf->top_soc__DOT__uut__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2898949826266005528ull);
    vlSelf->top_soc__DOT__uut__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6481752866560093291ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8650726394753061312ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17620241268095659814ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10004900342710245874ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771425583466437090ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5661526886653134679ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1707694780692027777ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10195269698832046007ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10360009104098912400ull);
    vlSelf->top_soc__DOT__uut__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8476200230083339662ull);
    vlSelf->top_soc__DOT__uut__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16505272774686849925ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1652645762332547808ull);
    vlSelf->top_soc__DOT__uut__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469053278017254122ull);
    vlSelf->top_soc__DOT__uut__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15974993678676401328ull);
    vlSelf->top_soc__DOT__uut__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 958157214783192218ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8953303862171217052ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7013326459563416302ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9792886155088447216ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8129084721566418927ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12550470510825941968ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7754156046149751946ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_add_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1266093818377094141ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_shl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12755908413133899891ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_shr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6405146732324178703ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 149234051839948159ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 303776544099100474ull);
    vlSelf->top_soc__DOT__uut__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1592244005783769908ull);
    vlSelf->top_soc__DOT__uut__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12299385172009097987ull);
    vlSelf->top_soc__DOT__uut__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13557528194148349127ull);
    vlSelf->top_soc__DOT__uut__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7747469008167177159ull);
    vlSelf->top_soc__DOT__uut__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7098407282661604277ull);
    vlSelf->top_soc__DOT__uut__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1672865107336417848ull);
    vlSelf->top_soc__DOT__uut__DOT__decoded_rs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11101519830593000892ull);
    vlSelf->top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0 = 0;
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6047849335451726233ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__aresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9101245042899825239ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 612551008257599892ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13376659353103268754ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2004812412604762865ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18314418465305424219ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13775453964501938661ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6561079565754842276ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2948118984676538062ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451963942480679383ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16404040874612374877ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17180186471076174525ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16754372686514516424ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14629006072771474448ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12422437717737630230ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030873629346268202ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6315645129159696927ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16319066184860347914ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6838486347120857970ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1615491610285452630ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9047736510701357278ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11174856907264774828ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12673519891492788647ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9661720926736521888ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5082639853427427153ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__bnn_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8877823880572304056ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__bnn_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8987453230348618927ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__bnn_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4788351075645336299ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__bnn_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14702455849752190919ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10831321939966624236ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6276508715519107304ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483493272472552422ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__ar_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11313253324578705247ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9551614701717849625ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__status_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18133978244865190912ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__addr_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16735426956646752592ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__addr_write = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11634078650274426983ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14142655393233289135ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784794598345641486ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6353325334931984999ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10973961206293578678ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6600063211029479640ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4859382271677406896ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3251345465040957297ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8028372950207281859ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12372458077911234144ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11932382233128952974ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6346392464273561479ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4453852356189000481ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12653902444424924514ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 418545391761193085ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe_result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16121521776596196958ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10209747189377661069ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17391786992323068086ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8425329450716463832ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inputs_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13543046095767596735ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__weights_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2087932597772766914ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 848677926761434691ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11940255941239299544ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__input_register = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8646573947240252484ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__weight_register = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14902488064396167970ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__neuron_value = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14783988961535242718ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16399295441362257783ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clear_accumulator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1641468419263585179ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18192825820186230180ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6740115466782052789ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9005294321895700705ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3764139510196893065ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14321768913130023890ull);
    }
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10210647298189892569ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__sum_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13653315652254751000ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18122539592767080465ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__wt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16996178630840080798ull);
    vlSelf->top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9195071408062607461ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__uut__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__aclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
