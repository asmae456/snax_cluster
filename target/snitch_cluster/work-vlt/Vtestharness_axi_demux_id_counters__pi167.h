// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_AXI_DEMUX_ID_COUNTERS__PI167_H_
#define VERILATED_VTESTHARNESS_AXI_DEMUX_ID_COUNTERS__PI167_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_axi_demux_id_counters__pi167 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(lookup_axi_id_i,3,0);
        VL_OUT8(lookup_mst_select_o,0,0);
        VL_OUT8(lookup_mst_select_occupied_o,0,0);
        VL_OUT8(full_o,0,0);
        VL_IN8(push_axi_id_i,3,0);
        VL_IN8(push_mst_select_i,0,0);
        VL_IN8(push_i,0,0);
        VL_IN8(inject_axi_id_i,3,0);
        VL_IN8(inject_i,0,0);
        VL_IN8(pop_axi_id_i,3,0);
        VL_IN8(pop_i,0,0);
        SData/*15:0*/ __PVT__mst_select_q;
        CData/*0:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__0__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__1__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__2__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__3__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__4__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__5__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__6__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__7__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__8__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__9__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__10__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__11__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__12__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__13__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__14__KET____DOT__cnt_delta;
        CData/*0:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_en;
        CData/*0:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_down;
        CData/*6:0*/ __PVT__gen_counters__BRA__15__KET____DOT__cnt_delta;
        CData/*7:0*/ __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
    };
    struct {
        CData/*7:0*/ __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        CData/*7:0*/ __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
        CData/*7:0*/ __PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        SData/*15:0*/ __PVT__push_en;
        SData/*15:0*/ __PVT__inject_en;
        SData/*15:0*/ __PVT__pop_en;
        SData/*15:0*/ __PVT__cnt_full;
    };

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_axi_demux_id_counters__pi167(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_axi_demux_id_counters__pi167();
    VL_UNCOPYABLE(Vtestharness_axi_demux_id_counters__pi167);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
