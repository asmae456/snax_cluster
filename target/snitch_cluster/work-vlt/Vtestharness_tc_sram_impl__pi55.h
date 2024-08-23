// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_TC_SRAM_IMPL__PI55_H_
#define VERILATED_VTESTHARNESS_TC_SRAM_IMPL__PI55_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_tc_sram_impl__pi55 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(impl_i,0,0);
    VL_OUT8(__PVT__impl_o,0,0);
    VL_IN8(req_i,0,0);
    VL_IN8(we_i,0,0);
    VL_IN8(be_i,7,0);
    VL_IN16(addr_i,8,0);
    SData/*8:0*/ __PVT__i_tc_sram__DOT__r_addr_q;
    SData/*8:0*/ i_tc_sram__DOT____Vlvbound_h5cf49065__0;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
    IData/*31:0*/ __PVT__i_tc_sram__DOT__genblk2__DOT__unnamedblk4__DOT__i;
    VL_IN64(wdata_i,63,0);
    VL_OUT64(rdata_o,63,0);
    QData/*63:0*/ __PVT__i_tc_sram__DOT__rdata_q;
    VlUnpacked<QData/*63:0*/, 512> __PVT__i_tc_sram__DOT__sram;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_tc_sram_impl__pi55(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_tc_sram_impl__pi55();
    VL_UNCOPYABLE(Vtestharness_tc_sram_impl__pi55);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
