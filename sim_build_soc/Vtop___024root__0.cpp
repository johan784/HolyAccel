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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vtop__ConstPool__TABLE_h3c1c5ec4_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
    top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_addr 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_valid 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_valid;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_rs1 = vlSelfRef.top_soc__DOT__uut__DOT__reg_op1;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_wstrb 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_rs2 = vlSelfRef.top_soc__DOT__uut__DOT__reg_op2;
    if (vlSelfRef.top_soc__DOT__uut__DOT__pcpi_ready) {
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_ready = 1U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wait 
            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_wait;
        vlSelfRef.top_soc__DOT__mem_instr = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_instr 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_wdata 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata;
        vlSelfRef.top_soc__DOT__axi_rdata = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_result 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wr = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_rd = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wr 
            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_wr;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_rd 
            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_rd;
    } else {
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_ready = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wait 
            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_wait;
        vlSelfRef.top_soc__DOT__mem_instr = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_instr 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_wdata 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata;
        vlSelfRef.top_soc__DOT__axi_rdata = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_result 
            = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wr = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_rd = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1))
          ? vlSelfRef.top_soc__DOT__uut__DOT__cpuregs
         [vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1]
          : 0U);
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2))
          ? vlSelfRef.top_soc__DOT__uut__DOT__cpuregs
         [vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2]
          : 0U);
    vlSelfRef.top_soc__DOT__uut__DOT__alu_shl = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                 << 
                                                 (0x0000001fU 
                                                  & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2));
    vlSelfRef.top_soc__DOT__uut__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state)) 
           & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger));
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 0U;
    __Vtableidx1 = vlSelfRef.top_soc__DOT__uut__DOT__cpu_state;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][0U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][1U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][2U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][3U];
    vlSelfRef.top_soc__DOT__uut__DOT__alu_shr = (IData)(
                                                        (0x00000001ffffffffULL 
                                                         & VL_SHIFTRS_QQI(33,33,5, 
                                                                          (((QData)((IData)(
                                                                                (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) 
                                                                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai)) 
                                                                                & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                                                >> 0x0000001fU)))) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_op1))), 
                                                                          (0x0000001fU 
                                                                           & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2))));
    vlSelfRef.top_soc__DOT__uut__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh))));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__enable 
        = (2U == (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state));
    vlSelfRef.top_soc__DOT__trap = vlSelfRef.top_soc__DOT__uut__DOT__trap;
    vlSelfRef.top_soc__DOT__led = vlSelfRef.top_soc__DOT__led_reg;
    vlSelfRef.top_soc__DOT__mem_wdata = vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__w_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_addr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_dout 
        = vlSelfRef.top_soc__DOT__inp_bram_dout;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_addr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_dout 
        = vlSelfRef.top_soc__DOT__wt_bram_dout;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__neuron_value 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_imm;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_opcode;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs1;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs2;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rd;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_done 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_busy 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy;
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
        if (vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) {
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 1U;
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata 
                = (vlSelfRef.top_soc__DOT__uut__DOT__reg_pc 
                   + ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch)))) {
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 1U;
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu)
                    ? vlSelfRef.top_soc__DOT__uut__DOT__alu_out_q
                    : vlSelfRef.top_soc__DOT__uut__DOT__reg_out);
        }
    }
    vlSelfRef.top_soc__DOT__uut__DOT__next_pc = (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) 
                                                  & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_store))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelfRef.top_soc__DOT__uut__DOT__reg_out)
                                                  : vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc);
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_start 
        = (1U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg);
    vlSelfRef.top_soc__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)));
    vlSelfRef.top_soc__DOT__mem_valid = vlSelfRef.top_soc__DOT__uut__DOT__mem_valid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__input_register 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inputs_reg;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__weight_register 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__weights_reg;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata = vlSelfRef.top_soc__DOT__mem_rdata;
    if ((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb = 0x0fU;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = vlSelfRef.top_soc__DOT__uut__DOT__reg_op2;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb = 0x0cU;
            vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
                = (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                   >> 0x10U);
        } else {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb = 3U;
            vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata);
        }
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = ((vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)));
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = ((vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2))));
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                ? ((1U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                    ? (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata)));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_eq = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                == vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__uut__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                 < vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__rst = vlSelfRef.rst;
    vlSelfRef.top_soc__DOT__uut__DOT__instr_trap = 
        (1U & (~ ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) 
                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) 
                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) 
                        | (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) 
                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) 
                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) 
                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_blt) 
                                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) 
                                        | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu) 
                                           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) 
                                              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lb) 
                                                 | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lh) 
                                                    | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lw) 
                                                       | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu) 
                                                          | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu) 
                                                             | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sb) 
                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sh) 
                                                                   | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sw) 
                                                                      | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_addi) 
                                                                         | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) 
                                                                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) 
                                                                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu))))))))))))))))))))))))))))) 
                           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xor) 
                              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srl) 
                                 | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) 
                                    | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_or) 
                                       | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_and) 
                                          | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) 
                                             | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) 
                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) 
                                                   | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh) 
                                                      | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_fence) 
                                                         | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_getq) 
                                                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_setq) 
                                                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq) 
                                                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_maskirq) 
                                                                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_timer) 
                                                                        | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bvalid 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rvalid 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__r_valid;
    vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_blt) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lb) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lw) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sb) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sw) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_addi) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_add) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sub) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub 
            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
               - vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub 
            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
               + vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sll) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slt) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_xor) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srl) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_or) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_and) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_fence) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_getq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_setq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_maskirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_waitirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_timer) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.top_soc__DOT__mem_wstrb = vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb;
    vlSelfRef.top_soc__DOT__mem_addr = vlSelfRef.top_soc__DOT__uut__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__enable 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__enable;
    vlSelfRef.trap = vlSelfRef.top_soc__DOT__trap;
    vlSelfRef.led = vlSelfRef.top_soc__DOT__led;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata 
        = vlSelfRef.top_soc__DOT__mem_wdata;
    vlSelfRef.top_soc__DOT__axi_awready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awready;
    vlSelfRef.top_soc__DOT__axi_wready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wready;
    vlSelfRef.top_soc__DOT__axi_arready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arready;
    vlSelfRef.top_soc__DOT__inp_bram_addr = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_dout 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_dout;
    vlSelfRef.top_soc__DOT__wt_bram_addr = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_dout 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_dout;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe_result 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__neuron_value;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__status_reg 
        = (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_done) 
            << 1U) | (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_busy));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_addr = 
        (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
          | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst))
          ? (((vlSelfRef.top_soc__DOT__uut__DOT__next_pc 
               >> 2U) + (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword_xfer)) 
             << 2U) : (0xfffffffcU & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_start;
    vlSelfRef.top_soc__DOT__uut__DOT__clk = vlSelfRef.top_soc__DOT__clk;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aclk 
        = vlSelfRef.top_soc__DOT__clk;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_busy = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                                                  | (IData)(vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__inp 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__input_register;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__wt 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__weight_register;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_rdata 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 = 0U;
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_eq;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_eq)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_lts)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_slti_blt_slt) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_lts;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 0U;
    if (vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_compare) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xor))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             ^ vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_or))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             | vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_and))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aresetn 
        = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__rst)));
    vlSelfRef.top_soc__DOT__uut__DOT__resetn = (1U 
                                                & (~ (IData)(vlSelfRef.top_soc__DOT__rst)));
    vlSelfRef.top_soc__DOT__axi_bvalid = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bvalid;
    vlSelfRef.top_soc__DOT__axi_rvalid = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rvalid;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_ascii_instr;
    if (vlSelfRef.top_soc__DOT__uut__DOT__dbg_next) {
        if (vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_imm;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_opcode;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs1;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs2;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rd;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode))
                    ? vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode));
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rd;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
                = vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.top_soc__DOT__select_led = 0U;
    vlSelfRef.top_soc__DOT__select_bram = 0U;
    if ((0x0000ffffU >= vlSelfRef.top_soc__DOT__mem_addr)) {
        vlSelfRef.top_soc__DOT__select_bram = 1U;
    }
    vlSelfRef.top_soc__DOT__select_inp_bram = 0U;
    vlSelfRef.top_soc__DOT__select_wt_bram = 0U;
    vlSelfRef.top_soc__DOT__bram_addr = (0x00003fffU 
                                         & (vlSelfRef.top_soc__DOT__mem_addr 
                                            >> 2U));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awaddr 
        = vlSelfRef.top_soc__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_araddr 
        = vlSelfRef.top_soc__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__select_bnn_axi = 0U;
    if ((0x0000ffffU < vlSelfRef.top_soc__DOT__mem_addr)) {
        if ((1U & (~ ((0x40000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                      & (0x4000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
            if ((1U & (~ ((0x50000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                          & (0x5000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
                if ((1U & (~ ((0x30000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                              & (0x300000ffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
                    if ((0x80000000U == vlSelfRef.top_soc__DOT__mem_addr)) {
                        vlSelfRef.top_soc__DOT__select_led = 1U;
                    }
                }
                if (((0x30000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                     & (0x300000ffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
                    vlSelfRef.top_soc__DOT__select_bnn_axi = 1U;
                }
            }
            if (((0x50000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                 & (0x5000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
                vlSelfRef.top_soc__DOT__select_wt_bram = 1U;
            }
        }
        if (((0x40000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
             & (0x4000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
            vlSelfRef.top_soc__DOT__select_inp_bram = 1U;
        }
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator = 0U;
    if (((0U == (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state)) 
         & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start))) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator = 1U;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aclk;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__inp 
              ^ vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__wt));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))))));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                     + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4
                          [1U]));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__rstn 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aresetn;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
           & ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) 
              & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)));
    vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word 
        = vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__prefetched_high_word)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn))))) {
        vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_read = 
        ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
         & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word)) 
            & ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) 
               & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                     | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata))))));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_write 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awaddr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_araddr;
    if (vlSelfRef.top_soc__DOT__select_bnn_axi) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arvalid 
            = ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) 
               & (IData)(vlSelfRef.top_soc__DOT__mem_valid));
        if ((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
            top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid 
                = vlSelfRef.top_soc__DOT__mem_valid;
            vlSelfRef.top_soc__DOT__mem_ready = vlSelfRef.top_soc__DOT__axi_bvalid;
        } else {
            top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid = 0U;
            vlSelfRef.top_soc__DOT__mem_ready = vlSelfRef.top_soc__DOT__axi_rvalid;
        }
    } else {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arvalid = 0U;
        top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid = 0U;
        vlSelfRef.top_soc__DOT__mem_ready = vlSelfRef.top_soc__DOT__mem_ready_reg;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__rstn 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__rstn;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awvalid 
        = top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wvalid 
        = top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_ready = vlSelfRef.top_soc__DOT__mem_ready;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_ready 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_ready;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer = (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_ready) 
                                                   & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_valid)) 
                                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
                                                     & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer)
            ? vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata
            : vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q);
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched_noshuffle;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_done = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
                                                  & ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer) 
                                                       & ((0U 
                                                           != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state)) 
                                                          & (IData)(vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0))) 
                                                      | ((3U 
                                                          == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state)) 
                                                         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst))) 
                                                     & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword)) 
                                                        | ((~ 
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched))) 
                                                           & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer)))));
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
                                                    ((((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clk__0))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aclk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__u_bnn_accelerator__DOT__aclk__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__uut__DOT__clk__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.top_soc__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_soc__DOT__clk__0))))))));
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
    SData/*8:0*/ __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator;
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator = 0;
    // Body
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator;
    if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__rstn) {
        if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clear_accumulator) {
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator = 0U;
        } else if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__enable) {
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator 
                = (0x000001ffU & ((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator) 
                                  + (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__sum_reg)));
        }
    } else {
        __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator = 0U;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator 
        = __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__neuron_value 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__accumulator;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__top_soc__DOT__uut__DOT__mem_state;
    __Vdly__top_soc__DOT__uut__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__top_soc__DOT__uut__DOT__reg_sh;
    __Vdly__top_soc__DOT__uut__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__uut__DOT__reg_out;
    __Vdly__top_soc__DOT__uut__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__top_soc__DOT__uut__DOT__count_cycle;
    __Vdly__top_soc__DOT__uut__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__decoder_trigger;
    __Vdly__top_soc__DOT__uut__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger;
    __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst;
    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__top_soc__DOT__uut__DOT__mem_wordsize;
    __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__latched_is_lu;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__latched_is_lh;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__latched_is_lb;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__uut__DOT__reg_pc;
    __Vdly__top_soc__DOT__uut__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__top_soc__DOT__uut__DOT__count_instr;
    __Vdly__top_soc__DOT__uut__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch;
    __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__top_soc__DOT__uut__DOT__cpu_state;
    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__uut__DOT__reg_op1;
    __Vdly__top_soc__DOT__uut__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__top_soc__DOT__uut__DOT__pcpi_valid;
    __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0;
    CData/*3:0*/ __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter;
    __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter = 0;
    IData/*31:0*/ __VdlyVal__top_soc__DOT__uut__DOT__cpuregs__v0;
    __VdlyVal__top_soc__DOT__uut__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_soc__DOT__uut__DOT__cpuregs__v0;
    __VdlyDim0__top_soc__DOT__uut__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__uut__DOT__cpuregs__v0;
    __VdlySet__top_soc__DOT__uut__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter 
        = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout_counter;
    __Vdly__top_soc__DOT__uut__DOT__reg_sh = vlSelfRef.top_soc__DOT__uut__DOT__reg_sh;
    __Vdly__top_soc__DOT__uut__DOT__count_cycle = vlSelfRef.top_soc__DOT__uut__DOT__count_cycle;
    __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger 
        = vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lu = vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lu;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lh = vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lh;
    __Vdly__top_soc__DOT__uut__DOT__latched_is_lb = vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lb;
    __Vdly__top_soc__DOT__uut__DOT__count_instr = vlSelfRef.top_soc__DOT__uut__DOT__count_instr;
    __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_valid;
    __Vdly__top_soc__DOT__uut__DOT__decoder_trigger 
        = vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger;
    __Vdly__top_soc__DOT__uut__DOT__reg_pc = vlSelfRef.top_soc__DOT__uut__DOT__reg_pc;
    __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize;
    __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
    __Vdly__top_soc__DOT__uut__DOT__reg_out = vlSelfRef.top_soc__DOT__uut__DOT__reg_out;
    __Vdly__top_soc__DOT__uut__DOT__cpu_state = vlSelfRef.top_soc__DOT__uut__DOT__cpu_state;
    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst;
    __VdlySet__top_soc__DOT__uut__DOT__cpuregs__v0 = 0U;
    __Vdly__top_soc__DOT__uut__DOT__reg_op1 = vlSelfRef.top_soc__DOT__uut__DOT__reg_op1;
    __Vdly__top_soc__DOT__uut__DOT__mem_state = vlSelfRef.top_soc__DOT__uut__DOT__mem_state;
    if ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
          & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_rd)))) {
        __VdlyVal__top_soc__DOT__uut__DOT__cpuregs__v0 
            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata;
        __VdlyDim0__top_soc__DOT__uut__DOT__cpuregs__v0 
            = vlSelfRef.top_soc__DOT__uut__DOT__latched_rd;
        __VdlySet__top_soc__DOT__uut__DOT__cpuregs__v0 = 1U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__trace_valid = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__alu_wait_2 = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__alu_wait = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__trace_data = 0ULL;
    vlSelfRef.top_soc__DOT__uut__DOT__q_ascii_instr 
        = vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr;
    vlSelfRef.top_soc__DOT__uut__DOT__q_insn_imm = vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm;
    vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs1 = vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1;
    vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs2 = vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2;
    vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rd = vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd;
    vlSelfRef.top_soc__DOT__uut__DOT__q_insn_opcode 
        = vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode;
    vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word;
    if (vlSelfRef.top_soc__DOT__uut__DOT__launch_next_insn) {
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_addr 
            = vlSelfRef.top_soc__DOT__uut__DOT__next_pc;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0_q = vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0;
    vlSelfRef.top_soc__DOT__uut__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__latched_trace = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.top_soc__DOT__uut__DOT__eoi = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__irq_pending = vlSelfRef.top_soc__DOT__uut__DOT__next_irq_pending;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_next = vlSelfRef.top_soc__DOT__uut__DOT__launch_next_insn;
    vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger_q) {
        vlSelfRef.top_soc__DOT__uut__DOT__cached_ascii_instr 
            = vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr;
        vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode))
                ? vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode));
        vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rd 
            = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rd;
        vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs1 
            = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1;
        vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs2 
            = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2;
        vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_imm 
            = vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)) 
               | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__trap)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_valid_insn = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__launch_next_insn) {
        vlSelfRef.top_soc__DOT__uut__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word) {
        vlSelfRef.top_soc__DOT__uut__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)) 
                  | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__trap))))) {
        if (vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata 
                = vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_read) 
             | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write))) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_addr 
                = vlSelfRef.top_soc__DOT__uut__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__top_soc__DOT__uut__DOT__cpuregs__v0) {
        vlSelfRef.top_soc__DOT__uut__DOT__cpuregs[__VdlyDim0__top_soc__DOT__uut__DOT__cpuregs__v0] 
            = __VdlyVal__top_soc__DOT__uut__DOT__cpuregs__v0;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_wdata 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_addr 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__mem_addr = vlSelfRef.top_soc__DOT__uut__DOT__mem_addr;
    if (vlSelfRef.top_soc__DOT__uut__DOT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__last_mem_valid)))) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword_reg 
                = vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword;
        }
    } else {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
           && ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)) 
               | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)))) {
            __Vdly__top_soc__DOT__uut__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)) 
                   | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_ready)))) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_valid = 0U;
        }
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_read) 
             | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write))) {
            vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata))) {
                vlSelfRef.top_soc__DOT__uut__DOT__mem_valid 
                    = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word)));
                vlSelfRef.top_soc__DOT__uut__DOT__mem_instr 
                    = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst));
                vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb = 0U;
                __Vdly__top_soc__DOT__uut__DOT__mem_state = 1U;
            }
            if (vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata) {
                vlSelfRef.top_soc__DOT__uut__DOT__mem_valid = 1U;
                vlSelfRef.top_soc__DOT__uut__DOT__mem_instr = 0U;
                __Vdly__top_soc__DOT__uut__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) {
            if (vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer) {
                vlSelfRef.top_soc__DOT__uut__DOT__mem_valid = 0U;
                vlSelfRef.top_soc__DOT__uut__DOT__mem_la_secondword = 0U;
                __Vdly__top_soc__DOT__uut__DOT__mem_state 
                    = (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) {
            if (vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer) {
                vlSelfRef.top_soc__DOT__uut__DOT__mem_valid = 0U;
                __Vdly__top_soc__DOT__uut__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) {
            if (vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) {
                __Vdly__top_soc__DOT__uut__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awaddr 
        = vlSelfRef.top_soc__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_araddr 
        = vlSelfRef.top_soc__DOT__mem_addr;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_opcode;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs1;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_state = __Vdly__top_soc__DOT__uut__DOT__mem_state;
    vlSelfRef.top_soc__DOT__mem_instr = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_instr 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_instr;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_valid 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_valid;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_wstrb 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb;
    vlSelfRef.top_soc__DOT__uut__DOT__trap = 0U;
    __Vdly__top_soc__DOT__uut__DOT__reg_sh = 0U;
    __Vdly__top_soc__DOT__uut__DOT__reg_out = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_wdata = 0U;
    __Vdly__top_soc__DOT__uut__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done));
    vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger_q 
        = vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger;
    __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.top_soc__DOT__uut__DOT__resetn) {
        __Vdly__top_soc__DOT__uut__DOT__count_cycle 
            = (1ULL + vlSelfRef.top_soc__DOT__uut__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                vlSelfRef.top_soc__DOT__uut__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__do_waitirq))));
                __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 0U;
                __Vdly__top_soc__DOT__uut__DOT__latched_is_lu = 0U;
                __Vdly__top_soc__DOT__uut__DOT__latched_is_lh = 0U;
                __Vdly__top_soc__DOT__uut__DOT__latched_is_lb = 0U;
                vlSelfRef.top_soc__DOT__uut__DOT__latched_rd 
                    = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rd;
                vlSelfRef.top_soc__DOT__uut__DOT__latched_compr 
                    = vlSelfRef.top_soc__DOT__uut__DOT__compressed_instr;
                vlSelfRef.top_soc__DOT__uut__DOT__current_pc 
                    = vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc;
                if (vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) {
                    vlSelfRef.top_soc__DOT__uut__DOT__current_pc 
                        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu)
                                               ? vlSelfRef.top_soc__DOT__uut__DOT__alu_out_q
                                               : vlSelfRef.top_soc__DOT__uut__DOT__reg_out))
                            : vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc);
                }
                __Vdly__top_soc__DOT__uut__DOT__reg_pc 
                    = vlSelfRef.top_soc__DOT__uut__DOT__current_pc;
                vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc 
                    = vlSelfRef.top_soc__DOT__uut__DOT__current_pc;
                vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 0U;
                vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu = 0U;
                vlSelfRef.top_soc__DOT__uut__DOT__latched_branch = 0U;
                if (vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger) {
                    __Vdly__top_soc__DOT__uut__DOT__count_instr 
                        = (1ULL + vlSelfRef.top_soc__DOT__uut__DOT__count_instr);
                    vlSelfRef.top_soc__DOT__uut__DOT__irq_delay 
                        = vlSelfRef.top_soc__DOT__uut__DOT__irq_active;
                    vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc 
                        = (vlSelfRef.top_soc__DOT__uut__DOT__current_pc 
                           + ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) {
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                        vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc 
                            = (vlSelfRef.top_soc__DOT__uut__DOT__current_pc 
                               + vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j);
                        vlSelfRef.top_soc__DOT__uut__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 0U;
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq))));
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                __Vdly__top_soc__DOT__uut__DOT__reg_op1 = 0U;
                vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_trap) 
                      | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_trap) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2);
                        vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_ready) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                            __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0U;
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_rd;
                            vlSelfRef.top_soc__DOT__uut__DOT__latched_store 
                                = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wr;
                            __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ecall_ebreak))) {
                            __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0U;
                            __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x80U;
                        }
                    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = (IData)(vlSelfRef.top_soc__DOT__uut__DOT__count_cycle);
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = (IData)((vlSelfRef.top_soc__DOT__uut__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = (IData)(vlSelfRef.top_soc__DOT__uut__DOT__count_instr);
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = (IData)((vlSelfRef.top_soc__DOT__uut__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui)
                                ? 0U : vlSelfRef.top_soc__DOT__uut__DOT__reg_pc);
                        vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                            = vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm;
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                            = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__reg_out 
                            = vlSelfRef.top_soc__DOT__uut__DOT__timer;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                        vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                        vlSelfRef.top_soc__DOT__uut__DOT__timer 
                            = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_trap)))) {
                    __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 1U;
                    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_slli_srli_srai) {
                    __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                        = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 4U;
                } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                        = vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm;
                    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                        = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 8U;
                } else {
                    __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2);
                    vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val 
                        = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                    vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw) {
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 2U;
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_sll_srl_sra) {
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                            = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2);
                vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                    = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val 
                    = vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2;
                vlSelfRef.top_soc__DOT__uut__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.top_soc__DOT__uut__DOT__instr_trap) {
                    __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_ready) {
                        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0U;
                        __Vdly__top_soc__DOT__uut__DOT__reg_out 
                            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_rd;
                        vlSelfRef.top_soc__DOT__uut__DOT__latched_store 
                            = vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wr;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ecall_ebreak))) {
                        __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0U;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x80U;
                    }
                } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw) {
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 2U;
                    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_sll_srl_sra) {
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 4U;
                } else {
                    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                        = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                __Vdly__top_soc__DOT__uut__DOT__reg_out 
                    = (vlSelfRef.top_soc__DOT__uut__DOT__reg_pc 
                       + vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm);
                if (vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_rd = 0U;
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_store 
                        = vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0;
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_branch 
                        = vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0;
                    if (vlSelfRef.top_soc__DOT__uut__DOT__mem_done) {
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0) {
                        vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rinst = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_branch 
                        = vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr;
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 1U;
                    vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu = 1U;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_sh))) {
                    __Vdly__top_soc__DOT__uut__DOT__reg_out 
                        = vlSelfRef.top_soc__DOT__uut__DOT__reg_op1;
                    __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst 
                        = vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch;
                    __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) 
                         | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sll))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) 
                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srl))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) 
                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 4U);
                    }
                    __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) 
                         | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sll))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) 
                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srl))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) 
                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, 1U);
                    }
                    __Vdly__top_soc__DOT__uut__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                               + vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm);
                        vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sb) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sh) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sw) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done))) {
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                        __Vdly__top_soc__DOT__uut__DOT__decoder_trigger = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done))) {
                        if (vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lu) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word;
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lh) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word));
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lb) {
                            __Vdly__top_soc__DOT__uut__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word));
                        }
                        __Vdly__top_soc__DOT__uut__DOT__decoder_trigger = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata)))) {
                        __Vdly__top_soc__DOT__uut__DOT__reg_op1 
                            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                               + vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm);
                        vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lb) 
                             | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu))) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu))) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lw) {
                            __Vdly__top_soc__DOT__uut__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__top_soc__DOT__uut__DOT__latched_is_lu 
                            = vlSelfRef.top_soc__DOT__uut__DOT__is_lbu_lhu_lw;
                        __Vdly__top_soc__DOT__uut__DOT__latched_is_lh 
                            = vlSelfRef.top_soc__DOT__uut__DOT__instr_lh;
                        __Vdly__top_soc__DOT__uut__DOT__latched_is_lb 
                            = vlSelfRef.top_soc__DOT__uut__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__top_soc__DOT__uut__DOT__count_cycle = 0ULL;
        __Vdly__top_soc__DOT__uut__DOT__count_instr = 0ULL;
        vlSelfRef.top_soc__DOT__uut__DOT__timer = 0U;
        __Vdly__top_soc__DOT__uut__DOT__reg_pc = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__latched_store = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__latched_branch = 0U;
        __Vdly__top_soc__DOT__uut__DOT__latched_is_lu = 0U;
        __Vdly__top_soc__DOT__uut__DOT__latched_is_lh = 0U;
        __Vdly__top_soc__DOT__uut__DOT__latched_is_lb = 0U;
        __Vdly__top_soc__DOT__uut__DOT__pcpi_valid = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__irq_delay = 0U;
        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
         & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)))) {
            __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize)) 
             & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)) {
            __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
          & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.top_soc__DOT__uut__DOT__reg_pc)))) {
        __Vdly__top_soc__DOT__uut__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)) 
               | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done)))) {
        __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch = 0U;
        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rinst) {
        __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_rdata) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__set_mem_do_wdata) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__current_pc = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__reg_sh = __Vdly__top_soc__DOT__uut__DOT__reg_sh;
    vlSelfRef.top_soc__DOT__uut__DOT__count_cycle = __Vdly__top_soc__DOT__uut__DOT__count_cycle;
    vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lu 
        = __Vdly__top_soc__DOT__uut__DOT__latched_is_lu;
    vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lh 
        = __Vdly__top_soc__DOT__uut__DOT__latched_is_lh;
    vlSelfRef.top_soc__DOT__uut__DOT__latched_is_lb 
        = __Vdly__top_soc__DOT__uut__DOT__latched_is_lb;
    vlSelfRef.top_soc__DOT__uut__DOT__count_instr = __Vdly__top_soc__DOT__uut__DOT__count_instr;
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done))) {
        vlSelfRef.top_soc__DOT__uut__DOT__instr_waitirq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                              >> 0x0fU));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1))
          ? vlSelfRef.top_soc__DOT__uut__DOT__cpuregs
         [vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1]
          : 0U);
    vlSelfRef.top_soc__DOT__uut__DOT__reg_pc = __Vdly__top_soc__DOT__uut__DOT__reg_pc;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize 
        = __Vdly__top_soc__DOT__uut__DOT__mem_wordsize;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch 
        = __Vdly__top_soc__DOT__uut__DOT__mem_do_prefetch;
    vlSelfRef.top_soc__DOT__uut__DOT__reg_out = __Vdly__top_soc__DOT__uut__DOT__reg_out;
    vlSelfRef.top_soc__DOT__uut__DOT__cpu_state = __Vdly__top_soc__DOT__uut__DOT__cpu_state;
    vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 = __Vdly__top_soc__DOT__uut__DOT__reg_op1;
    vlSelfRef.top_soc__DOT__trap = vlSelfRef.top_soc__DOT__uut__DOT__trap;
    vlSelfRef.top_soc__DOT__uut__DOT__do_waitirq = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_write 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
           & ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) 
              & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.top_soc__DOT__uut__DOT__cpu_state;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][0U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][1U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][2U];
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_h3c1c5ec4_0[__Vtableidx1][3U];
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 0U;
    vlSelfRef.top_soc__DOT__uut__DOT__next_pc = (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) 
                                                  & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_store))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelfRef.top_soc__DOT__uut__DOT__reg_out)
                                                  : vlSelfRef.top_soc__DOT__uut__DOT__reg_next_pc);
    vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word 
        = vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__prefetched_high_word)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__irq_state = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn))))) {
        vlSelfRef.top_soc__DOT__uut__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out_q = vlSelfRef.top_soc__DOT__uut__DOT__alu_out;
    if ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
          & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout_counter))) {
            __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout_counter))));
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_insn 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_getq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_setq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_maskirq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_timer = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_rs2 = vlSelfRef.top_soc__DOT__uut__DOT__reg_op2;
    if ((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = vlSelfRef.top_soc__DOT__uut__DOT__reg_op2;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = ((vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2));
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wdata 
            = ((vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2))));
        vlSelfRef.top_soc__DOT__uut__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_rs1 = vlSelfRef.top_soc__DOT__uut__DOT__reg_op1;
    vlSelfRef.top_soc__DOT__uut__DOT__alu_shl = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                 << 
                                                 (0x0000001fU 
                                                  & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2));
    vlSelfRef.top_soc__DOT__uut__DOT__alu_eq = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                == vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__uut__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.top_soc__DOT__uut__DOT__reg_op1, vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                 < vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    vlSelfRef.top_soc__DOT__uut__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lw)));
    vlSelfRef.trap = vlSelfRef.top_soc__DOT__trap;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_valid = __Vdly__top_soc__DOT__uut__DOT__pcpi_valid;
    vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout_counter 
        = __Vdly__top_soc__DOT__uut__DOT__pcpi_timeout_counter;
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state))) {
        if (vlSelfRef.top_soc__DOT__uut__DOT__latched_branch) {
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 1U;
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata 
                = (vlSelfRef.top_soc__DOT__uut__DOT__reg_pc 
                   + ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_branch)))) {
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_write = 1U;
            vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__latched_stalu)
                    ? vlSelfRef.top_soc__DOT__uut__DOT__alu_out_q
                    : vlSelfRef.top_soc__DOT__uut__DOT__reg_out);
        }
    }
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done))) {
        vlSelfRef.top_soc__DOT__uut__DOT__compressed_instr = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                              >> 7U));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                              >> 0x14U));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2))
          ? vlSelfRef.top_soc__DOT__uut__DOT__cpuregs
         [vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2]
          : 0U);
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
    }
    vlSelfRef.top_soc__DOT__uut__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh))));
    vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jal)));
    vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_add) 
                          | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sub)))))));
    vlSelfRef.top_soc__DOT__uut__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_blt) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slt)));
    vlSelfRef.top_soc__DOT__uut__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu)));
    vlSelfRef.top_soc__DOT__uut__DOT__is_compare = 
        ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
         | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) 
            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slt) 
               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) 
                  | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__instr_beq 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bne 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_blt 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bge 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lb 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lh 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lw 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sb 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sh 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sw 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_addi 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_slti 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_xori 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_ori 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_andi 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_slli 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_srli 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_srai 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))))));
        vlSelfRef.top_soc__DOT__uut__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__is_compare = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jal)
                ? vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) 
                    | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)
                    : (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_add 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sub 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sll 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_slt 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_xor 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_srl 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sra 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_or 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_and 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q)));
        vlSelfRef.top_soc__DOT__uut__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer) {
        vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_done))) {
        vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                                                  >> 0x0000000bU)))));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
                                               >> 0x0000000bU)))));
        vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
        vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched)));
        vlSelfRef.top_soc__DOT__uut__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn)))) {
        vlSelfRef.top_soc__DOT__uut__DOT__instr_fence = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__irq_active = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__pcpi_timeout = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__is_compare = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_beq = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bne = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_blt = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bge = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_addi = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_slti = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_xori = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_ori = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_andi = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_add = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sub = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sll = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_slt = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_xor = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_srl = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_sra = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_or = 0U;
        vlSelfRef.top_soc__DOT__uut__DOT__instr_and = 0U;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_insn_imm;
    vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger 
        = __Vdly__top_soc__DOT__uut__DOT__decoder_pseudo_trigger;
    vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger 
        = __Vdly__top_soc__DOT__uut__DOT__decoder_trigger;
    vlSelfRef.top_soc__DOT__uut__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__cpu_state)) 
           & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__decoder_trigger));
    vlSelfRef.top_soc__DOT__uut__DOT__alu_shr = (IData)(
                                                        (0x00000001ffffffffULL 
                                                         & VL_SHIFTRS_QQI(33,33,5, 
                                                                          (((QData)((IData)(
                                                                                (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) 
                                                                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai)) 
                                                                                & (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
                                                                                >> 0x0000001fU)))) 
                                                                            << 0x00000020U) 
                                                                           | (QData)((IData)(vlSelfRef.top_soc__DOT__uut__DOT__reg_op1))), 
                                                                          (0x0000001fU 
                                                                           & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2))));
    vlSelfRef.top_soc__DOT__uut__DOT__instr_trap = 
        (1U & (~ ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) 
                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) 
                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) 
                        | (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) 
                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) 
                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) 
                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_blt) 
                                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) 
                                        | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu) 
                                           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) 
                                              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lb) 
                                                 | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lh) 
                                                    | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lw) 
                                                       | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu) 
                                                          | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu) 
                                                             | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sb) 
                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sh) 
                                                                   | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sw) 
                                                                      | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_addi) 
                                                                         | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) 
                                                                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) 
                                                                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu))))))))))))))))))))))))))))) 
                           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xor) 
                              | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_srl) 
                                 | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) 
                                    | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_or) 
                                       | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_and) 
                                          | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) 
                                             | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) 
                                                | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) 
                                                   | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh) 
                                                      | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_fence) 
                                                         | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_getq) 
                                                            | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_setq) 
                                                               | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq) 
                                                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_maskirq) 
                                                                     | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_timer) 
                                                                        | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lui) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_auipc) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_jal) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_jalr) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_blt) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lb) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lw) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lbu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_lhu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sb) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sw) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_addi) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slti) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sltiu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slli) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srli) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srai) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_add) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sub) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub 
            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
               - vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub 
            = (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
               + vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sll) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_slt) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_xor) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_srl) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_sra) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_or) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_and) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycle) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdcycleh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstr) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_rdinstrh) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_fence) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_getq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_setq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_retirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_maskirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_waitirq) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_timer) {
        vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 = 0U;
    if (vlSelfRef.top_soc__DOT__uut__DOT__instr_beq) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_eq;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bne) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_eq)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bge) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_lts)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__instr_bgeu) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu)));
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_slti_blt_slt) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_lts;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0 
            = vlSelfRef.top_soc__DOT__uut__DOT__alu_ltu;
    }
    vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 0U;
    if (vlSelfRef.top_soc__DOT__uut__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = vlSelfRef.top_soc__DOT__uut__DOT__alu_add_sub;
    } else if (vlSelfRef.top_soc__DOT__uut__DOT__is_compare) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = vlSelfRef.top_soc__DOT__uut__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xori) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_xor))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             ^ vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_ori) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_or))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             | vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_andi) 
                | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__instr_and))) {
        vlSelfRef.top_soc__DOT__uut__DOT__alu_out = 
            (vlSelfRef.top_soc__DOT__uut__DOT__reg_op1 
             & vlSelfRef.top_soc__DOT__uut__DOT__reg_op2);
    }
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
        = vlSelfRef.top_soc__DOT__uut__DOT__q_ascii_instr;
    if (vlSelfRef.top_soc__DOT__uut__DOT__dbg_next) {
        if (vlSelfRef.top_soc__DOT__uut__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_opcode;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs1;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rd;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_rs2;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_insn_imm;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
                = vlSelfRef.top_soc__DOT__uut__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode))
                    ? vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__next_insn_opcode));
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs1 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs1;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rd 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rd;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_rs2 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_rs2;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_insn_imm 
                = vlSelfRef.top_soc__DOT__uut__DOT__decoded_imm;
            vlSelfRef.top_soc__DOT__uut__DOT__dbg_ascii_instr 
                = vlSelfRef.top_soc__DOT__uut__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst 
        = __Vdly__top_soc__DOT__uut__DOT__mem_do_rinst;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_addr = 
        (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
          | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst))
          ? (((vlSelfRef.top_soc__DOT__uut__DOT__next_pc 
               >> 2U) + (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword_xfer)) 
             << 2U) : (0xfffffffcU & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_la_read = 
        ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
         & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word)) 
            & ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state))) 
               & ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                     | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata))))));
    vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_wdata)));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_busy = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_prefetch) 
                                                  | (IData)(vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state;
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 0;
    IData/*31:0*/ __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count;
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count = 0;
    // Body
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count;
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state;
    if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__rstn) {
        if ((4U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))) {
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state 
                = ((2U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))
                             ? 0U : 1U));
        } else if ((2U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))) {
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy = 0U;
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done = 1U;
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result 
                    = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe_result;
                __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 0U;
            } else {
                if ((7U > (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx))) {
                    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count 
                        = ((IData)(4U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count);
                    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr 
                        = ((IData)(4U) + (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr 
                                          + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count));
                    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr 
                        = ((IData)(4U) + (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr 
                                          + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count));
                }
                if ((7U == (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx))) {
                    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 3U;
                } else {
                    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx)));
                    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 4U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state))) {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inputs_reg 
                = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_dout;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__weights_reg 
                = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_dout;
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 2U;
        } else if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start) {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx = 0U;
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count = 0U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy = 1U;
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 4U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done = 0U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr 
                = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr 
                = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr;
        }
    } else {
        __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__word_idx = 0U;
        __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inputs_reg = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__weights_reg = 0U;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count 
        = __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__offset_count;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state 
        = __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_addr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_addr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_addr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_busy 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__busy;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_done 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__done;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__enable 
        = (2U == (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__input_register 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inputs_reg;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__weight_register 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__weights_reg;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__enable 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__enable;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__inp 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__input_register;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__wt 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__weight_register;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
        = (~ (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__inp 
              ^ vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__wt));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1[(0x0000000fU 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (3U & ((1U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
                            >> (0x0000001fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))) 
                     + (1U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__xnor_result 
                              >> (0x0000001fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))))));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2[(7U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (7U & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                     + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage1
                     [(0x0000000fU & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3[(3U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (0x0000000fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2
                              [(7U & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage2
                              [(7U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4[(1U 
                                                                                & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)] 
            = (0x0000001fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3
                              [(3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i))] 
                              + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage3
                              [(3U & ((IData)(1U) + 
                                      VL_MULS_III(32, (IData)(2U), vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i)))]));
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__i);
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__sum_reg 
        = (0x0000003fU & (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4
                          [0U] + vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__stage4
                          [1U]));
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid;
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid = 0;
    // Body
    __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__r_valid;
    if (vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aresetn) {
        if (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arvalid) 
             & (~ (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready)))) {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready = 1U;
            __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid = 1U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata 
                = ((0x00000020U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                    ? 0U : ((0x00000010U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                             ? ((8U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                 ? 0U : ((4U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                          ? 0U : ((2U 
                                                   & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                    ? 0U
                                                    : vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_result))))
                             : ((8U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                 ? ((4U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                     ? ((2U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                         ? 0U : ((1U 
                                                  & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                  ? 0U
                                                  : vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg))
                                     : ((2U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                         ? 0U : ((1U 
                                                  & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                  ? 0U
                                                  : vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg)))
                                 : ((4U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                     ? ((2U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                         ? 0U : ((1U 
                                                  & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                  ? 0U
                                                  : vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__status_reg))
                                     : ((2U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                         ? 0U : ((1U 
                                                  & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read)
                                                  ? 0U
                                                  : vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg))))));
        } else {
            if (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rready) 
                 & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__r_valid))) {
                __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid = 0U;
            }
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready = 0U;
        }
        if (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bready) 
             & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid))) {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid = 0U;
        }
        if ((((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wvalid)) 
             & (~ (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready)))) {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready = 1U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__w_ready = 1U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid = 1U;
            if ((0U == (0x0000003fU & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_write))) {
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg 
                    = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata;
            } else if ((8U == (0x0000003fU & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_write))) {
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg 
                    = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata;
            } else if ((0x0cU == (0x0000003fU & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_write))) {
                vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg 
                    = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata;
            }
        } else {
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready = 0U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__w_ready = 0U;
            vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg 
                = (0xfffffffeU & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg);
        }
    } else {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready = 0U;
        __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready = 0U;
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__w_ready = 0U;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__r_valid 
        = __Vdly__top_soc__DOT__u_bnn_accelerator__DOT__r_valid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ar_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rvalid 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__r_valid;
    vlSelfRef.top_soc__DOT__axi_arready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arready;
    vlSelfRef.top_soc__DOT__axi_rvalid = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rvalid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__in_ptr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__in_ptr_reg;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_ptr 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_ptr_reg;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__aw_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wready 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__w_ready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_start 
        = (1U & vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__ctrl_reg);
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bvalid 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__b_valid;
    vlSelfRef.top_soc__DOT__axi_awready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awready;
    vlSelfRef.top_soc__DOT__axi_wready = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wready;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_start;
    vlSelfRef.top_soc__DOT__axi_bvalid = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_bvalid;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top_soc__DOT__mem_ready_reg;
    __Vdly__top_soc__DOT__mem_ready_reg = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__inp_bram__v0;
    __VdlyVal__top_soc__DOT__inp_bram__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__inp_bram__v0;
    __VdlyDim0__top_soc__DOT__inp_bram__v0 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__inp_bram__v0;
    __VdlySet__top_soc__DOT__inp_bram__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__inp_bram__v1;
    __VdlyVal__top_soc__DOT__inp_bram__v1 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__inp_bram__v1;
    __VdlyDim0__top_soc__DOT__inp_bram__v1 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__inp_bram__v1;
    __VdlySet__top_soc__DOT__inp_bram__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__inp_bram__v2;
    __VdlyVal__top_soc__DOT__inp_bram__v2 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__inp_bram__v2;
    __VdlyDim0__top_soc__DOT__inp_bram__v2 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__inp_bram__v2;
    __VdlySet__top_soc__DOT__inp_bram__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__inp_bram__v3;
    __VdlyVal__top_soc__DOT__inp_bram__v3 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__inp_bram__v3;
    __VdlyDim0__top_soc__DOT__inp_bram__v3 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__inp_bram__v3;
    __VdlySet__top_soc__DOT__inp_bram__v3 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__wt_bram__v0;
    __VdlyVal__top_soc__DOT__wt_bram__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__wt_bram__v0;
    __VdlyDim0__top_soc__DOT__wt_bram__v0 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__wt_bram__v0;
    __VdlySet__top_soc__DOT__wt_bram__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__wt_bram__v1;
    __VdlyVal__top_soc__DOT__wt_bram__v1 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__wt_bram__v1;
    __VdlyDim0__top_soc__DOT__wt_bram__v1 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__wt_bram__v1;
    __VdlySet__top_soc__DOT__wt_bram__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__wt_bram__v2;
    __VdlyVal__top_soc__DOT__wt_bram__v2 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__wt_bram__v2;
    __VdlyDim0__top_soc__DOT__wt_bram__v2 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__wt_bram__v2;
    __VdlySet__top_soc__DOT__wt_bram__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__wt_bram__v3;
    __VdlyVal__top_soc__DOT__wt_bram__v3 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__wt_bram__v3;
    __VdlyDim0__top_soc__DOT__wt_bram__v3 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__wt_bram__v3;
    __VdlySet__top_soc__DOT__wt_bram__v3 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__bram__v0;
    __VdlyVal__top_soc__DOT__bram__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__bram__v0;
    __VdlyDim0__top_soc__DOT__bram__v0 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__bram__v0;
    __VdlySet__top_soc__DOT__bram__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__bram__v1;
    __VdlyVal__top_soc__DOT__bram__v1 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__bram__v1;
    __VdlyDim0__top_soc__DOT__bram__v1 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__bram__v1;
    __VdlySet__top_soc__DOT__bram__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__bram__v2;
    __VdlyVal__top_soc__DOT__bram__v2 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__bram__v2;
    __VdlyDim0__top_soc__DOT__bram__v2 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__bram__v2;
    __VdlySet__top_soc__DOT__bram__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_soc__DOT__bram__v3;
    __VdlyVal__top_soc__DOT__bram__v3 = 0;
    SData/*13:0*/ __VdlyDim0__top_soc__DOT__bram__v3;
    __VdlyDim0__top_soc__DOT__bram__v3 = 0;
    CData/*0:0*/ __VdlySet__top_soc__DOT__bram__v3;
    __VdlySet__top_soc__DOT__bram__v3 = 0;
    // Body
    __VdlySet__top_soc__DOT__inp_bram__v0 = 0U;
    __VdlySet__top_soc__DOT__inp_bram__v1 = 0U;
    __VdlySet__top_soc__DOT__inp_bram__v2 = 0U;
    __VdlySet__top_soc__DOT__inp_bram__v3 = 0U;
    __VdlySet__top_soc__DOT__wt_bram__v0 = 0U;
    __VdlySet__top_soc__DOT__wt_bram__v1 = 0U;
    __VdlySet__top_soc__DOT__wt_bram__v2 = 0U;
    __VdlySet__top_soc__DOT__wt_bram__v3 = 0U;
    __VdlySet__top_soc__DOT__bram__v0 = 0U;
    __VdlySet__top_soc__DOT__bram__v1 = 0U;
    __VdlySet__top_soc__DOT__bram__v2 = 0U;
    __VdlySet__top_soc__DOT__bram__v3 = 0U;
    __Vdly__top_soc__DOT__mem_ready_reg = vlSelfRef.top_soc__DOT__mem_ready_reg;
    if (vlSelfRef.top_soc__DOT__rst) {
        __Vdly__top_soc__DOT__mem_ready_reg = 0U;
    } else {
        __Vdly__top_soc__DOT__mem_ready_reg = (((IData)(vlSelfRef.top_soc__DOT__mem_valid) 
                                                & (~ (IData)(vlSelfRef.top_soc__DOT__mem_ready_reg))) 
                                               & (~ (IData)(vlSelfRef.top_soc__DOT__select_bnn_axi)));
        if (((((IData)(vlSelfRef.top_soc__DOT__select_inp_bram) 
               & (IData)(vlSelfRef.top_soc__DOT__mem_valid)) 
              & (~ (IData)(vlSelfRef.top_soc__DOT__mem_ready_reg))) 
             & (IData)((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))))) {
            if ((1U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__inp_bram__v0 
                    = (0x000000ffU & vlSelfRef.top_soc__DOT__mem_wdata);
                __VdlyDim0__top_soc__DOT__inp_bram__v0 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__inp_bram__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__inp_bram__v1 
                    = (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                      >> 8U));
                __VdlyDim0__top_soc__DOT__inp_bram__v1 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__inp_bram__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__inp_bram__v2 
                    = (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                      >> 0x10U));
                __VdlyDim0__top_soc__DOT__inp_bram__v2 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__inp_bram__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__inp_bram__v3 
                    = (vlSelfRef.top_soc__DOT__mem_wdata 
                       >> 0x18U);
                __VdlyDim0__top_soc__DOT__inp_bram__v3 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__inp_bram__v3 = 1U;
            }
        }
        if (((((IData)(vlSelfRef.top_soc__DOT__select_wt_bram) 
               & (IData)(vlSelfRef.top_soc__DOT__mem_valid)) 
              & (~ (IData)(vlSelfRef.top_soc__DOT__mem_ready_reg))) 
             & (IData)((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))))) {
            if ((1U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__wt_bram__v0 
                    = (0x000000ffU & vlSelfRef.top_soc__DOT__mem_wdata);
                __VdlyDim0__top_soc__DOT__wt_bram__v0 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__wt_bram__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__wt_bram__v1 
                    = (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                      >> 8U));
                __VdlyDim0__top_soc__DOT__wt_bram__v1 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__wt_bram__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__wt_bram__v2 
                    = (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                      >> 0x10U));
                __VdlyDim0__top_soc__DOT__wt_bram__v2 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__wt_bram__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__wt_bram__v3 
                    = (vlSelfRef.top_soc__DOT__mem_wdata 
                       >> 0x18U);
                __VdlyDim0__top_soc__DOT__wt_bram__v3 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__wt_bram__v3 = 1U;
            }
        }
        if (((((IData)(vlSelfRef.top_soc__DOT__select_bram) 
               & (IData)(vlSelfRef.top_soc__DOT__mem_valid)) 
              & (~ (IData)(vlSelfRef.top_soc__DOT__mem_ready_reg))) 
             & (IData)((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))))) {
            if ((1U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__bram__v0 = 
                    (0x000000ffU & vlSelfRef.top_soc__DOT__mem_wdata);
                __VdlyDim0__top_soc__DOT__bram__v0 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__bram__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__bram__v1 = 
                    (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                    >> 8U));
                __VdlyDim0__top_soc__DOT__bram__v1 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__bram__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__bram__v2 = 
                    (0x000000ffU & (vlSelfRef.top_soc__DOT__mem_wdata 
                                    >> 0x10U));
                __VdlyDim0__top_soc__DOT__bram__v2 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__bram__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) {
                __VdlyVal__top_soc__DOT__bram__v3 = 
                    (vlSelfRef.top_soc__DOT__mem_wdata 
                     >> 0x18U);
                __VdlyDim0__top_soc__DOT__bram__v3 
                    = vlSelfRef.top_soc__DOT__bram_addr;
                __VdlySet__top_soc__DOT__bram__v3 = 1U;
            }
        }
    }
    vlSelfRef.top_soc__DOT__inp_bram_dout = vlSelfRef.top_soc__DOT__inp_bram
        [(0x00003fffU & (vlSelfRef.top_soc__DOT__inp_bram_addr 
                         >> 2U))];
    vlSelfRef.top_soc__DOT__wt_bram_dout = vlSelfRef.top_soc__DOT__wt_bram
        [(0x00003fffU & (vlSelfRef.top_soc__DOT__wt_bram_addr 
                         >> 2U))];
    if ((((IData)(vlSelfRef.top_soc__DOT__select_led) 
          & (0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) 
         & (~ (IData)(vlSelfRef.top_soc__DOT__mem_ready)))) {
        vlSelfRef.top_soc__DOT__led_reg = (0x000000ffU 
                                           & vlSelfRef.top_soc__DOT__mem_wdata);
    }
    if ((1U & (~ (IData)(vlSelfRef.top_soc__DOT__rst)))) {
        if (((IData)(vlSelfRef.top_soc__DOT__select_inp_bram) 
             & (IData)(vlSelfRef.top_soc__DOT__mem_valid))) {
            vlSelfRef.top_soc__DOT__mem_rdata = vlSelfRef.top_soc__DOT__inp_bram
                [vlSelfRef.top_soc__DOT__bram_addr];
        } else if (((IData)(vlSelfRef.top_soc__DOT__select_wt_bram) 
                    & (IData)(vlSelfRef.top_soc__DOT__mem_valid))) {
            vlSelfRef.top_soc__DOT__mem_rdata = vlSelfRef.top_soc__DOT__wt_bram
                [vlSelfRef.top_soc__DOT__bram_addr];
        } else if (((IData)(vlSelfRef.top_soc__DOT__select_bram) 
                    & (IData)(vlSelfRef.top_soc__DOT__mem_valid))) {
            vlSelfRef.top_soc__DOT__mem_rdata = vlSelfRef.top_soc__DOT__bram
                [vlSelfRef.top_soc__DOT__bram_addr];
        } else if (((IData)(vlSelfRef.top_soc__DOT__select_bnn_axi) 
                    & (IData)(vlSelfRef.top_soc__DOT__mem_valid))) {
            vlSelfRef.top_soc__DOT__mem_rdata = vlSelfRef.top_soc__DOT__axi_rdata;
        }
    }
    vlSelfRef.top_soc__DOT__mem_ready_reg = __Vdly__top_soc__DOT__mem_ready_reg;
    if (__VdlySet__top_soc__DOT__bram__v0) {
        vlSelfRef.top_soc__DOT__bram[__VdlyDim0__top_soc__DOT__bram__v0] 
            = ((0xffffff00U & vlSelfRef.top_soc__DOT__bram
                [__VdlyDim0__top_soc__DOT__bram__v0]) 
               | (IData)(__VdlyVal__top_soc__DOT__bram__v0));
    }
    if (__VdlySet__top_soc__DOT__bram__v1) {
        vlSelfRef.top_soc__DOT__bram[__VdlyDim0__top_soc__DOT__bram__v1] 
            = ((0xffff00ffU & vlSelfRef.top_soc__DOT__bram
                [__VdlyDim0__top_soc__DOT__bram__v1]) 
               | ((IData)(__VdlyVal__top_soc__DOT__bram__v1) 
                  << 8U));
    }
    if (__VdlySet__top_soc__DOT__bram__v2) {
        vlSelfRef.top_soc__DOT__bram[__VdlyDim0__top_soc__DOT__bram__v2] 
            = ((0xff00ffffU & vlSelfRef.top_soc__DOT__bram
                [__VdlyDim0__top_soc__DOT__bram__v2]) 
               | ((IData)(__VdlyVal__top_soc__DOT__bram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_soc__DOT__bram__v3) {
        vlSelfRef.top_soc__DOT__bram[__VdlyDim0__top_soc__DOT__bram__v3] 
            = ((0x00ffffffU & vlSelfRef.top_soc__DOT__bram
                [__VdlyDim0__top_soc__DOT__bram__v3]) 
               | ((IData)(__VdlyVal__top_soc__DOT__bram__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__top_soc__DOT__inp_bram__v0) {
        vlSelfRef.top_soc__DOT__inp_bram[__VdlyDim0__top_soc__DOT__inp_bram__v0] 
            = ((0xffffff00U & vlSelfRef.top_soc__DOT__inp_bram
                [__VdlyDim0__top_soc__DOT__inp_bram__v0]) 
               | (IData)(__VdlyVal__top_soc__DOT__inp_bram__v0));
    }
    if (__VdlySet__top_soc__DOT__inp_bram__v1) {
        vlSelfRef.top_soc__DOT__inp_bram[__VdlyDim0__top_soc__DOT__inp_bram__v1] 
            = ((0xffff00ffU & vlSelfRef.top_soc__DOT__inp_bram
                [__VdlyDim0__top_soc__DOT__inp_bram__v1]) 
               | ((IData)(__VdlyVal__top_soc__DOT__inp_bram__v1) 
                  << 8U));
    }
    if (__VdlySet__top_soc__DOT__inp_bram__v2) {
        vlSelfRef.top_soc__DOT__inp_bram[__VdlyDim0__top_soc__DOT__inp_bram__v2] 
            = ((0xff00ffffU & vlSelfRef.top_soc__DOT__inp_bram
                [__VdlyDim0__top_soc__DOT__inp_bram__v2]) 
               | ((IData)(__VdlyVal__top_soc__DOT__inp_bram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_soc__DOT__inp_bram__v3) {
        vlSelfRef.top_soc__DOT__inp_bram[__VdlyDim0__top_soc__DOT__inp_bram__v3] 
            = ((0x00ffffffU & vlSelfRef.top_soc__DOT__inp_bram
                [__VdlyDim0__top_soc__DOT__inp_bram__v3]) 
               | ((IData)(__VdlyVal__top_soc__DOT__inp_bram__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__top_soc__DOT__wt_bram__v0) {
        vlSelfRef.top_soc__DOT__wt_bram[__VdlyDim0__top_soc__DOT__wt_bram__v0] 
            = ((0xffffff00U & vlSelfRef.top_soc__DOT__wt_bram
                [__VdlyDim0__top_soc__DOT__wt_bram__v0]) 
               | (IData)(__VdlyVal__top_soc__DOT__wt_bram__v0));
    }
    if (__VdlySet__top_soc__DOT__wt_bram__v1) {
        vlSelfRef.top_soc__DOT__wt_bram[__VdlyDim0__top_soc__DOT__wt_bram__v1] 
            = ((0xffff00ffU & vlSelfRef.top_soc__DOT__wt_bram
                [__VdlyDim0__top_soc__DOT__wt_bram__v1]) 
               | ((IData)(__VdlyVal__top_soc__DOT__wt_bram__v1) 
                  << 8U));
    }
    if (__VdlySet__top_soc__DOT__wt_bram__v2) {
        vlSelfRef.top_soc__DOT__wt_bram[__VdlyDim0__top_soc__DOT__wt_bram__v2] 
            = ((0xff00ffffU & vlSelfRef.top_soc__DOT__wt_bram
                [__VdlyDim0__top_soc__DOT__wt_bram__v2]) 
               | ((IData)(__VdlyVal__top_soc__DOT__wt_bram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_soc__DOT__wt_bram__v3) {
        vlSelfRef.top_soc__DOT__wt_bram[__VdlyDim0__top_soc__DOT__wt_bram__v3] 
            = ((0x00ffffffU & vlSelfRef.top_soc__DOT__wt_bram
                [__VdlyDim0__top_soc__DOT__wt_bram__v3]) 
               | ((IData)(__VdlyVal__top_soc__DOT__wt_bram__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_dout 
        = vlSelfRef.top_soc__DOT__inp_bram_dout;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_dout 
        = vlSelfRef.top_soc__DOT__wt_bram_dout;
    vlSelfRef.top_soc__DOT__led = vlSelfRef.top_soc__DOT__led_reg;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata = vlSelfRef.top_soc__DOT__mem_rdata;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__inp_bram_dout 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_dout;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__wt_bram_dout 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_dout;
    vlSelfRef.led = vlSelfRef.top_soc__DOT__led;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_rdata 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe_result 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__neuron_value;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
    top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid = 0;
    // Body
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_read 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_araddr;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__addr_write 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awaddr;
    vlSelfRef.top_soc__DOT__select_led = 0U;
    vlSelfRef.top_soc__DOT__mem_wdata = vlSelfRef.top_soc__DOT__uut__DOT__mem_wdata;
    vlSelfRef.top_soc__DOT__mem_wstrb = vlSelfRef.top_soc__DOT__uut__DOT__mem_wstrb;
    vlSelfRef.top_soc__DOT__select_inp_bram = 0U;
    vlSelfRef.top_soc__DOT__bram_addr = (0x00003fffU 
                                         & (vlSelfRef.top_soc__DOT__mem_addr 
                                            >> 2U));
    vlSelfRef.top_soc__DOT__select_wt_bram = 0U;
    vlSelfRef.top_soc__DOT__select_bram = 0U;
    if ((0x0000ffffU >= vlSelfRef.top_soc__DOT__mem_addr)) {
        vlSelfRef.top_soc__DOT__select_bram = 1U;
    }
    vlSelfRef.top_soc__DOT__mem_valid = vlSelfRef.top_soc__DOT__uut__DOT__mem_valid;
    vlSelfRef.top_soc__DOT__select_bnn_axi = 0U;
    if ((0x0000ffffU < vlSelfRef.top_soc__DOT__mem_addr)) {
        if ((1U & (~ ((0x40000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                      & (0x4000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
            if ((1U & (~ ((0x50000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                          & (0x5000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
                if ((1U & (~ ((0x30000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                              & (0x300000ffU >= vlSelfRef.top_soc__DOT__mem_addr))))) {
                    if ((0x80000000U == vlSelfRef.top_soc__DOT__mem_addr)) {
                        vlSelfRef.top_soc__DOT__select_led = 1U;
                    }
                }
                if (((0x30000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                     & (0x300000ffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
                    vlSelfRef.top_soc__DOT__select_bnn_axi = 1U;
                }
            }
            if (((0x50000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
                 & (0x5000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
                vlSelfRef.top_soc__DOT__select_wt_bram = 1U;
            }
        }
        if (((0x40000000U <= vlSelfRef.top_soc__DOT__mem_addr) 
             & (0x4000ffffU >= vlSelfRef.top_soc__DOT__mem_addr))) {
            vlSelfRef.top_soc__DOT__select_inp_bram = 1U;
        }
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wdata 
        = vlSelfRef.top_soc__DOT__mem_wdata;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_arvalid 
        = ((IData)(vlSelfRef.top_soc__DOT__select_bnn_axi) 
           & ((~ (0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))) 
              & (IData)(vlSelfRef.top_soc__DOT__mem_valid)));
    top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid 
        = ((IData)(vlSelfRef.top_soc__DOT__select_bnn_axi) 
           & ((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb)) 
              & (IData)(vlSelfRef.top_soc__DOT__mem_valid)));
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_awvalid 
        = top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_wvalid 
        = top_soc__DOT____Vcellinp__u_bnn_accelerator__s_axi_awvalid;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_result 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__result;
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__status_reg 
        = (((IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_done) 
            << 1U) | (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__bnn_busy));
    vlSelfRef.top_soc__DOT__inp_bram_addr = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__inp_bram_addr;
    vlSelfRef.top_soc__DOT__wt_bram_addr = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__wt_bram_addr;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator = 0U;
    if (((0U == (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__state)) 
         & (IData)(vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__start))) {
        vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator = 1U;
    }
    vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__pe__DOT__clear_accumulator 
        = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__i_bnn_core__DOT__clear_accumulator;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__axi_rdata = vlSelfRef.top_soc__DOT__u_bnn_accelerator__DOT__s_axi_rdata;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
            = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                ? (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_wordsize))) {
        vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                ? ((1U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                    ? (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.top_soc__DOT__uut__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata)));
    }
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_soc__DOT__mem_ready = ((IData)(vlSelfRef.top_soc__DOT__select_bnn_axi)
                                          ? ((0U != (IData)(vlSelfRef.top_soc__DOT__mem_wstrb))
                                              ? (IData)(vlSelfRef.top_soc__DOT__axi_bvalid)
                                              : (IData)(vlSelfRef.top_soc__DOT__axi_rvalid))
                                          : (IData)(vlSelfRef.top_soc__DOT__mem_ready_reg));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_ready = vlSelfRef.top_soc__DOT__mem_ready;
    vlSelfRef.top_soc__DOT__uut__DOT__dbg_mem_ready 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_ready;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer = (((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_ready) 
                                                   & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_valid)) 
                                                  | ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst) 
                                                     & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer)
            ? vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata
            : vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_q);
    vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched 
        = vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched_noshuffle;
    vlSelfRef.top_soc__DOT__uut__DOT__mem_done = ((IData)(vlSelfRef.top_soc__DOT__uut__DOT__resetn) 
                                                  & ((((IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer) 
                                                       & ((0U 
                                                           != (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state)) 
                                                          & (IData)(vlSelfRef.top_soc__DOT__uut__DOT____VdfgRegularize_h70918b36_0_0))) 
                                                      | ((3U 
                                                          == (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_state)) 
                                                         & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_do_rinst))) 
                                                     & ((~ (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_la_firstword)) 
                                                        | ((~ 
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & vlSelfRef.top_soc__DOT__uut__DOT__mem_rdata_latched))) 
                                                           & (IData)(vlSelfRef.top_soc__DOT__uut__DOT__mem_xfer)))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
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
            VL_FATAL_MT("top_soc.sv", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("top_soc.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("top_soc.sv", 3, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
