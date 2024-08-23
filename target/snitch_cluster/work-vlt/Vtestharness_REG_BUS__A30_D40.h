// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_REG_BUS__A30_D40_H_
#define VERILATED_VTESTHARNESS_REG_BUS__A30_D40_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_REG_BUS__A30_D40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    QData/*63:0*/ rdata;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_REG_BUS__A30_D40(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_REG_BUS__A30_D40();
    VL_UNCOPYABLE(Vtestharness_REG_BUS__A30_D40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtestharness_REG_BUS__A30_D40* obj);

#endif  // guard
