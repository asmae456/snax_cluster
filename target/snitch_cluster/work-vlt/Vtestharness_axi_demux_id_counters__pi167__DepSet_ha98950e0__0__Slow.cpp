// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_demux_id_counters__pi167.h"

VL_ATTR_COLD void Vtestharness_axi_demux_id_counters__pi167___stl_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___stl_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__cnt_full = (((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                          >> 7U) | 
                                         (0x7fU == 
                                          (0x7fU & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                << 0xfU) | (((IData)(
                                                     (((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                       >> 7U) 
                                                      | (0x7fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                             << 0xeU) 
                                            | (((IData)(
                                                        (((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                          >> 7U) 
                                                         | (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                << 0xdU) 
                                               | (((IData)(
                                                           (((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 7U) 
                                                            | (0x7fU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU) 
                                                  | (((IData)(
                                                              (((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                >> 7U) 
                                                               | (0x7fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                      << 0xbU) 
                                                     | (((IData)(
                                                                 (((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                   >> 7U) 
                                                                  | (0x7fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                         << 0xaU) 
                                                        | (((IData)(
                                                                    (((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                      >> 7U) 
                                                                     | (0x7fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                            << 9U) 
                                                           | (((IData)(
                                                                       (((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                         >> 7U) 
                                                                        | (0x7fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                               << 8U) 
                                                              | (((IData)(
                                                                          (((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                            >> 7U) 
                                                                           | (0x7fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                  << 7U) 
                                                                 | (((IData)(
                                                                             (((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                               >> 7U) 
                                                                              | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                     << 6U) 
                                                                    | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                        << 5U) 
                                                                       | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                           << 4U) 
                                                                          | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                              << 3U) 
                                                                             | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))))))))))))))));
    vlSelf->lookup_mst_select_o = (1U & ((IData)(vlSelf->__PVT__mst_select_q) 
                                         >> (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                                              >> 0x18U))));
    vlSelf->lookup_mst_select_occupied_o = (1U & ((
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    << 0xfU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       << 0xeU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          << 0xdU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             << 0xcU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                << 0xbU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                   << 0xaU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                      << 9U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                         << 8U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                            << 7U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                               << 6U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                  >> 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                                                      >> 0x18U))));
}

VL_ATTR_COLD void Vtestharness_axi_demux_id_counters__pi167___stl_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___stl_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__cnt_full = (((IData)((((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                          >> 7U) | 
                                         (0x7fU == 
                                          (0x7fU & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                << 0xfU) | (((IData)(
                                                     (((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                       >> 7U) 
                                                      | (0x7fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                             << 0xeU) 
                                            | (((IData)(
                                                        (((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                          >> 7U) 
                                                         | (0x7fU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                << 0xdU) 
                                               | (((IData)(
                                                           (((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                             >> 7U) 
                                                            | (0x7fU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                   << 0xcU) 
                                                  | (((IData)(
                                                              (((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                >> 7U) 
                                                               | (0x7fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                      << 0xbU) 
                                                     | (((IData)(
                                                                 (((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                   >> 7U) 
                                                                  | (0x7fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                         << 0xaU) 
                                                        | (((IData)(
                                                                    (((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                      >> 7U) 
                                                                     | (0x7fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                            << 9U) 
                                                           | (((IData)(
                                                                       (((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                         >> 7U) 
                                                                        | (0x7fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                               << 8U) 
                                                              | (((IData)(
                                                                          (((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                            >> 7U) 
                                                                           | (0x7fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                  << 7U) 
                                                                 | (((IData)(
                                                                             (((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                               >> 7U) 
                                                                              | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                     << 6U) 
                                                                    | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                        << 5U) 
                                                                       | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                           << 4U) 
                                                                          | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                              << 3U) 
                                                                             | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q))))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                                                                                >> 7U) 
                                                                                | (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q))))))))))))))))))));
    vlSelf->lookup_mst_select_o = (1U & ((IData)(vlSelf->__PVT__mst_select_q) 
                                         >> (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                              >> 0x11U))));
    vlSelf->lookup_mst_select_occupied_o = (1U & ((
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                    << 0xfU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                       << 0xeU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                          << 0xdU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                             << 0xcU) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                << 0xbU) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                   << 0xaU) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                      << 9U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                         << 8U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                            << 7U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                               << 6U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q)))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q)))))))))))))))))) 
                                                  >> 
                                                  (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                      >> 0x11U))));
}
