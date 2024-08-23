// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_demux_id_counters__pi167.h"

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__pop_en = ((1U & ((vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut[2U] 
                                     >> 0x12U) & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                  >> 0x15U)))
                              ? (0xffffU & ((IData)(1U) 
                                            << (0xfU 
                                                & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut[2U] 
                                                   >> 0xeU))))
                              : 0U);
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
        = ((1U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((1U & (IData)(vlSelf->__PVT__pop_en)) ? 0U
             : 1U) : ((1U & (IData)(vlSelf->__PVT__pop_en))
                       ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
        = ((2U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((2U & (IData)(vlSelf->__PVT__pop_en)) ? 0U
             : 1U) : ((2U & (IData)(vlSelf->__PVT__pop_en))
                       ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
        = ((4U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((4U & (IData)(vlSelf->__PVT__pop_en)) ? 0U
             : 1U) : ((4U & (IData)(vlSelf->__PVT__pop_en))
                       ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
        = ((8U & (IData)(vlSelf->__PVT__push_en)) ? 
           ((8U & (IData)(vlSelf->__PVT__pop_en)) ? 0U
             : 1U) : ((8U & (IData)(vlSelf->__PVT__pop_en))
                       ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
        = ((0x10U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
        = ((0x20U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
        = ((0x40U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
        = ((0x80U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
        = ((0x100U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
        = ((0x200U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
        = ((0x400U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
        = ((0x800U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
        = ((0x1000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
        = ((0x2000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
        = ((0x4000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
        = ((0x8000U & (IData)(vlSelf->__PVT__push_en))
            ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U) : ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                               ? 1U : 0U));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((1U & (IData)(vlSelf->__PVT__push_en))
                ? (~ (IData)(vlSelf->__PVT__pop_en))
                : (IData)(vlSelf->__PVT__pop_en)))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ (IData)(vlSelf->__PVT__push_en))) 
                         && (1U & (IData)(vlSelf->__PVT__pop_en)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((2U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 1U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 1U)))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 1U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 1U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((4U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 2U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 2U)))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 2U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 2U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((8U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 3U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 3U)))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 3U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 3U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x10U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 4U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 4U)))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 4U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 4U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x20U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 5U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 5U)))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 5U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 5U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x40U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 6U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 6U)))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 6U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 6U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x80U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 7U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 7U)))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 7U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 7U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x100U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 8U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 8U)))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 8U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 8U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x200U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 9U)) : ((IData)(vlSelf->__PVT__pop_en) 
                                 >> 9U)))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 9U))) && (1U 
                                                & ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 9U)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x400U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xaU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xaU)))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xaU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xaU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x800U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xbU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xbU)))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xbU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xbU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x1000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xcU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xcU)))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xcU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xcU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x2000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xdU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xdU)))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xdU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xdU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x4000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xeU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xeU)))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xeU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xeU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if ((1U & ((0x8000U & (IData)(vlSelf->__PVT__push_en))
                ? (~ ((IData)(vlSelf->__PVT__pop_en) 
                      >> 0xfU)) : ((IData)(vlSelf->__PVT__pop_en) 
                                   >> 0xfU)))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & (((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                                   >> 0xfU))) && (1U 
                                                  & ((IData)(vlSelf->__PVT__pop_en) 
                                                     >> 0xfU)))
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if ((1U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffeU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | (IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported));
        }
        if ((2U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffdU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 1U));
        }
        if ((4U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffbU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 2U));
        }
        if ((8U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfff7U 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 3U));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffefU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 4U));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffdfU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 5U));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffbfU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 6U));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xff7fU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 7U));
        }
        if ((0x100U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfeffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 8U));
        }
        if ((0x200U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfdffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 9U));
        }
        if ((0x400U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfbffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xaU));
        }
        if ((0x800U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xf7ffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xbU));
        }
        if ((0x1000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xefffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xcU));
        }
        if ((0x2000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xdfffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xdU));
        }
        if ((0x4000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xbfffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xeU));
        }
        if ((0x8000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0x7fffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                                              << 0xfU));
        }
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__mst_select_q = (0xfffeU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfffdU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfffbU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfff7U & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffefU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffdfU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffbfU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xff7fU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfeffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfdffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfbffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xf7ffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xefffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xdfffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xbfffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0x7fffU & (IData)(vlSelf->__PVT__mst_select_q));
    }
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
    vlSelf->lookup_mst_select_o = (1U & ((IData)(vlSelf->__PVT__mst_select_q) 
                                         >> (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                                              >> 0x18U))));
}

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__1(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__1\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                                                    >> 0x18U))))
                               : 0U);
}

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0\n"); );
    // Body
    vlSelf->__PVT__push_en = ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push)
                               ? (0xffffU & ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                    >> 0x11U))))
                               : 0U);
    vlSelf->__PVT__inject_en = ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject)
                                 ? (0xffffU & ((IData)(1U) 
                                               << (0xfU 
                                                   & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                                                      >> 0x18U))))
                                 : 0U);
}

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__1(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___act_comb__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__1\n"); );
    // Body
    vlSelf->__PVT__pop_en = ((1U & ((vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut[2U] 
                                     >> 9U) & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                                               & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut[0U] 
                                                  >> 2U))))
                              ? (0xffffU & ((IData)(1U) 
                                            << (0xfU 
                                                & (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut[2U] 
                                                   >> 5U))))
                              : 0U);
    if ((1U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & ((1U & (IData)(vlSelf->__PVT__inject_en)) 
                     || (1U & (~ (IData)(vlSelf->__PVT__pop_en)))));
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__inject_en))
                ? ((1U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((1U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((1U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en 
            = (1U & (~ (IData)(vlSelf->__PVT__pop_en)));
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta 
            = ((1U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else if ((1U & (IData)(vlSelf->__PVT__pop_en))) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 1U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 1U;
    } else {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta = 0U;
    }
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down 
        = ((1U & (~ (IData)(vlSelf->__PVT__push_en))) 
           && ((1U & (~ (IData)(vlSelf->__PVT__inject_en))) 
               && (1U & (IData)(vlSelf->__PVT__pop_en))));
    if ((2U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 1U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 1U)))));
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__inject_en))
                ? ((2U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((2U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((2U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 1U)));
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 1U));
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta 
            = ((2U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 1U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 1U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 1U))));
    if ((4U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 2U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 2U)))));
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__inject_en))
                ? ((4U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((4U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((4U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 2U)));
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 2U));
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta 
            = ((4U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 2U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 2U))));
    if ((8U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 3U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 3U)))));
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__inject_en))
                ? ((8U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((8U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((8U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 3U)));
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 3U));
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta 
            = ((8U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 3U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 3U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 3U))));
    if ((0x10U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 4U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 4U)))));
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x10U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 4U)));
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 4U));
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta 
            = ((0x10U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 4U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 4U))));
    if ((0x20U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 5U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 5U)))));
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x20U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 5U)));
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 5U));
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta 
            = ((0x20U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 5U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 5U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 5U))));
    if ((0x40U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 6U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 6U)))));
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x40U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 6U)));
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 6U));
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta 
            = ((0x40U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 6U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 6U))));
    if ((0x80U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 7U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 7U)))));
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x80U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 7U)));
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 7U));
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta 
            = ((0x80U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 7U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 7U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 7U))));
    if ((0x100U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 8U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 8U)))));
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x100U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 8U)));
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 8U));
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta 
            = ((0x100U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 8U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 8U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 8U))));
    if ((0x200U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 9U)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                 >> 9U)))));
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x200U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 9U)));
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 9U));
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta 
            = ((0x200U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 9U))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                            >> 9U))) 
                                  && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                            >> 9U))));
    if ((0x400U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xaU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xaU)))));
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x400U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xaU)));
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xaU));
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta 
            = ((0x400U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xaU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xaU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xaU))));
    if ((0x800U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xbU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xbU)))));
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x800U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xbU)));
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xbU));
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta 
            = ((0x800U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xbU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xbU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xbU))));
    if ((0x1000U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xcU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xcU)))));
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x1000U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xcU)));
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xcU));
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta 
            = ((0x1000U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xcU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xcU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xcU))));
    if ((0x2000U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xdU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xdU)))));
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x2000U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xdU)));
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xdU));
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta 
            = ((0x2000U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xdU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xdU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xdU))));
    if ((0x4000U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xeU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xeU)))));
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x4000U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xeU)));
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xeU));
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta 
            = ((0x4000U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xeU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xeU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xeU))));
    if ((0x8000U & (IData)(vlSelf->__PVT__push_en))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((1U & ((IData)(vlSelf->__PVT__inject_en) 
                            >> 0xfU)) || (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                                                   >> 0xfU)))));
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelf->__PVT__inject_en))
                ? ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                    ? 1U : 2U) : ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                                   ? 0U : 1U));
    } else if ((0x8000U & (IData)(vlSelf->__PVT__inject_en))) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & (~ ((IData)(vlSelf->__PVT__pop_en) 
                        >> 0xfU)));
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                ? 0U : 1U);
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en 
            = (1U & ((IData)(vlSelf->__PVT__pop_en) 
                     >> 0xfU));
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta 
            = ((0x8000U & (IData)(vlSelf->__PVT__pop_en))
                ? 1U : 0U);
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down 
        = ((1U & (~ ((IData)(vlSelf->__PVT__push_en) 
                     >> 0xfU))) && ((1U & (~ ((IData)(vlSelf->__PVT__inject_en) 
                                              >> 0xfU))) 
                                    && (1U & ((IData)(vlSelf->__PVT__pop_en) 
                                              >> 0xfU))));
    vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__cnt_delta))));
    }
    vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
        = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q;
    if (vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_en) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d 
            = (0xffU & ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_down)
                         ? ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            - (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))
                         : ((IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q) 
                            + (IData)(vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__cnt_delta))));
    }
}

VL_INLINE_OPT void Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0(Vtestharness_axi_demux_id_counters__pi167* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_axi_demux_id_counters__pi167___nba_sequent__TOP__testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q 
            = vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_d;
        if ((1U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffeU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | (IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported));
        }
        if ((2U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffdU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 1U));
        }
        if ((4U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfffbU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 2U));
        }
        if ((8U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfff7U 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 3U));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffefU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 4U));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffdfU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 5U));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xffbfU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 6U));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xff7fU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 7U));
        }
        if ((0x100U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfeffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 8U));
        }
        if ((0x200U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfdffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 9U));
        }
        if ((0x400U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xfbffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xaU));
        }
        if ((0x800U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xf7ffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xbU));
        }
        if ((0x1000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xefffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xcU));
        }
        if ((0x2000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xdfffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xdU));
        }
        if ((0x4000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0xbfffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xeU));
        }
        if ((0x8000U & (IData)(vlSelf->__PVT__push_en))) {
            vlSelf->__PVT__mst_select_q = ((0x7fffU 
                                            & (IData)(vlSelf->__PVT__mst_select_q)) 
                                           | ((IData)(vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                              << 0xfU));
        }
    } else {
        vlSelf->__PVT__gen_counters__BRA__15__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__14__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__13__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__12__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__11__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__10__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__9__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__8__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__7__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__6__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__5__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__4__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__3__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__2__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__1__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__gen_counters__BRA__0__KET____DOT__i_in_flight_cnt__DOT__counter_q = 0U;
        vlSelf->__PVT__mst_select_q = (0xfffeU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfffdU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfffbU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfff7U & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffefU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffdfU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xffbfU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xff7fU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfeffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfdffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xfbffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xf7ffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xefffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xdfffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0xbfffU & (IData)(vlSelf->__PVT__mst_select_q));
        vlSelf->__PVT__mst_select_q = (0x7fffU & (IData)(vlSelf->__PVT__mst_select_q));
    }
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
    vlSelf->lookup_mst_select_o = (1U & ((IData)(vlSelf->__PVT__mst_select_q) 
                                         >> (0xfU & 
                                             (vlSymsp->TOP.testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                              >> 0x11U))));
}
