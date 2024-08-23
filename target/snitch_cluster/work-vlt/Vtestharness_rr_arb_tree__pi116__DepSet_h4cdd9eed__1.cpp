// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rr_arb_tree__pi116.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                            >> 1U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                    >> 1U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                                                >> 2U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 8U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 7U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 6U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 5U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 4U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 3U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 2U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 1U)) 
                                                                       | ((0x400U 
                                                                           & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                            >> 2U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__10__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                    >> 2U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                                                >> 3U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 7U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 6U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 5U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 4U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 3U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 2U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 1U)) 
                                                                    | ((0x800U 
                                                                        & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 1U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                            >> 3U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__11__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                    >> 3U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                                                >> 4U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 6U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 5U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 4U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 3U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 2U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 1U)) 
                                                                 | ((0x1000U 
                                                                     & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 1U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 2U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                            >> 4U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__12__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                    >> 4U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                                                >> 5U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 5U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 4U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 3U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 2U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 1U)) 
                                                              | ((0x2000U 
                                                                  & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 1U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 2U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 3U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                            >> 5U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__13__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                    >> 5U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                                                >> 6U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 4U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 3U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 2U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 1U)) 
                                                           | ((0x4000U 
                                                               & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 1U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 2U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 3U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 4U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                            >> 6U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__14__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                    >> 6U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                                                >> 7U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 3U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 2U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 1U)) 
                                                        | ((0x8000U 
                                                            & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 1U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 2U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 3U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 4U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 5U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                            >> 7U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__15__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                    >> 7U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U])))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 2U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 1U)) 
                                                     | ((0x10000U 
                                                         & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 1U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 2U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 3U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 4U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 5U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 6U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                           & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__16__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                                                >> 1U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      << 1U)) 
                                                  | ((0x20000U 
                                                      & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 1U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 2U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 3U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 4U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 5U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 6U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 7U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x11U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                            >> 1U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__17__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                    >> 1U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                                                >> 2U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 1U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 2U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 3U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 4U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 5U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 6U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 7U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 8U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x12U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                            >> 2U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__18__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                    >> 2U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                                                >> 3U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 1U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 2U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 3U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 4U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 5U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 6U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 7U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 8U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 9U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xaU)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x13U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                            >> 3U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__19__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                    >> 3U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                                                >> 4U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 2U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 3U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 4U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 5U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 6U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 7U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 8U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 9U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 0xaU)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xbU)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x14U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                            >> 4U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__20__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
    } else {
        vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_arbiter__DOT__rr_q = 0U;
    }
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP.rst_ni) && (1U & ((~ 
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                    >> 4U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__21__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__21__KET____DOT__i_rr_arb_tree__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xc0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  << 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                               << 0x1eU))) 
                 | ((0x20000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                     << 0xfU) & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                 << 0x1dU))) 
                    | ((0xf0000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                        << 0xfU) & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                        << 0x1cU))) 
                       | ((0x8000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                          << 0xeU) 
                                         & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                            << 0x1bU))) 
                          | ((0xfc000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                << 0x1aU))) 
                             | ((0x2000000U & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                << 0xdU) 
                                               & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                  << 0x19U))) 
                                | ((0xff000000U & (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xdU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                      << 0x18U))) 
                                   | ((0x800000U & 
                                       ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                         << 0xcU) & 
                                        ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                         << 0x17U))) 
                                      | ((0xffc00000U 
                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                              << 0xcU) 
                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                << 0x16U))) 
                                         | ((0x200000U 
                                             & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                 << 0xbU) 
                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                   << 0x15U))) 
                                            | ((0xfff00000U 
                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                    << 0xbU) 
                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                      << 0x14U))) 
                                               | ((0x80000U 
                                                   & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       << 0xaU) 
                                                      & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                         << 0x13U))) 
                                                  | ((0xfffc0000U 
                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                          << 0xaU) 
                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                            << 0x12U))) 
                                                     | ((0x20000U 
                                                         & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             << 9U) 
                                                            & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                               << 0x11U))) 
                                                        | ((0xffff0000U 
                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                << 9U) 
                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                  << 0x10U))) 
                                                           | ((0x8000U 
                                                               & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   << 8U) 
                                                                  & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                     << 0xfU))) 
                                                              | ((0xffffc000U 
                                                                  & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                      << 8U) 
                                                                     & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                        << 0xeU))) 
                                                                 | ((0x2000U 
                                                                     & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         << 7U) 
                                                                        & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                           << 0xdU))) 
                                                                    | ((0xfffff000U 
                                                                        & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                            << 7U) 
                                                                           & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                              << 0xcU))) 
                                                                       | ((0x800U 
                                                                           & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               << 6U) 
                                                                              & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 0xbU))) 
                                                                          | ((0xfffffc00U 
                                                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 0xaU))) 
                                                                             | ((0x200U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 9U))) 
                                                                                | ((0xffffff00U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 7U))) 
                                                                                | ((0xffffffc0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 5U))) 
                                                                                | ((0xfffffff0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                << 2U) 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 3U))) 
                                                                                | (((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                & (~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__2__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                                                >> 5U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__21__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__21__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : ((0x40000U 
                                                   & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__18__KET____DOT__i_stream_demux__oup_valid_o 
                                                      >> 3U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         >> 4U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            >> 5U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               >> 6U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  >> 7U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     >> 8U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        >> 9U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           >> 0xaU)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              >> 0xbU)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xcU)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 0x15U)))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffc0000U & (((0x12U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | ((0xfffffffeU 
                                                               & (((1U 
                                                                    <= (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                   << 1U) 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                              | (1U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffc0000U & (((0x12U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                            << 0x12U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
           | ((0xfffe0000U & (((0x11U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                               << 0x11U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
              | ((0xffff0000U & (((0x10U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                  << 0x10U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                 | ((0xffff8000U & (((0xfU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                     << 0xfU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                    | ((0xffffc000U & (((0xeU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                        << 0xeU) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                       | ((0xffffe000U & (((0xdU > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 0xdU) 
                                          & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                          | ((0xfffff000U & (((0xcU 
                                               > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 0xcU) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                             | ((0xfffff800U & (((0xbU 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 0xbU) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                | ((0xfffffc00U & (
                                                   ((0xaU 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 0xaU) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                   | ((0xfffffe00U 
                                       & (((9U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                           << 9U) & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                      | ((0xffffff00U 
                                          & (((8U > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                              << 8U) 
                                             & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                         | ((0xffffff80U 
                                             & (((7U 
                                                  > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                 << 7U) 
                                                & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                            | ((0xffffffc0U 
                                                & (((6U 
                                                     > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                    << 6U) 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                               | ((0xffffffe0U 
                                                   & (((5U 
                                                        > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                       << 5U) 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                  | ((0xfffffff0U 
                                                      & (((4U 
                                                           > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                          << 4U) 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                     | ((0xfffffff8U 
                                                         & (((3U 
                                                              > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                             << 3U) 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                        | ((0xfffffffcU 
                                                            & (((2U 
                                                                 > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                << 2U) 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d)) 
                                                           | (0xfffffffeU 
                                                              & (((1U 
                                                                   > (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)) 
                                                                  << 1U) 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__req_d)))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0x10U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                    >> 0x11U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xeU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xfU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xcU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xdU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 0xaU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                   >> 0xbU) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 8U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 9U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 6U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 7U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 4U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 5U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 2U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                 >> 3U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ vlSelf->__PVT__gen_arbiter__DOT__req_d) 
                 | ((vlSelf->__PVT__gen_arbiter__DOT__req_d 
                     >> 1U) & (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q))));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask);
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 1U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 1U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 2U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 2U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 3U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 3U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 4U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 4U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 5U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 5U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 6U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 6U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 7U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 7U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 8U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 8U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 9U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 9U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xaU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xaU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xbU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xbU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xcU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xcU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xdU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xdU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xeU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xeU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0xfU));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0xfU));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x10U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x10U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x11U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x11U));
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 
        = (1U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
                 >> 0x12U));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffU & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0) 
              << 0x12U));
}
