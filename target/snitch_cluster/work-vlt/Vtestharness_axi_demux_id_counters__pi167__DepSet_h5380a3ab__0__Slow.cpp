// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_axi_demux_id_counters__pi167.h"

VL_ATTR_COLD void Vtestharness_axi_demux_id_counters__pi167___ctor_var_reset(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->lookup_axi_id_i = VL_RAND_RESET_I(4);
    vlSelf->lookup_mst_select_o = VL_RAND_RESET_I(1);
    vlSelf->lookup_mst_select_occupied_o = VL_RAND_RESET_I(1);
    vlSelf->full_o = VL_RAND_RESET_I(1);
    vlSelf->push_axi_id_i = VL_RAND_RESET_I(4);
    vlSelf->push_mst_select_i = VL_RAND_RESET_I(1);
    vlSelf->push_i = VL_RAND_RESET_I(1);
    vlSelf->inject_axi_id_i = VL_RAND_RESET_I(4);
    vlSelf->inject_i = VL_RAND_RESET_I(1);
    vlSelf->pop_axi_id_i = VL_RAND_RESET_I(4);
    vlSelf->pop_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mst_select_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__push_en = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inject_en = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pop_en = VL_RAND_RESET_I(16);
    vlSelf->__PVT__cnt_full = VL_RAND_RESET_I(16);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta = VL_RAND_RESET_I(7);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d = VL_RAND_RESET_I(8);
}
