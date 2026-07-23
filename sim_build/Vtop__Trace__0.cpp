// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rstn));
    bufp->chgBit(oldp+2,(vlSelfRef.start));
    bufp->chgIData(oldp+3,(vlSelfRef.in_ptr),32);
    bufp->chgIData(oldp+4,(vlSelfRef.wt_ptr),32);
    bufp->chgIData(oldp+5,(vlSelfRef.inp_bram_addr),32);
    bufp->chgIData(oldp+6,(vlSelfRef.inp_bram_dout),32);
    bufp->chgIData(oldp+7,(vlSelfRef.wt_bram_addr),32);
    bufp->chgIData(oldp+8,(vlSelfRef.wt_bram_dout),32);
    bufp->chgBit(oldp+9,(vlSelfRef.busy));
    bufp->chgBit(oldp+10,(vlSelfRef.done));
    bufp->chgIData(oldp+11,(vlSelfRef.result),32);
    bufp->chgBit(oldp+12,(vlSelfRef.bnn_core__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelfRef.bnn_core__DOT__rstn));
    bufp->chgBit(oldp+14,(vlSelfRef.bnn_core__DOT__start));
    bufp->chgIData(oldp+15,(vlSelfRef.bnn_core__DOT__in_ptr),32);
    bufp->chgIData(oldp+16,(vlSelfRef.bnn_core__DOT__wt_ptr),32);
    bufp->chgIData(oldp+17,(vlSelfRef.bnn_core__DOT__inp_bram_addr),32);
    bufp->chgIData(oldp+18,(vlSelfRef.bnn_core__DOT__inp_bram_dout),32);
    bufp->chgIData(oldp+19,(vlSelfRef.bnn_core__DOT__wt_bram_addr),32);
    bufp->chgIData(oldp+20,(vlSelfRef.bnn_core__DOT__wt_bram_dout),32);
    bufp->chgBit(oldp+21,(vlSelfRef.bnn_core__DOT__busy));
    bufp->chgBit(oldp+22,(vlSelfRef.bnn_core__DOT__done));
    bufp->chgIData(oldp+23,(vlSelfRef.bnn_core__DOT__result),32);
    bufp->chgBit(oldp+24,(vlSelfRef.bnn_core__DOT__enable));
    bufp->chgBit(oldp+25,(vlSelfRef.bnn_core__DOT__clear_accumulator));
    bufp->chgSData(oldp+26,(vlSelfRef.bnn_core__DOT__pe_result),9);
    bufp->chgCData(oldp+27,(vlSelfRef.bnn_core__DOT__state),3);
    bufp->chgCData(oldp+28,(vlSelfRef.bnn_core__DOT__word_idx),3);
    bufp->chgIData(oldp+29,(vlSelfRef.bnn_core__DOT__offset_count),32);
    bufp->chgIData(oldp+30,(vlSelfRef.bnn_core__DOT__inputs_reg),32);
    bufp->chgIData(oldp+31,(vlSelfRef.bnn_core__DOT__weights_reg),32);
    bufp->chgBit(oldp+32,(vlSelfRef.bnn_core__DOT__pe__DOT__clk));
    bufp->chgBit(oldp+33,(vlSelfRef.bnn_core__DOT__pe__DOT__rstn));
    bufp->chgIData(oldp+34,(vlSelfRef.bnn_core__DOT__pe__DOT__input_register),32);
    bufp->chgIData(oldp+35,(vlSelfRef.bnn_core__DOT__pe__DOT__weight_register),32);
    bufp->chgSData(oldp+36,(vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value),9);
    bufp->chgBit(oldp+37,(vlSelfRef.bnn_core__DOT__pe__DOT__enable));
    bufp->chgBit(oldp+38,(vlSelfRef.bnn_core__DOT__pe__DOT__clear_accumulator));
    bufp->chgIData(oldp+39,(vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result),32);
    bufp->chgCData(oldp+40,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[0]),2);
    bufp->chgCData(oldp+41,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[1]),2);
    bufp->chgCData(oldp+42,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[2]),2);
    bufp->chgCData(oldp+43,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[3]),2);
    bufp->chgCData(oldp+44,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[4]),2);
    bufp->chgCData(oldp+45,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[5]),2);
    bufp->chgCData(oldp+46,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[6]),2);
    bufp->chgCData(oldp+47,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[7]),2);
    bufp->chgCData(oldp+48,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[8]),2);
    bufp->chgCData(oldp+49,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[9]),2);
    bufp->chgCData(oldp+50,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[10]),2);
    bufp->chgCData(oldp+51,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[11]),2);
    bufp->chgCData(oldp+52,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[12]),2);
    bufp->chgCData(oldp+53,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[13]),2);
    bufp->chgCData(oldp+54,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[14]),2);
    bufp->chgCData(oldp+55,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[15]),2);
    bufp->chgCData(oldp+56,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[0]),3);
    bufp->chgCData(oldp+57,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[1]),3);
    bufp->chgCData(oldp+58,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[2]),3);
    bufp->chgCData(oldp+59,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[3]),3);
    bufp->chgCData(oldp+60,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[4]),3);
    bufp->chgCData(oldp+61,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[5]),3);
    bufp->chgCData(oldp+62,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[6]),3);
    bufp->chgCData(oldp+63,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[7]),3);
    bufp->chgCData(oldp+64,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[0]),4);
    bufp->chgCData(oldp+65,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[1]),4);
    bufp->chgCData(oldp+66,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[2]),4);
    bufp->chgCData(oldp+67,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[3]),4);
    bufp->chgCData(oldp+68,(vlSelfRef.bnn_core__DOT__pe__DOT__stage4[0]),5);
    bufp->chgCData(oldp+69,(vlSelfRef.bnn_core__DOT__pe__DOT__stage4[1]),5);
    bufp->chgIData(oldp+70,(vlSelfRef.bnn_core__DOT__pe__DOT__i),32);
    bufp->chgCData(oldp+71,(vlSelfRef.bnn_core__DOT__pe__DOT__sum_reg),6);
    bufp->chgIData(oldp+72,(vlSelfRef.bnn_core__DOT__pe__DOT__inp),32);
    bufp->chgIData(oldp+73,(vlSelfRef.bnn_core__DOT__pe__DOT__wt),32);
    bufp->chgSData(oldp+74,(vlSelfRef.bnn_core__DOT__pe__DOT__accumulator),9);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
