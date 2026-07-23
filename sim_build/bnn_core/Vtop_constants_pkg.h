// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CONSTANTS_PKG_H_
#define VERILATED_VTOP_CONSTANTS_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_constants_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ TOTAL_WORDS = 8U;
    static constexpr IData/*31:0*/ ACCUM_WIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ WORD_WIDTH = 3U;
    static constexpr IData/*31:0*/ NUM_PE = 8U;

    // CONSTRUCTORS
    Vtop_constants_pkg() = default;
    ~Vtop_constants_pkg() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_constants_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
