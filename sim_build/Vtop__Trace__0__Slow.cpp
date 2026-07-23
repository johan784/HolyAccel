// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__constants_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"in_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"wt_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"inp_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"inp_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wt_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"wt_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("constants_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__constants_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("bnn_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"in_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"wt_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"inp_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"inp_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"wt_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"wt_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"clear_accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"pe_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+28,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"offset_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"inputs_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"weights_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"input_register",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"weight_register",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+38,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+69+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+71,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+72,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+73,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__constants_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__constants_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+76,0,"TOTAL_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+77,0,"ACCUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+78,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+76,(8U),32);
    bufp->fullIData(oldp+77,(9U),32);
    bufp->fullIData(oldp+78,(3U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rstn));
    bufp->fullBit(oldp+3,(vlSelfRef.start));
    bufp->fullIData(oldp+4,(vlSelfRef.in_ptr),32);
    bufp->fullIData(oldp+5,(vlSelfRef.wt_ptr),32);
    bufp->fullIData(oldp+6,(vlSelfRef.inp_bram_addr),32);
    bufp->fullIData(oldp+7,(vlSelfRef.inp_bram_dout),32);
    bufp->fullIData(oldp+8,(vlSelfRef.wt_bram_addr),32);
    bufp->fullIData(oldp+9,(vlSelfRef.wt_bram_dout),32);
    bufp->fullBit(oldp+10,(vlSelfRef.busy));
    bufp->fullBit(oldp+11,(vlSelfRef.done));
    bufp->fullIData(oldp+12,(vlSelfRef.result),32);
    bufp->fullBit(oldp+13,(vlSelfRef.bnn_core__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.bnn_core__DOT__rstn));
    bufp->fullBit(oldp+15,(vlSelfRef.bnn_core__DOT__start));
    bufp->fullIData(oldp+16,(vlSelfRef.bnn_core__DOT__in_ptr),32);
    bufp->fullIData(oldp+17,(vlSelfRef.bnn_core__DOT__wt_ptr),32);
    bufp->fullIData(oldp+18,(vlSelfRef.bnn_core__DOT__inp_bram_addr),32);
    bufp->fullIData(oldp+19,(vlSelfRef.bnn_core__DOT__inp_bram_dout),32);
    bufp->fullIData(oldp+20,(vlSelfRef.bnn_core__DOT__wt_bram_addr),32);
    bufp->fullIData(oldp+21,(vlSelfRef.bnn_core__DOT__wt_bram_dout),32);
    bufp->fullBit(oldp+22,(vlSelfRef.bnn_core__DOT__busy));
    bufp->fullBit(oldp+23,(vlSelfRef.bnn_core__DOT__done));
    bufp->fullIData(oldp+24,(vlSelfRef.bnn_core__DOT__result),32);
    bufp->fullBit(oldp+25,(vlSelfRef.bnn_core__DOT__enable));
    bufp->fullBit(oldp+26,(vlSelfRef.bnn_core__DOT__clear_accumulator));
    bufp->fullSData(oldp+27,(vlSelfRef.bnn_core__DOT__pe_result),9);
    bufp->fullCData(oldp+28,(vlSelfRef.bnn_core__DOT__state),3);
    bufp->fullCData(oldp+29,(vlSelfRef.bnn_core__DOT__word_idx),3);
    bufp->fullIData(oldp+30,(vlSelfRef.bnn_core__DOT__offset_count),32);
    bufp->fullIData(oldp+31,(vlSelfRef.bnn_core__DOT__inputs_reg),32);
    bufp->fullIData(oldp+32,(vlSelfRef.bnn_core__DOT__weights_reg),32);
    bufp->fullBit(oldp+33,(vlSelfRef.bnn_core__DOT__pe__DOT__clk));
    bufp->fullBit(oldp+34,(vlSelfRef.bnn_core__DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+35,(vlSelfRef.bnn_core__DOT__pe__DOT__input_register),32);
    bufp->fullIData(oldp+36,(vlSelfRef.bnn_core__DOT__pe__DOT__weight_register),32);
    bufp->fullSData(oldp+37,(vlSelfRef.bnn_core__DOT__pe__DOT__neuron_value),9);
    bufp->fullBit(oldp+38,(vlSelfRef.bnn_core__DOT__pe__DOT__enable));
    bufp->fullBit(oldp+39,(vlSelfRef.bnn_core__DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+40,(vlSelfRef.bnn_core__DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+41,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+42,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+43,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+44,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+45,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+46,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+47,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+48,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+49,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+50,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+51,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+52,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+53,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+54,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+55,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+56,(vlSelfRef.bnn_core__DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+57,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+58,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+59,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+60,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+61,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+62,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+63,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+64,(vlSelfRef.bnn_core__DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+65,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+66,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+67,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+68,(vlSelfRef.bnn_core__DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+69,(vlSelfRef.bnn_core__DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+70,(vlSelfRef.bnn_core__DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+71,(vlSelfRef.bnn_core__DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+72,(vlSelfRef.bnn_core__DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+73,(vlSelfRef.bnn_core__DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+74,(vlSelfRef.bnn_core__DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+75,(vlSelfRef.bnn_core__DOT__pe__DOT__accumulator),9);
}
