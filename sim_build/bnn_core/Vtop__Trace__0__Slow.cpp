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
    tracep->declBus(c+6,0,"thr_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"inp_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"inp_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"wt_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"wt_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("constants_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__constants_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("bnn_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"in_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"wt_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"thr_ptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"inp_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"inp_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"wt_bram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"wt_bram_dout",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"in_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"wt_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"thr_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"layer_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"neuron_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"pe_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"activ_word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"wt_word_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"input_word_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"output_neuron_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+40,0,"bram_primed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("current_desc", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+42,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("layer_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+47,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+52,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+57,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+61,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+62,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+67,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+72,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+82,0,"input_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"weight_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"threshold_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"input_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"output_neurons",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+87,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"clear_accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pe_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("activation_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("threshold_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+126,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+127,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+130+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+146+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+154+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+158+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+160,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+161,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+170,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+171,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+190+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+198+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+202+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+204,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+205,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+206,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+214,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+215,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+218+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+234+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+242+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+246+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+248,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+249,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+250,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+253,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+258,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+259,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+262+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+278+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+286+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+293,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+294,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+302,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+303,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+306+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+322+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+330+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+334+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+337,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+338,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+341,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+346,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+347,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+350+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+366+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+374+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+378+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+380,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+381,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+382,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+385,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+390,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+391,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+393,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+394+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+410+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+418+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+422+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+424,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+425,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+426,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pe_array[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+429,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"activations_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"weight_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"threshold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+434,0,"neuron_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+435,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"clear_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"xnor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("stage1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+438+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+454+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+462+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("stage4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+466+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+468,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+469,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+470,0,"inp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+473,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+474,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__constants_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__constants_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+475,0,"TOTAL_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+476,0,"ACCUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+477,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+475,0,"NUM_PE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+475,(8U),32);
    bufp->fullIData(oldp+476,(0x0000000aU),32);
    bufp->fullIData(oldp+477,(3U),32);
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
    bufp->fullIData(oldp+6,(vlSelfRef.thr_ptr),32);
    bufp->fullIData(oldp+7,(vlSelfRef.inp_bram_addr),32);
    bufp->fullIData(oldp+8,(vlSelfRef.inp_bram_dout),32);
    bufp->fullIData(oldp+9,(vlSelfRef.wt_bram_addr),32);
    bufp->fullIData(oldp+10,(vlSelfRef.wt_bram_dout),32);
    bufp->fullBit(oldp+11,(vlSelfRef.busy));
    bufp->fullBit(oldp+12,(vlSelfRef.done));
    bufp->fullIData(oldp+13,(vlSelfRef.result),32);
    bufp->fullBit(oldp+14,(vlSelfRef.bnn_core__DOT__clk));
    bufp->fullBit(oldp+15,(vlSelfRef.bnn_core__DOT__rstn));
    bufp->fullBit(oldp+16,(vlSelfRef.bnn_core__DOT__start));
    bufp->fullIData(oldp+17,(vlSelfRef.bnn_core__DOT__in_ptr),32);
    bufp->fullIData(oldp+18,(vlSelfRef.bnn_core__DOT__wt_ptr),32);
    bufp->fullIData(oldp+19,(vlSelfRef.bnn_core__DOT__thr_ptr),32);
    bufp->fullIData(oldp+20,(vlSelfRef.bnn_core__DOT__inp_bram_addr),32);
    bufp->fullIData(oldp+21,(vlSelfRef.bnn_core__DOT__inp_bram_dout),32);
    bufp->fullIData(oldp+22,(vlSelfRef.bnn_core__DOT__wt_bram_addr),32);
    bufp->fullIData(oldp+23,(vlSelfRef.bnn_core__DOT__wt_bram_dout),32);
    bufp->fullBit(oldp+24,(vlSelfRef.bnn_core__DOT__busy));
    bufp->fullBit(oldp+25,(vlSelfRef.bnn_core__DOT__done));
    bufp->fullIData(oldp+26,(vlSelfRef.bnn_core__DOT__result),32);
    bufp->fullIData(oldp+27,(vlSelfRef.bnn_core__DOT__in_ptr_reg),32);
    bufp->fullIData(oldp+28,(vlSelfRef.bnn_core__DOT__wt_ptr_reg),32);
    bufp->fullIData(oldp+29,(vlSelfRef.bnn_core__DOT__thr_ptr_reg),32);
    bufp->fullSData(oldp+30,(vlSelfRef.bnn_core__DOT__input_words),16);
    bufp->fullSData(oldp+31,(vlSelfRef.bnn_core__DOT__output_neurons),16);
    bufp->fullCData(oldp+32,(vlSelfRef.bnn_core__DOT__layer_idx),3);
    bufp->fullCData(oldp+33,(vlSelfRef.bnn_core__DOT__neuron_idx),3);
    bufp->fullCData(oldp+34,(vlSelfRef.bnn_core__DOT__pe_idx),3);
    bufp->fullCData(oldp+35,(vlSelfRef.bnn_core__DOT__word_idx),3);
    bufp->fullCData(oldp+36,(vlSelfRef.bnn_core__DOT__activ_word_idx),3);
    bufp->fullCData(oldp+37,(vlSelfRef.bnn_core__DOT__wt_word_idx),3);
    bufp->fullCData(oldp+38,(vlSelfRef.bnn_core__DOT__input_word_last),3);
    bufp->fullCData(oldp+39,(vlSelfRef.bnn_core__DOT__output_neuron_last),3);
    bufp->fullBit(oldp+40,(vlSelfRef.bnn_core__DOT__bram_primed));
    bufp->fullCData(oldp+41,(vlSelfRef.bnn_core__DOT__state),4);
    bufp->fullIData(oldp+42,(vlSelfRef.bnn_core__DOT__current_desc[3U]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.bnn_core__DOT__current_desc[2U]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.bnn_core__DOT__current_desc[1U]),32);
    bufp->fullSData(oldp+45,((vlSelfRef.bnn_core__DOT__current_desc[0U] 
                              >> 0x00000010U)),16);
    bufp->fullSData(oldp+46,((0x0000ffffU & vlSelfRef.bnn_core__DOT__current_desc[0U])),16);
    bufp->fullIData(oldp+47,(vlSelfRef.bnn_core__DOT__layer_table
                             [0U][3U]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.bnn_core__DOT__layer_table
                             [0U][2U]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.bnn_core__DOT__layer_table
                             [0U][1U]),32);
    bufp->fullSData(oldp+50,((vlSelfRef.bnn_core__DOT__layer_table
                              [0U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+51,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [0U][0U])),16);
    bufp->fullIData(oldp+52,(vlSelfRef.bnn_core__DOT__layer_table
                             [1U][3U]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.bnn_core__DOT__layer_table
                             [1U][2U]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.bnn_core__DOT__layer_table
                             [1U][1U]),32);
    bufp->fullSData(oldp+55,((vlSelfRef.bnn_core__DOT__layer_table
                              [1U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+56,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [1U][0U])),16);
    bufp->fullIData(oldp+57,(vlSelfRef.bnn_core__DOT__layer_table
                             [2U][3U]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.bnn_core__DOT__layer_table
                             [2U][2U]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.bnn_core__DOT__layer_table
                             [2U][1U]),32);
    bufp->fullSData(oldp+60,((vlSelfRef.bnn_core__DOT__layer_table
                              [2U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+61,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [2U][0U])),16);
    bufp->fullIData(oldp+62,(vlSelfRef.bnn_core__DOT__layer_table
                             [3U][3U]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.bnn_core__DOT__layer_table
                             [3U][2U]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.bnn_core__DOT__layer_table
                             [3U][1U]),32);
    bufp->fullSData(oldp+65,((vlSelfRef.bnn_core__DOT__layer_table
                              [3U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+66,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [3U][0U])),16);
    bufp->fullIData(oldp+67,(vlSelfRef.bnn_core__DOT__layer_table
                             [4U][3U]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.bnn_core__DOT__layer_table
                             [4U][2U]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.bnn_core__DOT__layer_table
                             [4U][1U]),32);
    bufp->fullSData(oldp+70,((vlSelfRef.bnn_core__DOT__layer_table
                              [4U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+71,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [4U][0U])),16);
    bufp->fullIData(oldp+72,(vlSelfRef.bnn_core__DOT__layer_table
                             [5U][3U]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.bnn_core__DOT__layer_table
                             [5U][2U]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.bnn_core__DOT__layer_table
                             [5U][1U]),32);
    bufp->fullSData(oldp+75,((vlSelfRef.bnn_core__DOT__layer_table
                              [5U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+76,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [5U][0U])),16);
    bufp->fullIData(oldp+77,(vlSelfRef.bnn_core__DOT__layer_table
                             [6U][3U]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.bnn_core__DOT__layer_table
                             [6U][2U]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.bnn_core__DOT__layer_table
                             [6U][1U]),32);
    bufp->fullSData(oldp+80,((vlSelfRef.bnn_core__DOT__layer_table
                              [6U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+81,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [6U][0U])),16);
    bufp->fullIData(oldp+82,(vlSelfRef.bnn_core__DOT__layer_table
                             [7U][3U]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.bnn_core__DOT__layer_table
                             [7U][2U]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.bnn_core__DOT__layer_table
                             [7U][1U]),32);
    bufp->fullSData(oldp+85,((vlSelfRef.bnn_core__DOT__layer_table
                              [7U][0U] >> 0x00000010U)),16);
    bufp->fullSData(oldp+86,((0x0000ffffU & vlSelfRef.bnn_core__DOT__layer_table
                              [7U][0U])),16);
    bufp->fullBit(oldp+87,(vlSelfRef.bnn_core__DOT__enable));
    bufp->fullBit(oldp+88,(vlSelfRef.bnn_core__DOT__clear_accumulator));
    bufp->fullSData(oldp+89,(vlSelfRef.bnn_core__DOT__pe_result[0]),10);
    bufp->fullSData(oldp+90,(vlSelfRef.bnn_core__DOT__pe_result[1]),10);
    bufp->fullSData(oldp+91,(vlSelfRef.bnn_core__DOT__pe_result[2]),10);
    bufp->fullSData(oldp+92,(vlSelfRef.bnn_core__DOT__pe_result[3]),10);
    bufp->fullSData(oldp+93,(vlSelfRef.bnn_core__DOT__pe_result[4]),10);
    bufp->fullSData(oldp+94,(vlSelfRef.bnn_core__DOT__pe_result[5]),10);
    bufp->fullSData(oldp+95,(vlSelfRef.bnn_core__DOT__pe_result[6]),10);
    bufp->fullSData(oldp+96,(vlSelfRef.bnn_core__DOT__pe_result[7]),10);
    bufp->fullIData(oldp+97,(vlSelfRef.bnn_core__DOT__output_buffer[0]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.bnn_core__DOT__output_buffer[1]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.bnn_core__DOT__output_buffer[2]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.bnn_core__DOT__output_buffer[3]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.bnn_core__DOT__output_buffer[4]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.bnn_core__DOT__output_buffer[5]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.bnn_core__DOT__output_buffer[6]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.bnn_core__DOT__output_buffer[7]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.bnn_core__DOT__activation_buffer[0]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.bnn_core__DOT__activation_buffer[1]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.bnn_core__DOT__activation_buffer[2]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.bnn_core__DOT__activation_buffer[3]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.bnn_core__DOT__activation_buffer[4]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.bnn_core__DOT__activation_buffer[5]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.bnn_core__DOT__activation_buffer[6]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.bnn_core__DOT__activation_buffer[7]),32);
    bufp->fullSData(oldp+113,(vlSelfRef.bnn_core__DOT__threshold_buffer[0]),10);
    bufp->fullSData(oldp+114,(vlSelfRef.bnn_core__DOT__threshold_buffer[1]),10);
    bufp->fullSData(oldp+115,(vlSelfRef.bnn_core__DOT__threshold_buffer[2]),10);
    bufp->fullSData(oldp+116,(vlSelfRef.bnn_core__DOT__threshold_buffer[3]),10);
    bufp->fullSData(oldp+117,(vlSelfRef.bnn_core__DOT__threshold_buffer[4]),10);
    bufp->fullSData(oldp+118,(vlSelfRef.bnn_core__DOT__threshold_buffer[5]),10);
    bufp->fullSData(oldp+119,(vlSelfRef.bnn_core__DOT__threshold_buffer[6]),10);
    bufp->fullSData(oldp+120,(vlSelfRef.bnn_core__DOT__threshold_buffer[7]),10);
    bufp->fullBit(oldp+121,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+122,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+123,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+124,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+125,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+126,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+127,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+128,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+129,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+130,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+131,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+132,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+133,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+134,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+135,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+136,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+137,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+138,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+139,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+140,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+141,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+142,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+143,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+144,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+145,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+146,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+147,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+148,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+149,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+150,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+151,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+152,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+153,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+154,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+155,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+156,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+157,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+158,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+159,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+160,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+161,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+162,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+163,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+164,(vlSelfRef.bnn_core__DOT__pe_array__BRA__0__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+165,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+166,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+167,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+168,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+169,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+170,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+171,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+172,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+173,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+174,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+175,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+176,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+177,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+178,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+179,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+180,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+181,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+182,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+183,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+184,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+185,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+186,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+187,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+188,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+189,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+190,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+191,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+192,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+193,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+194,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+195,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+196,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+197,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+198,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+199,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+200,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+201,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+202,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+203,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+204,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+205,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+206,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+207,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+208,(vlSelfRef.bnn_core__DOT__pe_array__BRA__1__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+209,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+210,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+211,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+212,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+213,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+214,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+215,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+216,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+217,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+218,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+219,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+220,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+221,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+222,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+223,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+224,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+225,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+226,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+227,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+228,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+229,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+230,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+231,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+232,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+233,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+234,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+235,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+236,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+237,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+238,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+239,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+240,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+241,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+242,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+243,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+244,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+245,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+246,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+247,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+248,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+249,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+250,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+251,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+252,(vlSelfRef.bnn_core__DOT__pe_array__BRA__2__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+253,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+254,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+255,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+256,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+257,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+258,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+259,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+260,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+261,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+262,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+263,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+264,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+265,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+266,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+267,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+268,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+269,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+270,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+271,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+272,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+273,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+274,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+275,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+276,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+277,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+278,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+279,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+280,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+281,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+282,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+283,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+284,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+285,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+286,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+287,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+288,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+289,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+290,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+291,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+292,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+293,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+294,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+295,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+296,(vlSelfRef.bnn_core__DOT__pe_array__BRA__3__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+297,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+298,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+299,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+300,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+301,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+302,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+303,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+304,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+305,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+306,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+307,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+308,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+309,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+310,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+311,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+312,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+313,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+314,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+315,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+316,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+317,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+318,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+319,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+320,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+321,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+322,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+323,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+324,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+325,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+326,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+327,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+328,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+329,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+330,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+331,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+332,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+333,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+334,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+335,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+336,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+337,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+338,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+339,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+340,(vlSelfRef.bnn_core__DOT__pe_array__BRA__4__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+341,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+342,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+343,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+344,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+345,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+346,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+347,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+348,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+349,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+350,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+351,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+352,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+353,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+354,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+355,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+356,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+357,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+358,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+359,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+360,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+361,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+362,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+363,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+364,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+365,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+366,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+367,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+368,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+369,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+370,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+371,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+372,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+373,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+374,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+375,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+376,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+377,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+378,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+379,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+380,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+381,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+382,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+383,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+384,(vlSelfRef.bnn_core__DOT__pe_array__BRA__5__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+385,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+386,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+387,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+388,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+389,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+390,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+391,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+392,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+393,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+394,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+395,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+396,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+397,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+398,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+399,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+400,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+401,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+402,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+403,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+404,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+405,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+406,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+407,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+408,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+409,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+410,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+411,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+412,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+413,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+414,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+415,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+416,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+417,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+418,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+419,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+420,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+421,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+422,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+423,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+424,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+425,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+426,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+427,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+428,(vlSelfRef.bnn_core__DOT__pe_array__BRA__6__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullBit(oldp+429,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clk));
    bufp->fullBit(oldp+430,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__rstn));
    bufp->fullIData(oldp+431,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__activations_buffer),32);
    bufp->fullIData(oldp+432,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__weight_buffer),32);
    bufp->fullSData(oldp+433,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__threshold),10);
    bufp->fullSData(oldp+434,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__neuron_value),10);
    bufp->fullBit(oldp+435,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__enable));
    bufp->fullBit(oldp+436,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__clear_accumulator));
    bufp->fullIData(oldp+437,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__xnor_result),32);
    bufp->fullCData(oldp+438,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[0]),2);
    bufp->fullCData(oldp+439,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[1]),2);
    bufp->fullCData(oldp+440,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[2]),2);
    bufp->fullCData(oldp+441,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[3]),2);
    bufp->fullCData(oldp+442,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[4]),2);
    bufp->fullCData(oldp+443,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[5]),2);
    bufp->fullCData(oldp+444,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[6]),2);
    bufp->fullCData(oldp+445,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[7]),2);
    bufp->fullCData(oldp+446,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[8]),2);
    bufp->fullCData(oldp+447,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[9]),2);
    bufp->fullCData(oldp+448,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[10]),2);
    bufp->fullCData(oldp+449,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[11]),2);
    bufp->fullCData(oldp+450,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[12]),2);
    bufp->fullCData(oldp+451,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[13]),2);
    bufp->fullCData(oldp+452,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[14]),2);
    bufp->fullCData(oldp+453,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage1[15]),2);
    bufp->fullCData(oldp+454,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[0]),3);
    bufp->fullCData(oldp+455,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[1]),3);
    bufp->fullCData(oldp+456,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[2]),3);
    bufp->fullCData(oldp+457,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[3]),3);
    bufp->fullCData(oldp+458,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[4]),3);
    bufp->fullCData(oldp+459,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[5]),3);
    bufp->fullCData(oldp+460,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[6]),3);
    bufp->fullCData(oldp+461,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage2[7]),3);
    bufp->fullCData(oldp+462,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[0]),4);
    bufp->fullCData(oldp+463,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[1]),4);
    bufp->fullCData(oldp+464,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[2]),4);
    bufp->fullCData(oldp+465,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage3[3]),4);
    bufp->fullCData(oldp+466,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4[0]),5);
    bufp->fullCData(oldp+467,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__stage4[1]),5);
    bufp->fullIData(oldp+468,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__i),32);
    bufp->fullCData(oldp+469,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__sum_reg),6);
    bufp->fullIData(oldp+470,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__inp),32);
    bufp->fullIData(oldp+471,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__wt),32);
    bufp->fullSData(oldp+472,(vlSelfRef.bnn_core__DOT__pe_array__BRA__7__KET____DOT__pe__DOT__accumulator),10);
    bufp->fullIData(oldp+473,(vlSelfRef.bnn_core__DOT__unnamedblk1__DOT__n),32);
    bufp->fullIData(oldp+474,(vlSelfRef.bnn_core__DOT__unnamedblk2__DOT__n),32);
}
