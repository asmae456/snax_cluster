// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_SNITCH_AMO_SHIM__A9_D40_C1_H_
#define VERILATED_VTESTHARNESS_SNITCH_AMO_SHIM__A9_D40_C1_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_snitch_amo_shim__A9_D40_C1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_IN8(dma_access_i,0,0);
    VL_IN8(amo_i,3,0);
    VL_IN8(write_i,0,0);
    VL_IN8(wstrb_i,7,0);
    VL_IN8(core_id_i,0,0);
    VL_IN8(is_core_i,0,0);
    VL_OUT8(mem_req_o,0,0);
    VL_OUT8(mem_wen_o,0,0);
    VL_OUT8(mem_be_o,7,0);
    VL_OUT8(__PVT__amo_conflict_o,0,0);
    CData/*0:0*/ __PVT__idx_q;
    CData/*3:0*/ __PVT__amo_op_q;
    CData/*0:0*/ __PVT__load_amo;
    CData/*0:0*/ __PVT__sc_successful;
    CData/*0:0*/ __PVT__sc_successful_q;
    CData/*0:0*/ __PVT__sc_q;
    CData/*1:0*/ __PVT__state_q;
    CData/*1:0*/ __PVT__state_d;
    CData/*0:0*/ __PVT__core_valid;
    CData/*0:0*/ __PVT__core_ready;
    CData/*0:0*/ __PVT__core_wen;
    CData/*7:0*/ __PVT__core_be;
    CData/*0:0*/ __PVT__core_arb_ready;
    VL_IN16(addr_i,8,0);
    VL_OUT16(mem_add_o,8,0);
    SData/*8:0*/ __PVT__addr_q;
    SData/*10:0*/ __PVT__reservation_d;
    SData/*10:0*/ __PVT__reservation_q;
    SData/*8:0*/ __PVT__core_add;
    IData/*31:0*/ __PVT__operand_a;
    IData/*31:0*/ __PVT__operand_b_q;
    IData/*31:0*/ __PVT__amo_result;
    IData/*31:0*/ __PVT__amo_result_q;
    VL_IN64(wdata_i,63,0);
    VL_OUT64(rdata_o,63,0);
    VL_OUT64(mem_wdata_o,63,0);
    VL_IN64(mem_rdata_i,63,0);
    QData/*63:0*/ __PVT__core_wdata;
    QData/*33:0*/ __PVT__i_amo_alu__DOT__adder_sum;
    QData/*32:0*/ __PVT__i_amo_alu__DOT__adder_operand_a;
    QData/*32:0*/ __PVT__i_amo_alu__DOT__adder_operand_b;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_snitch_amo_shim__A9_D40_C1(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_snitch_amo_shim__A9_D40_C1();
    VL_UNCOPYABLE(Vtestharness_snitch_amo_shim__A9_D40_C1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
