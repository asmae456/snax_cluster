// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_RR_ARB_TREE__PI116_H_
#define VERILATED_VTESTHARNESS_RR_ARB_TREE__PI116_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_rr_arb_tree__pi116 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(rr_i,4,0);
    VL_OUT8(req_o,0,0);
    VL_IN8(gnt_i,0,0);
    VL_OUT8(idx_o,4,0);
    VlWide<5>/*154:0*/ __PVT__gen_arbiter__DOT__index_nodes;
    CData/*4:0*/ __PVT__gen_arbiter__DOT__rr_q;
    CData/*4:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__sel;
    CData/*0:0*/ __PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__sel;
    VlWide<5>/*159:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
    VlWide<5>/*159:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
    VL_IN(req_i,18,0);
    VL_OUT(gnt_o,18,0);
    IData/*30:0*/ __PVT__gen_arbiter__DOT__gnt_nodes;
    IData/*30:0*/ __PVT__gen_arbiter__DOT__req_nodes;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__req_d;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    IData/*31:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp;
    IData/*31:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
    IData/*18:0*/ __PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp;
    VL_INW(data_i,1671,0,53);
    VL_OUTW(data_o,87,0,3);
    VlWide<86>/*2727:0*/ __PVT__gen_arbiter__DOT__data_nodes;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_rr_arb_tree__pi116(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_rr_arb_tree__pi116();
    VL_UNCOPYABLE(Vtestharness_rr_arb_tree__pi116);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
