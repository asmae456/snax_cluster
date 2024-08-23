// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_axi_burst_splitter_counters__pi153.h"

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___nba_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__10(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___nba_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__10\n"); );
    // Body
    vlSelf->__PVT__err_d[0U] = vlSelf->__PVT__err_q[0U];
    vlSelf->__PVT__err_d[1U] = vlSelf->__PVT__err_q[1U];
    vlSelf->__PVT__err_d[2U] = vlSelf->__PVT__err_q[2U];
    vlSelf->__PVT__err_d[3U] = vlSelf->__PVT__err_q[3U];
    if ((((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req) 
          & (IData)(vlSelf->cnt_gnt_o)) & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
                                           >> 6U))) {
        vlSelf->__PVT__err_d[((IData)(vlSelf->__PVT__cnt_r_idx) 
                              >> 5U)] = (vlSelf->__PVT__err_d[
                                         ((IData)(vlSelf->__PVT__cnt_r_idx) 
                                          >> 5U)] | 
                                         ((IData)(1U) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->__PVT__cnt_r_idx))));
    }
    if (((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req) 
         & (IData)(vlSelf->alloc_gnt_o))) {
        vlSelf->__PVT__err_d[(3U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                    >> 5U))] = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))) 
                                                & vlSelf->__PVT__err_d[
                                                (3U 
                                                 & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    >> 5U))]);
    }
    vlSelf->__PVT__cnt_set[0U] = 0U;
    vlSelf->__PVT__cnt_set[1U] = 0U;
    vlSelf->__PVT__cnt_set[2U] = 0U;
    vlSelf->__PVT__cnt_set[3U] = 0U;
    vlSelf->__PVT__cnt_set[(3U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                  >> 5U))] = (((~ ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))) 
                                               & vlSelf->__PVT__cnt_set[
                                               (3U 
                                                & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   >> 5U))]) 
                                              | (((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req) 
                                                  & (IData)(vlSelf->alloc_gnt_o)) 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])));
    vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[0U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((vlSelf->__PVT__cnt_dec[0U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[1U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((vlSelf->__PVT__cnt_dec[1U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[2U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((vlSelf->__PVT__cnt_dec[2U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[3U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
                                                 >> 0x17U))));
    } else if ((vlSelf->__PVT__cnt_dec[3U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___act_sequent__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__7(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___act_sequent__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__7\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_7;
    __VdfgRegularize_h0f577513_6_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_8;
    __VdfgRegularize_h0f577513_6_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_9;
    __VdfgRegularize_h0f577513_6_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_10;
    __VdfgRegularize_h0f577513_6_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_11;
    __VdfgRegularize_h0f577513_6_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_12;
    __VdfgRegularize_h0f577513_6_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h0f577513_6_13;
    __VdfgRegularize_h0f577513_6_13 = 0;
    // Body
    vlSelf->__PVT__idq_oup_gnt = 0U;
    vlSelf->__PVT__i_idq__DOT__match_out_id_valid = 0U;
    vlSelf->__PVT__i_idq__DOT__match_out_id = 0U;
    if (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req) {
        vlSelf->__PVT__idq_oup_gnt = 1U;
        vlSelf->__PVT__i_idq__DOT__match_out_id_valid = 1U;
        vlSelf->__PVT__i_idq__DOT__match_out_id = vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id;
    }
    __VdfgRegularize_h0f577513_6_7 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                      & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                             >> 0x1eU)) 
                                         & ((7U & (
                                                   vlSelf->__PVT__i_idq__DOT__head_tail_q[4U] 
                                                   >> 0xdU)) 
                                            == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_8 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                      & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                             >> 0xcU)) 
                                         & ((7U & (
                                                   vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                   >> 0x1bU)) 
                                            == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_9 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                      & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                             >> 0x1aU)) 
                                         & ((7U & (
                                                   vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                   >> 9U)) 
                                            == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_10 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                       & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                              >> 8U)) 
                                          & ((7U & 
                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                               >> 0x17U)) 
                                             == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_11 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                       & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                              >> 0x16U)) 
                                          & ((7U & 
                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                               >> 5U)) 
                                             == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_12 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                       & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                              >> 4U)) 
                                          & ((7U & 
                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                               >> 0x13U)) 
                                             == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    __VdfgRegularize_h0f577513_6_13 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                       & ((~ (vlSelf->__PVT__i_idq__DOT__head_tail_q[0U] 
                                              >> 0x12U)) 
                                          & ((7U & 
                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                               >> 1U)) 
                                             == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id))));
    vlSelf->__PVT__i_idq__DOT__match_out_idx = ((((IData)(__VdfgRegularize_h0f577513_6_7) 
                                                  | ((IData)(__VdfgRegularize_h0f577513_6_8) 
                                                     | ((IData)(__VdfgRegularize_h0f577513_6_9) 
                                                        | (IData)(__VdfgRegularize_h0f577513_6_10)))) 
                                                 << 2U) 
                                                | ((((IData)(__VdfgRegularize_h0f577513_6_7) 
                                                     | ((IData)(__VdfgRegularize_h0f577513_6_8) 
                                                        | ((IData)(__VdfgRegularize_h0f577513_6_11) 
                                                           | (IData)(__VdfgRegularize_h0f577513_6_12)))) 
                                                    << 1U) 
                                                   | ((IData)(__VdfgRegularize_h0f577513_6_7) 
                                                      | ((IData)(__VdfgRegularize_h0f577513_6_9) 
                                                         | ((IData)(__VdfgRegularize_h0f577513_6_11) 
                                                            | (IData)(__VdfgRegularize_h0f577513_6_13))))));
    vlSelf->__PVT__i_idq__DOT__idx_matches_out_id = 
        (((IData)(__VdfgRegularize_h0f577513_6_7) << 7U) 
         | (((IData)(__VdfgRegularize_h0f577513_6_8) 
             << 6U) | (((IData)(__VdfgRegularize_h0f577513_6_9) 
                        << 5U) | (((IData)(__VdfgRegularize_h0f577513_6_10) 
                                   << 4U) | (((IData)(__VdfgRegularize_h0f577513_6_11) 
                                              << 3U) 
                                             | (((IData)(__VdfgRegularize_h0f577513_6_12) 
                                                 << 2U) 
                                                | (((IData)(__VdfgRegularize_h0f577513_6_13) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__i_idq__DOT__match_out_id_valid) 
                                                      & ((~ 
                                                          vlSelf->__PVT__i_idq__DOT__head_tail_q[0U]) 
                                                         & ((7U 
                                                             & (vlSelf->__PVT__i_idq__DOT__head_tail_q[0U] 
                                                                >> 0xfU)) 
                                                            == (IData)(vlSelf->__PVT__i_idq__DOT__match_out_id)))))))))));
    vlSelf->__PVT__i_idq__DOT__oup_data_free_idx = 
        ((0x8fU >= ((IData)(8U) + (0xffU & ((IData)(0x12U) 
                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
          ? (0x7fU & (((0U == (0x1fU & ((IData)(8U) 
                                        + (0xffU & 
                                           ((IData)(0x12U) 
                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                        ? 0U : (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                (((IData)(0xeU) + (0xffU 
                                                   & ((IData)(0x12U) 
                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x12U) 
                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                      | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                         (((IData)(8U) + (0xffU & ((IData)(0x12U) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                          >> 5U)] >> (0x1fU & ((IData)(8U) 
                                               + (0xffU 
                                                  & ((IData)(0x12U) 
                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
          : 0U);
    vlSelf->__PVT__cnt_r_idx = 0U;
    vlSelf->__PVT__idq_oup_valid = 0U;
    if (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req) {
        if ((0U != (IData)(vlSelf->__PVT__i_idq__DOT__idx_matches_out_id))) {
            vlSelf->__PVT__cnt_r_idx = ((0x77fU >= 
                                         ((IData)(8U) 
                                          + (0x7ffU 
                                             & ((IData)(0xfU) 
                                                * (
                                                   (0x8fU 
                                                    >= 
                                                    ((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(8U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(0xeU) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                    : 0U)))))
                                         ? (0x7fU & 
                                            (((0U == 
                                               (0x1fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xfU) 
                                                       * 
                                                       ((0x8fU 
                                                         >= 
                                                         ((IData)(8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x12U) 
                                                              * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                         ? 
                                                        (0x7fU 
                                                         & (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                              (((IData)(0xeU) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x12U) 
                                                                    * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                            | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                               (((IData)(8U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                         : 0U))))))
                                               ? 0U
                                               : (vlSelf->__PVT__i_idq__DOT__linked_data_q[
                                                  (((IData)(0xeU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xfU) 
                                                        * 
                                                        ((0x8fU 
                                                          >= 
                                                          ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                          ? 
                                                         (0x7fU 
                                                          & (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                               (((IData)(0xeU) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                             | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                (((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                          : 0U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(8U) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xfU) 
                                                           * 
                                                           ((0x8fU 
                                                             >= 
                                                             ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                             ? 
                                                            (0x7fU 
                                                             & (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x12U) 
                                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                  (((IData)(0xeU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x12U) 
                                                                           * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                                | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                   (((IData)(8U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x12U) 
                                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x12U) 
                                                                           * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                             : 0U)))))))) 
                                             | (vlSelf->__PVT__i_idq__DOT__linked_data_q[
                                                (((IData)(8U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xfU) 
                                                      * 
                                                      ((0x8fU 
                                                        >= 
                                                        ((IData)(8U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x12U) 
                                                             * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                        ? 
                                                       (0x7fU 
                                                        & (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(8U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                             ? 0U
                                                             : 
                                                            (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                             (((IData)(0xeU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                              >> 5U)] 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                           | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                              (((IData)(8U) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x12U) 
                                                                    * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                        : 0U)))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xfU) 
                                                        * 
                                                        ((0x8fU 
                                                          >= 
                                                          ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                          ? 
                                                         (0x7fU 
                                                          & (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                               (((IData)(0xeU) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                             | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                (((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                          : 0U))))))))
                                         : 0U);
            vlSelf->__PVT__idq_oup_valid = 1U;
        }
    }
    vlSelf->cnt_err_o = (1U & (vlSelf->__PVT__err_q[
                               ((IData)(vlSelf->__PVT__cnt_r_idx) 
                                >> 5U)] >> (0x1fU & (IData)(vlSelf->__PVT__cnt_r_idx))));
    vlSelf->__PVT__read_len = (0x1ffU & (((0x47fU >= 
                                           (0x7ffU 
                                            & ((IData)(9U) 
                                               * (IData)(vlSelf->__PVT__cnt_r_idx))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(9U) 
                                                    * (IData)(vlSelf->__PVT__cnt_r_idx))))
                                                ? 0U
                                                : (
                                                   vlSelf->__PVT__cnt_oup[
                                                   (((IData)(8U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlSelf->__PVT__cnt_r_idx)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        * (IData)(vlSelf->__PVT__cnt_r_idx)))))) 
                                              | (vlSelf->__PVT__cnt_oup[
                                                 (0x3fU 
                                                  & (((IData)(9U) 
                                                      * (IData)(vlSelf->__PVT__cnt_r_idx)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->__PVT__cnt_r_idx)))))
                                           : 0U) - (IData)(1U)));
    vlSelf->cnt_gnt_o = ((IData)(vlSelf->__PVT__idq_oup_gnt) 
                         & (IData)(vlSelf->__PVT__idq_oup_valid));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___act_sequent__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__8(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___act_sequent__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__8\n"); );
    // Body
    vlSelf->__PVT__cnt_dec[0U] = 0U;
    vlSelf->__PVT__cnt_dec[1U] = 0U;
    vlSelf->__PVT__cnt_dec[2U] = 0U;
    vlSelf->__PVT__cnt_dec[3U] = 0U;
    vlSelf->__PVT__cnt_dec[((IData)(vlSelf->__PVT__cnt_r_idx) 
                            >> 5U)] = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & (IData)(vlSelf->__PVT__cnt_r_idx)))) 
                                        & vlSelf->__PVT__cnt_dec[
                                        ((IData)(vlSelf->__PVT__cnt_r_idx) 
                                         >> 5U)]) | 
                                       ((((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req) 
                                          & (IData)(vlSelf->cnt_gnt_o)) 
                                         & (IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_dec)) 
                                        << (0x1fU & (IData)(vlSelf->__PVT__cnt_r_idx))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__0(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__0\n"); );
    // Body
    vlSelf->__PVT__idq_inp_req = ((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req) 
                                  & (IData)(vlSelf->alloc_gnt_o));
    vlSelf->__PVT__i_idq__DOT__match_in_id_valid = 0U;
    vlSelf->__PVT__i_idq__DOT__match_in_id = 0U;
    if (((IData)(vlSelf->__PVT__idq_inp_req) & (IData)(vlSelf->__PVT__idq_inp_gnt))) {
        vlSelf->__PVT__i_idq__DOT__match_in_id_valid = 1U;
        vlSelf->__PVT__i_idq__DOT__match_in_id = (7U 
                                                  & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                                     >> 0x11U));
    }
    vlSelf->__VdfgRegularize_h0f577513_6_0 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                   >> 0x1eU)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[4U] 
                                                        >> 0xdU)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_1 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                   >> 0xcU)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                        >> 0x1bU)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_2 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                                   >> 0x1aU)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[3U] 
                                                        >> 9U)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_3 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                                   >> 8U)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                                        >> 0x17U)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_4 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                                   >> 0x16U)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[2U] 
                                                        >> 5U)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_5 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                                   >> 4U)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                                        >> 0x13U)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__VdfgRegularize_h0f577513_6_6 = ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                              & ((~ 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[0U] 
                                                   >> 0x12U)) 
                                                 & ((7U 
                                                     & (vlSelf->__PVT__i_idq__DOT__head_tail_q[1U] 
                                                        >> 1U)) 
                                                    == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id))));
    vlSelf->__PVT__i_idq__DOT__match_in_idx = ((((IData)(vlSelf->__VdfgRegularize_h0f577513_6_0) 
                                                 | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_1) 
                                                    | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_2) 
                                                       | (IData)(vlSelf->__VdfgRegularize_h0f577513_6_3)))) 
                                                << 2U) 
                                               | ((((IData)(vlSelf->__VdfgRegularize_h0f577513_6_0) 
                                                    | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_1) 
                                                       | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_4) 
                                                          | (IData)(vlSelf->__VdfgRegularize_h0f577513_6_5)))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_0) 
                                                     | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_2) 
                                                        | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_4) 
                                                           | (IData)(vlSelf->__VdfgRegularize_h0f577513_6_6))))));
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__1(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__1\n"); );
    // Body
    vlSelf->__PVT__err_d[0U] = vlSelf->__PVT__err_q[0U];
    vlSelf->__PVT__err_d[1U] = vlSelf->__PVT__err_q[1U];
    vlSelf->__PVT__err_d[2U] = vlSelf->__PVT__err_q[2U];
    vlSelf->__PVT__err_d[3U] = vlSelf->__PVT__err_q[3U];
    if (((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req) 
         & (IData)(vlSelf->alloc_gnt_o))) {
        vlSelf->__PVT__err_d[(3U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                    >> 5U))] = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))) 
                                                & vlSelf->__PVT__err_d[
                                                (3U 
                                                 & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    >> 5U))]);
    }
    vlSelf->__PVT__cnt_set[0U] = 0U;
    vlSelf->__PVT__cnt_set[1U] = 0U;
    vlSelf->__PVT__cnt_set[2U] = 0U;
    vlSelf->__PVT__cnt_set[3U] = 0U;
    vlSelf->__PVT__cnt_set[(3U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                  >> 5U))] = (((~ ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))) 
                                               & vlSelf->__PVT__cnt_set[
                                               (3U 
                                                & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   >> 5U))]) 
                                              | (((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req) 
                                                  & (IData)(vlSelf->alloc_gnt_o)) 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])));
    vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__1__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__2__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__3__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__4__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__5__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__6__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__7__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__8__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__9__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__10__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__11__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__12__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__13__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__14__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__15__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__16__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__17__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__18__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__19__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__20__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__21__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__22__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__23__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__24__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__25__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__26__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__27__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__28__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__29__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[0U])) {
        vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__30__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[0U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((vlSelf->__PVT__cnt_dec[0U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__31__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__32__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__33__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__34__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__35__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__36__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__37__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__38__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__39__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__40__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__41__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__42__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__43__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__44__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__45__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__46__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__47__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__48__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__49__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__50__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__51__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__52__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__53__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__54__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__55__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__56__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__57__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__58__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__59__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__60__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__61__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[1U])) {
        vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__62__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[1U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((vlSelf->__PVT__cnt_dec[1U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__63__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__64__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__65__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__66__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__67__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__68__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__69__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__70__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__71__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__72__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__73__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__74__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__75__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__76__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__77__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__78__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__79__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__80__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__81__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__82__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__83__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__84__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__85__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__86__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__87__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__88__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__89__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__90__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__91__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__92__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__93__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[2U])) {
        vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__94__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[2U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((vlSelf->__PVT__cnt_dec[2U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__95__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((1U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((1U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__96__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((2U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((2U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__97__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((4U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((4U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__98__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((8U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((8U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__99__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__100__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__101__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__102__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__103__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__104__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__105__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__106__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__107__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__108__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__109__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__110__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__111__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__112__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__113__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__114__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x80000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x80000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__115__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x100000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x100000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__116__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x200000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x200000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__117__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x400000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x400000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__118__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x800000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x800000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__119__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x1000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x1000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__120__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x2000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x2000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__121__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x4000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x4000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__122__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x8000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x8000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__123__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x10000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x10000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__124__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x20000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x20000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__125__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((0x40000000U & vlSelf->__PVT__cnt_set[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((0x40000000U & vlSelf->__PVT__cnt_dec[3U])) {
        vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__126__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q;
    if ((vlSelf->__PVT__cnt_set[3U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & ((vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                                    >> 0x19U)))));
    } else if ((vlSelf->__PVT__cnt_dec[3U] >> 0x1fU)) {
        vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->__PVT__gen_cnt__BRA__127__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__2(Vtestharness_axi_burst_splitter_counters__pi153* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestharness_axi_burst_splitter_counters__pi153___act_comb__TOP__testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__2\n"); );
    // Body
    vlSelf->__PVT__i_idq__DOT__head_tail_d[0U] = vlSelf->__PVT__i_idq__DOT__head_tail_q[0U];
    vlSelf->__PVT__i_idq__DOT__head_tail_d[1U] = vlSelf->__PVT__i_idq__DOT__head_tail_q[1U];
    vlSelf->__PVT__i_idq__DOT__head_tail_d[2U] = vlSelf->__PVT__i_idq__DOT__head_tail_q[2U];
    vlSelf->__PVT__i_idq__DOT__head_tail_d[3U] = vlSelf->__PVT__i_idq__DOT__head_tail_q[3U];
    vlSelf->__PVT__i_idq__DOT__head_tail_d[4U] = vlSelf->__PVT__i_idq__DOT__head_tail_q[4U];
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3bU)) {
        vlSelf->__PVT__i_idq__DOT__linked_data_d[__Vilp1] 
            = vlSelf->__PVT__i_idq__DOT__linked_data_q[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelf->__PVT__i_idq__DOT__oup_data_popped = 0U;
    vlSelf->__PVT__i_idq__DOT__oup_ht_popped = 0U;
    if (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req) {
        if ((0U != (IData)(vlSelf->__PVT__i_idq__DOT__idx_matches_out_id))) {
            if (((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req) 
                 & ((IData)(vlSelf->cnt_gnt_o) & ((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_dec) 
                                                  & (0U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->__PVT__read_len))))))) {
                vlSelf->i_idq__DOT____Vlvbound_h0d5a79a2__0 = 0U;
                vlSelf->__PVT__i_idq__DOT__oup_data_popped = 1U;
                if ((((0x8fU >= ((IData)(8U) + (0xffU 
                                                & ((IData)(0x12U) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                       ? (0x7fU & (((0U == (0x1fU & 
                                            ((IData)(8U) 
                                             + (0xffU 
                                                & ((IData)(0x12U) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                     ? 0U : (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                             (((IData)(0xeU) 
                                               + (0xffU 
                                                  & ((IData)(0x12U) 
                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                   | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                      (((IData)(8U) 
                                        + (0xffU & 
                                           ((IData)(0x12U) 
                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x12U) 
                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                       : 0U) == ((0x8fU >= ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x12U) 
                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                  ? (0x7fU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x12U) 
                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                ? 0U
                                                : (
                                                   vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x12U) 
                                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                              | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                 (((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x12U) 
                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                  : 0U))) {
                    vlSelf->i_idq__DOT____Vlvbound_h884186bc__0 = 1U;
                    vlSelf->__PVT__i_idq__DOT__oup_ht_popped = 1U;
                    if ((0x8fU >= (0xffU & ((IData)(0x12U) 
                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))) {
                        VL_ASSIGNSEL_WI(144,18,(0xffU 
                                                & ((IData)(0x12U) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h884186bc__0);
                    }
                } else {
                    vlSelf->i_idq__DOT____Vlvbound_h3bc4ede4__0 
                        = ((0x77fU >= ((IData)(1U) 
                                       + (0x7ffU & 
                                          ((IData)(0xfU) 
                                           * ((0x8fU 
                                               >= ((IData)(8U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x12U) 
                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                               ? (0x7fU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                       (((IData)(0xeU) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x12U) 
                                                             * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                     | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                        (((IData)(8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x12U) 
                                                              * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                               : 0U)))))
                            ? (0x7fU & (((0U == (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xfU) 
                                                        * 
                                                        ((0x8fU 
                                                          >= 
                                                          ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                          ? 
                                                         (0x7fU 
                                                          & (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                               (((IData)(0xeU) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                             | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                (((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                          : 0U))))))
                                          ? 0U : (vlSelf->__PVT__i_idq__DOT__linked_data_q[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xfU) 
                                                        * 
                                                        ((0x8fU 
                                                          >= 
                                                          ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                          ? 
                                                         (0x7fU 
                                                          & (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x12U) 
                                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                               ? 0U
                                                               : 
                                                              (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                               (((IData)(0xeU) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                             | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                (((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(8U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                          : 0U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xfU) 
                                                           * 
                                                           ((0x8fU 
                                                             >= 
                                                             ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                             ? 
                                                            (0x7fU 
                                                             & (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(8U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x12U) 
                                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                  (((IData)(0xeU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x12U) 
                                                                        * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x12U) 
                                                                           * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                                | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                   (((IData)(8U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x12U) 
                                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                    >> 5U)] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(8U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x12U) 
                                                                           * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                             : 0U)))))))) 
                                        | (vlSelf->__PVT__i_idq__DOT__linked_data_q[
                                           (((IData)(1U) 
                                             + (0x7ffU 
                                                & ((IData)(0xfU) 
                                                   * 
                                                   ((0x8fU 
                                                     >= 
                                                     ((IData)(8U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x12U) 
                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                     ? 
                                                    (0x7fU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(0xeU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                        | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                           (((IData)(8U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                            >> 5U)] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                     : 0U)))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xfU) 
                                                      * 
                                                      ((0x8fU 
                                                        >= 
                                                        ((IData)(8U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x12U) 
                                                             * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                        ? 
                                                       (0x7fU 
                                                        & (((0U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(8U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x12U) 
                                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                             ? 0U
                                                             : 
                                                            (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                             (((IData)(0xeU) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                              >> 5U)] 
                                                             << 
                                                             ((IData)(0x20U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                           | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                              (((IData)(8U) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x12U) 
                                                                    * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x12U) 
                                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                        : 0U))))))))
                            : 0U);
                    if ((0x8fU >= ((IData)(8U) + (0xffU 
                                                  & ((IData)(0x12U) 
                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))) {
                        VL_ASSIGNSEL_WI(144,7,((IData)(8U) 
                                               + (0xffU 
                                                  & ((IData)(0x12U) 
                                                     * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h3bc4ede4__0);
                    }
                }
                vlSelf->i_idq__DOT____Vlvbound_hce29e8bc__0 = 1U;
                if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                          * ((0x8fU 
                                              >= ((IData)(8U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x12U) 
                                                      * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                              ? (0x7fU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x12U) 
                                                              * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                      (((IData)(0xeU) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x12U) 
                                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                    | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                       (((IData)(8U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x12U) 
                                                             * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                              : 0U))))) {
                    VL_ASSIGNSEL_WI(1920,15,(0x7ffU 
                                             & ((IData)(0xfU) 
                                                * (
                                                   (0x8fU 
                                                    >= 
                                                    ((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(8U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(0xeU) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                    : 0U))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_h0d5a79a2__0);
                    vlSelf->__PVT__i_idq__DOT__linked_data_d[(0x3fU 
                                                              & (((IData)(0xfU) 
                                                                  * 
                                                                  ((0x8fU 
                                                                    >= 
                                                                    ((IData)(8U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x12U) 
                                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                                    ? 
                                                                   (0x7fU 
                                                                    & (((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(8U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x12U) 
                                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                         (((IData)(0xeU) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x12U) 
                                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                          >> 5U)] 
                                                                         << 
                                                                         ((IData)(0x20U) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((IData)(8U) 
                                                                              + 
                                                                              (0xffU 
                                                                               & ((IData)(0x12U) 
                                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                                          (((IData)(8U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x12U) 
                                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & ((IData)(8U) 
                                                                              + 
                                                                              (0xffU 
                                                                               & ((IData)(0x12U) 
                                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                                    : 0U)) 
                                                                 >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xfU) 
                                                   * 
                                                   ((0x8fU 
                                                     >= 
                                                     ((IData)(8U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x12U) 
                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                                     ? 
                                                    (0x7fU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(0xeU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                        | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                           (((IData)(8U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                            >> 5U)] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0xffU 
                                                                & ((IData)(0x12U) 
                                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                                     : 0U))))) 
                            & vlSelf->__PVT__i_idq__DOT__linked_data_d[
                            (0x3fU & (((IData)(0xfU) 
                                       * ((0x8fU >= 
                                           ((IData)(8U) 
                                            + (0xffU 
                                               & ((IData)(0x12U) 
                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                           ? (0x7fU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(8U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x12U) 
                                                           * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                   (((IData)(0xeU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x12U) 
                                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                 | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                    (((IData)(8U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x12U) 
                                                          * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                     >> 5U)] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x12U) 
                                                            * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                           : 0U)) >> 5U))]) 
                           | ((IData)(vlSelf->i_idq__DOT____Vlvbound_hce29e8bc__0) 
                              << (0x1fU & ((IData)(0xfU) 
                                           * ((0x8fU 
                                               >= ((IData)(8U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x12U) 
                                                       * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))
                                               ? (0x7fU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(8U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                       (((IData)(0xeU) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x12U) 
                                                             * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))))))) 
                                                     | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                        (((IData)(8U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x12U) 
                                                              * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx)))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(8U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))))))
                                               : 0U)))));
                }
            }
        }
    }
    if (((IData)(vlSelf->__PVT__idq_inp_req) & (IData)(vlSelf->__PVT__idq_inp_gnt))) {
        if (((IData)(vlSelf->__PVT__i_idq__DOT__oup_ht_popped) 
             & ((IData)(vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id) 
                == (7U & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                          >> 0x11U))))) {
            vlSelf->i_idq__DOT____Vlvbound_h884186bc__1 
                = ((0x38000U & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                >> 2U)) | (((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                            << 8U) 
                                           | ((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                              << 1U)));
            vlSelf->i_idq__DOT____Vlvbound_hb307a87e__0 
                = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 8U));
            if ((0x8fU >= (0xffU & ((IData)(0x12U) 
                                    * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))) {
                VL_ASSIGNSEL_WI(144,18,(0xffU & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h884186bc__1);
            }
            if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                      * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))))) {
                VL_ASSIGNSEL_WI(1920,15,(0x7ffU & ((IData)(0xfU) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_hb307a87e__0);
            }
        } else if (((IData)(vlSelf->__VdfgRegularize_h0f577513_6_0) 
                    | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_1) 
                       | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_2) 
                          | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_3) 
                             | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_4) 
                                | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_5) 
                                   | ((IData)(vlSelf->__VdfgRegularize_h0f577513_6_6) 
                                      | ((IData)(vlSelf->__PVT__i_idq__DOT__match_in_id_valid) 
                                         & ((~ vlSelf->__PVT__i_idq__DOT__head_tail_q[0U]) 
                                            & ((7U 
                                                & (vlSelf->__PVT__i_idq__DOT__head_tail_q[0U] 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->__PVT__i_idq__DOT__match_in_id)))))))))))) {
            if (vlSelf->__PVT__i_idq__DOT__oup_data_popped) {
                vlSelf->i_idq__DOT____Vlvbound_h437463fb__0 
                    = vlSelf->__PVT__i_idq__DOT__oup_data_free_idx;
                vlSelf->i_idq__DOT____Vlvbound_h75944780__0 
                    = vlSelf->__PVT__i_idq__DOT__oup_data_free_idx;
                if ((0x77fU >= ((IData)(1U) + (0x7ffU 
                                               & ((IData)(0xfU) 
                                                  * 
                                                  ((0x8fU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(1U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))))
                                                    : 0U)))))) {
                    VL_ASSIGNSEL_WI(1920,7,((IData)(1U) 
                                            + (0x7ffU 
                                               & ((IData)(0xfU) 
                                                  * 
                                                  ((0x8fU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(1U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))))
                                                    : 0U)))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_h437463fb__0);
                }
                if ((0x8fU >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))) {
                    VL_ASSIGNSEL_WI(144,7,((IData)(1U) 
                                           + (0xffU 
                                              & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h75944780__0);
                }
                vlSelf->i_idq__DOT____Vlvbound_hb307a87e__3 
                    = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                  << 8U));
                if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                          * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))))) {
                    VL_ASSIGNSEL_WI(1920,15,(0x7ffU 
                                             & ((IData)(0xfU) 
                                                * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_hb307a87e__3);
                }
            } else {
                vlSelf->i_idq__DOT____Vlvbound_h437463fb__1 
                    = (0x7fU & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]);
                vlSelf->i_idq__DOT____Vlvbound_h75944780__1 
                    = (0x7fU & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]);
                if ((0x77fU >= ((IData)(1U) + (0x7ffU 
                                               & ((IData)(0xfU) 
                                                  * 
                                                  ((0x8fU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(1U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))))
                                                    : 0U)))))) {
                    VL_ASSIGNSEL_WI(1920,7,((IData)(1U) 
                                            + (0x7ffU 
                                               & ((IData)(0xfU) 
                                                  * 
                                                  ((0x8fU 
                                                    >= 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x12U) 
                                                         * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))
                                                    ? 
                                                   (0x7fU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x12U) 
                                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x12U) 
                                                               * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))))) 
                                                       | (vlSelf->__PVT__i_idq__DOT__head_tail_q[
                                                          (((IData)(1U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x12U) 
                                                                * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))) 
                                                           >> 5U)] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x12U) 
                                                                  * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx))))))))
                                                    : 0U)))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_h437463fb__1);
                }
                if ((0x8fU >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))))) {
                    VL_ASSIGNSEL_WI(144,7,((IData)(1U) 
                                           + (0xffU 
                                              & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_in_idx)))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h75944780__1);
                }
                vlSelf->i_idq__DOT____Vlvbound_h672cdae7__1 
                    = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                  << 8U));
                if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                          * (0x7fU 
                                             & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) {
                    VL_ASSIGNSEL_WI(1920,15,(0x7ffU 
                                             & ((IData)(0xfU) 
                                                * (0x7fU 
                                                   & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_h672cdae7__1);
                }
            }
        } else if (vlSelf->__PVT__i_idq__DOT__oup_ht_popped) {
            vlSelf->i_idq__DOT____Vlvbound_h884186bc__2 
                = ((0x38000U & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                >> 2U)) | (((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                            << 8U) 
                                           | ((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                              << 1U)));
            vlSelf->i_idq__DOT____Vlvbound_hb307a87e__1 
                = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 8U));
            if ((0x8fU >= (0xffU & ((IData)(0x12U) 
                                    * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))))) {
                VL_ASSIGNSEL_WI(144,18,(0xffU & ((IData)(0x12U) 
                                                 * (IData)(vlSelf->__PVT__i_idq__DOT__match_out_idx))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h884186bc__2);
            }
            if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                      * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))))) {
                VL_ASSIGNSEL_WI(1920,15,(0x7ffU & ((IData)(0xfU) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_hb307a87e__1);
            }
        } else if (vlSelf->__PVT__i_idq__DOT__oup_data_popped) {
            vlSelf->i_idq__DOT____Vlvbound_h82fb2864__0 
                = ((0x38000U & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                >> 2U)) | (((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                            << 8U) 
                                           | ((IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx) 
                                              << 1U)));
            vlSelf->i_idq__DOT____Vlvbound_hb307a87e__2 
                = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 8U));
            if ((0x8fU >= (0xffU & ((IData)(0x12U) 
                                    * (7U & vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes))))) {
                VL_ASSIGNSEL_WI(144,18,(0xffU & ((IData)(0x12U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h82fb2864__0);
            }
            if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                      * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))))) {
                VL_ASSIGNSEL_WI(1920,15,(0x7ffU & ((IData)(0xfU) 
                                                   * (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_free_idx))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_hb307a87e__2);
            }
        } else {
            vlSelf->i_idq__DOT____Vlvbound_h82fb2864__1 
                = ((0x38000U & (vlSymsp->TOP.testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                                >> 2U)) | ((0x7f00U 
                                            & (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                               << 8U)) 
                                           | (0xfeU 
                                              & (vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 << 1U))));
            vlSelf->i_idq__DOT____Vlvbound_h672cdae7__0 
                = (0x7f00U & (vlSelf->__PVT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U] 
                              << 8U));
            if ((0x8fU >= (0xffU & ((IData)(0x12U) 
                                    * (7U & vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes))))) {
                VL_ASSIGNSEL_WI(144,18,(0xffU & ((IData)(0x12U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->__PVT__i_idq__DOT__i_ht_free_lzc__DOT__gen_lzc__DOT__index_nodes))), vlSelf->__PVT__i_idq__DOT__head_tail_d, vlSelf->i_idq__DOT____Vlvbound_h82fb2864__1);
            }
            if ((0x77fU >= (0x7ffU & ((IData)(0xfU) 
                                      * (0x7fU & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) {
                VL_ASSIGNSEL_WI(1920,15,(0x7ffU & ((IData)(0xfU) 
                                                   * 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__i_idq__DOT__i_ld_free_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))), vlSelf->__PVT__i_idq__DOT__linked_data_d, vlSelf->i_idq__DOT____Vlvbound_h672cdae7__0);
            }
        }
    }
    vlSelf->__PVT__idq_inp_gnt = ((0U != (((vlSelf->__PVT__i_idq__DOT__linked_data_free[0U] 
                                            | vlSelf->__PVT__i_idq__DOT__linked_data_free[1U]) 
                                           | vlSelf->__PVT__i_idq__DOT__linked_data_free[2U]) 
                                          | vlSelf->__PVT__i_idq__DOT__linked_data_free[3U])) 
                                  | (IData)(vlSelf->__PVT__i_idq__DOT__oup_data_popped));
}
