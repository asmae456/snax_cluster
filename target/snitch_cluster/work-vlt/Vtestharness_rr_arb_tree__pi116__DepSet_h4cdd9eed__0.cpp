// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rr_arb_tree__pi116.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U])))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__1\n"); );
    // Init
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound_ha5fadf90__0 = 0;
    CData/*0:0*/ gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0;
    gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_ha5fadf90__0 = 0;
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__req_d = ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
                                               ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q
                                               : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__req_i);
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__5\n"); );
    // Init
    VlWide<86>/*2751:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<64>/*2047:0*/ __Vtemp_146;
    VlWide<66>/*2111:0*/ __Vtemp_147;
    VlWide<69>/*2207:0*/ __Vtemp_148;
    // Body
    __Vtemp_4[0U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x32U] 
                      << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x31U] 
                                   >> 0x10U));
    __Vtemp_4[1U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x33U] 
                      << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x32U] 
                                   >> 0x10U));
    __Vtemp_4[2U] = (0xffffffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x34U] 
                                   << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x33U] 
                                                >> 0x10U)));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel) {
        __Vtemp_9[0U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2fU] 
                          << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2eU] 
                                    >> 0x18U));
        __Vtemp_9[1U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x30U] 
                          << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2fU] 
                                    >> 0x18U));
        __Vtemp_9[2U] = (0xffffffU & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x31U] 
                                       << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x30U] 
                                                 >> 0x18U)));
    } else {
        __Vtemp_9[0U] = vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2cU];
        __Vtemp_9[1U] = vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2dU];
        __Vtemp_9[2U] = (0xffffffU & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2eU]);
    }
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp_146[0U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[6U] 
                            << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[5U] 
                                         >> 0x10U));
        __Vtemp_146[1U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[7U] 
                            << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[6U] 
                                         >> 0x10U));
    } else {
        __Vtemp_146[0U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[3U] 
                            << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[2U] 
                                      >> 0x18U));
        __Vtemp_146[1U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[4U] 
                            << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[3U] 
                                      >> 0x18U));
    }
    __Vtemp_146[2U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xbU]
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[9U] 
                              << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[8U] 
                                           >> 8U))) 
                        << 0x18U) | (0xffffffU & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[8U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[7U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[5U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[4U] 
                                                      >> 0x18U)))));
    __Vtemp_146[3U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xbU]
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[9U] 
                              << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[8U] 
                                           >> 8U))) 
                        >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                    ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xcU]
                                    : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xaU] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[9U] 
                                        >> 8U))) << 0x18U));
    __Vtemp_146[4U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xcU]
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xaU] 
                              << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[9U] 
                                           >> 8U))) 
                        >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                    ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xdU]
                                    : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xbU] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xaU] 
                                        >> 8U))) << 0x18U));
    __Vtemp_146[5U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x11U] 
                              << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x10U] 
                                           >> 0x10U))
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xeU] 
                              << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xdU] 
                                        >> 0x18U))) 
                        << 0x10U) | (0xffffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xdU]
                                                  : 
                                                 ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                     >> 8U))) 
                                                >> 8U)));
    __Vtemp_146[6U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x11U] 
                              << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x10U] 
                                           >> 0x10U))
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xeU] 
                              << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xdU] 
                                        >> 0x18U))) 
                        >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                       ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x12U] 
                                           << 0x10U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x11U] 
                                             >> 0x10U))
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xfU] 
                                           << 8U) | 
                                          (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xeU] 
                                           >> 0x18U))) 
                                     << 0x10U));
    __Vtemp_146[7U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x12U] 
                              << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x11U] 
                                           >> 0x10U))
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xfU] 
                              << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xeU] 
                                        >> 0x18U))) 
                        >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                       ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x13U] 
                                           << 0x10U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x12U] 
                                             >> 0x10U))
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x10U] 
                                           << 8U) | 
                                          (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xfU] 
                                           >> 0x18U))) 
                                     << 0x10U));
    __Vtemp_146[8U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x16U]
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x14U] 
                              << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x13U] 
                                           >> 8U))) 
                        << 8U) | (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   >> 0x10U))
                                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                 << 8U) 
                                                | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   >> 0x18U))) 
                                           >> 0x10U)));
    __Vtemp_146[9U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x16U]
                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x14U] 
                              << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x13U] 
                                           >> 8U))) 
                        >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                       ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x17U]
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x15U] 
                                           << 0x18U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x14U] 
                                             >> 8U))) 
                                     << 8U));
    __Vtemp_146[0xaU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                            ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x17U]
                            : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x15U] 
                                << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x14U] 
                                             >> 8U))) 
                          >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x18U]
                                         : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x16U] 
                                             << 0x18U) 
                                            | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x15U] 
                                               >> 8U))) 
                                       << 8U));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
        __Vtemp_146[0xbU] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1cU] 
                              << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1bU] 
                                           >> 0x10U));
        __Vtemp_146[0xcU] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1dU] 
                              << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1cU] 
                                           >> 0x10U));
    } else {
        __Vtemp_146[0xbU] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x19U] 
                              << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x18U] 
                                        >> 0x18U));
        __Vtemp_146[0xcU] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1aU] 
                              << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x19U] 
                                        >> 0x18U));
    }
    __Vtemp_146[0xdU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                            ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x21U]
                            : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1fU] 
                                << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1eU] 
                                             >> 8U))) 
                          << 0x18U) | (0xffffffU & 
                                       ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1eU] 
                                             << 0x10U) 
                                            | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1dU] 
                                               >> 0x10U))
                                         : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1bU] 
                                             << 8U) 
                                            | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1aU] 
                                               >> 0x18U)))));
    __Vtemp_146[0xeU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                            ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x21U]
                            : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1fU] 
                                << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1eU] 
                                             >> 8U))) 
                          >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                      ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x22U]
                                      : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x20U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1fU] 
                                            >> 8U))) 
                                    << 0x18U));
    __Vtemp_146[0xfU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                            ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x22U]
                            : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x20U] 
                                << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x1fU] 
                                             >> 8U))) 
                          >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                      ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x23U]
                                      : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x21U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x20U] 
                                            >> 8U))) 
                                    << 0x18U));
    __Vtemp_146[0x10U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x27U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x26U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x24U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x23U] 
                                           >> 0x18U))) 
                           << 0x10U) | (0xffffU & (
                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                     ? 
                                                    vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x23U]
                                                     : 
                                                    ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x21U] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x20U] 
                                                        >> 8U))) 
                                                   >> 8U)));
    __Vtemp_146[0x11U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x27U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x26U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x24U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x23U] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x28U] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x27U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x25U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x24U] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x12U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x28U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x27U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x25U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x24U] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x29U] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x28U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x26U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x25U] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x13U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2cU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2aU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x29U] 
                                              >> 8U))) 
                           << 8U) | (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                ? (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x29U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x28U] 
                                                      >> 0x10U))
                                                : (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x26U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x25U] 
                                                      >> 0x18U))) 
                                              >> 0x10U)));
    __Vtemp_146[0x14U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2cU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2aU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x29U] 
                                              >> 8U))) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2dU]
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2bU] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2aU] 
                                                >> 8U))) 
                                        << 8U));
    __Vtemp_146[0x15U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2dU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2bU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2aU] 
                                              >> 8U))) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2eU]
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2cU] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2bU] 
                                                >> 8U))) 
                                        << 8U));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
        __Vtemp_146[0x16U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x32U] 
                               << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x31U] 
                                            >> 0x10U));
        __Vtemp_146[0x17U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x33U] 
                               << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x32U] 
                                            >> 0x10U));
    } else {
        __Vtemp_146[0x16U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2fU] 
                               << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2eU] 
                                         >> 0x18U));
        __Vtemp_146[0x17U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x30U] 
                               << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x2fU] 
                                         >> 0x18U));
    }
    __Vtemp_146[0x18U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x37U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x35U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x34U] 
                                              >> 8U))) 
                           << 0x18U) | (0xffffffU & 
                                        ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x34U] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x33U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x31U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x30U] 
                                                >> 0x18U)))));
    __Vtemp_146[0x19U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x37U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x35U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x34U] 
                                              >> 8U))) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                       ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x38U]
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x36U] 
                                           << 0x18U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x35U] 
                                             >> 8U))) 
                                     << 0x18U));
    __Vtemp_146[0x1aU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x38U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x36U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x35U] 
                                              >> 8U))) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                       ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x39U]
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x37U] 
                                           << 0x18U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x36U] 
                                             >> 8U))) 
                                     << 0x18U));
    __Vtemp_146[0x1bU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3dU] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3cU] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3aU] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x39U] 
                                           >> 0x18U))) 
                           << 0x10U) | (0xffffU & (
                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                     ? 
                                                    vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x39U]
                                                     : 
                                                    ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x37U] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x36U] 
                                                        >> 8U))) 
                                                   >> 8U)));
    __Vtemp_146[0x1cU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3dU] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3cU] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3aU] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x39U] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3eU] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3dU] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3bU] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3aU] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x1dU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3eU] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3dU] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3bU] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3aU] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3fU] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3eU] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3cU] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3bU] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x1eU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x42U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x40U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3fU] 
                                              >> 8U))) 
                           << 8U) | (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                ? (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3fU] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3eU] 
                                                      >> 0x10U))
                                                : (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3cU] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3bU] 
                                                      >> 0x18U))) 
                                              >> 0x10U)));
    __Vtemp_146[0x1fU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x42U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x40U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x3fU] 
                                              >> 8U))) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x43U]
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x41U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x40U] 
                                                >> 8U))) 
                                        << 8U));
    __Vtemp_146[0x20U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x43U]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x41U] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x40U] 
                                              >> 8U))) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                          ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x44U]
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x42U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x41U] 
                                                >> 8U))) 
                                        << 8U));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel) {
        __Vtemp_146[0x21U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x48U] 
                               << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x47U] 
                                            >> 0x10U));
        __Vtemp_146[0x22U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x49U] 
                               << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x48U] 
                                            >> 0x10U));
    } else {
        __Vtemp_146[0x21U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x45U] 
                               << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x44U] 
                                         >> 0x18U));
        __Vtemp_146[0x22U] = ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x46U] 
                               << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x45U] 
                                         >> 0x18U));
    }
    __Vtemp_146[0x23U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4dU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4bU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4aU] 
                                              >> 8U))) 
                           << 0x18U) | (0xffffffU & 
                                        ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4aU] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x49U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x47U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x46U] 
                                                >> 0x18U)))));
    __Vtemp_146[0x24U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4dU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4bU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4aU] 
                                              >> 8U))) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                       ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4eU]
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4cU] 
                                           << 0x18U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4bU] 
                                             >> 8U))) 
                                     << 0x18U));
    __Vtemp_146[0x25U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4eU]
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4cU] 
                                 << 0x18U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4bU] 
                                              >> 8U))) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                       ? vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4fU]
                                       : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4dU] 
                                           << 0x18U) 
                                          | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4cU] 
                                             >> 8U))) 
                                     << 0x18U));
    __Vtemp_146[0x26U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x53U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x52U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x50U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4fU] 
                                           >> 0x18U))) 
                           << 0x10U) | (0xffffU & (
                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                                     ? 
                                                    vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4fU]
                                                     : 
                                                    ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4dU] 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4cU] 
                                                        >> 8U))) 
                                                   >> 8U)));
    __Vtemp_146[0x27U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x53U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x52U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x50U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x4fU] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x54U] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x53U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x51U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x50U] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x28U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x54U] 
                                 << 0x10U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x53U] 
                                              >> 0x10U))
                             : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x51U] 
                                 << 8U) | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x50U] 
                                           >> 0x18U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                          ? ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x55U] 
                                              << 0x10U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x54U] 
                                                >> 0x10U))
                                          : ((vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x52U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x51U] 
                                                >> 0x18U))) 
                                        << 0x10U));
    __Vtemp_146[0x29U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[3U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[2U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0U]) 
                           << 8U) | (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                                ? (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x55U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x54U] 
                                                      >> 0x10U))
                                                : (
                                                   (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x52U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__data_nodes[0x51U] 
                                                      >> 0x18U))) 
                                              >> 0x10U)));
    __Vtemp_146[0x2aU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[3U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[2U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0U]) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[4U] 
                                              << 8U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[3U] 
                                                >> 0x18U))
                                          : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[1U]) 
                                        << 8U));
    __Vtemp_146[0x2bU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[4U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[3U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[1U]) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[5U] 
                                              << 8U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[4U] 
                                                >> 0x18U))
                                          : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[2U]) 
                                        << 8U));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
        __Vtemp_146[0x2cU] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[9U] 
                               << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[8U] 
                                            >> 8U));
        __Vtemp_146[0x2dU] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xaU] 
                               << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[9U] 
                                            >> 8U));
    } else {
        __Vtemp_146[0x2cU] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[6U] 
                               << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[5U] 
                                            >> 0x10U));
        __Vtemp_146[0x2dU] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[7U] 
                               << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[6U] 
                                            >> 0x10U));
    }
    __Vtemp_146[0x2eU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xeU] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xdU] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xbU]) 
                           << 0x18U) | (0xffffffU & 
                                        ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xbU] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xaU] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[8U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[7U] 
                                                >> 0x10U)))));
    __Vtemp_146[0x2fU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xeU] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xdU] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xbU]) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xfU] 
                                           << 8U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xeU] 
                                           >> 0x18U))
                                       : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xcU]) 
                                     << 0x18U));
    __Vtemp_146[0x30U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xfU] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xeU] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xcU]) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x10U] 
                                           << 8U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xfU] 
                                           >> 0x18U))
                                       : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xdU]) 
                                     << 0x18U));
    __Vtemp_146[0x31U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x14U] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x13U] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x11U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x10U] 
                                              >> 0x10U))) 
                           << 0x10U) | (0xffffU & (
                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                     ? 
                                                    ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x10U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xfU] 
                                                        >> 0x18U))
                                                     : 
                                                    vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0xdU]) 
                                                   >> 8U)));
    __Vtemp_146[0x32U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x14U] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x13U] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x11U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x10U] 
                                              >> 0x10U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x15U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x14U] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x12U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x11U] 
                                                >> 0x10U))) 
                                        << 0x10U));
    __Vtemp_146[0x33U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x15U] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x14U] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x12U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x11U] 
                                              >> 0x10U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x16U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x15U] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x13U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x12U] 
                                                >> 0x10U))) 
                                        << 0x10U));
    __Vtemp_146[0x34U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x19U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x18U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x16U]) 
                           << 8U) | (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                ? (
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x16U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x15U] 
                                                      >> 8U))
                                                : (
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x13U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x12U] 
                                                      >> 0x10U))) 
                                              >> 0x10U)));
    __Vtemp_146[0x35U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x19U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x18U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x16U]) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1aU] 
                                              << 8U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x19U] 
                                                >> 0x18U))
                                          : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x17U]) 
                                        << 8U));
    __Vtemp_146[0x36U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1aU] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x19U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x17U]) 
                           >> 0x18U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1bU] 
                                              << 8U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1aU] 
                                                >> 0x18U))
                                          : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x18U]) 
                                        << 8U));
    if (vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel) {
        __Vtemp_146[0x37U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1fU] 
                               << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1eU] 
                                            >> 8U));
        __Vtemp_146[0x38U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x20U] 
                               << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1fU] 
                                            >> 8U));
    } else {
        __Vtemp_146[0x37U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1cU] 
                               << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1bU] 
                                            >> 0x10U));
        __Vtemp_146[0x38U] = ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1dU] 
                               << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1cU] 
                                            >> 0x10U));
    }
    __Vtemp_146[0x39U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x24U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x23U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x21U]) 
                           << 0x18U) | (0xffffffU & 
                                        ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x21U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x20U] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1eU] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x1dU] 
                                                >> 0x10U)))));
    __Vtemp_146[0x3aU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x24U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x23U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x21U]) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x25U] 
                                           << 8U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x24U] 
                                           >> 0x18U))
                                       : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x22U]) 
                                     << 0x18U));
    __Vtemp_146[0x3bU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x25U] 
                                 << 8U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x24U] 
                                           >> 0x18U))
                             : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x22U]) 
                           >> 8U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                       ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x26U] 
                                           << 8U) | 
                                          (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x25U] 
                                           >> 0x18U))
                                       : vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x23U]) 
                                     << 0x18U));
    __Vtemp_146[0x3cU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2aU] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x29U] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x27U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x26U] 
                                              >> 0x10U))) 
                           << 0x10U) | (0xffffU & (
                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                                     ? 
                                                    ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x26U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x25U] 
                                                        >> 0x18U))
                                                     : 
                                                    vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x23U]) 
                                                   >> 8U)));
    __Vtemp_146[0x3dU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2aU] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x29U] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x27U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x26U] 
                                              >> 0x10U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2bU] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2aU] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x28U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x27U] 
                                                >> 0x10U))) 
                                        << 0x10U));
    __Vtemp_146[0x3eU] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                             ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2bU] 
                                 << 0x18U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2aU] 
                                              >> 8U))
                             : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x28U] 
                                 << 0x10U) | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x27U] 
                                              >> 0x10U))) 
                           >> 0x10U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                          ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2cU] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2bU] 
                                                >> 8U))
                                          : ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x29U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x28U] 
                                                >> 0x10U))) 
                                        << 0x10U));
    __Vtemp_146[0x3fU] = (0xffU & (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                     ? ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2cU] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x2bU] 
                                           >> 8U)) : 
                                    ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x29U] 
                                      << 0x10U) | (
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__in_req[0x28U] 
                                                   >> 0x10U))) 
                                   >> 0x10U));
    VL_CONCAT_WWW(2112,88,2024, __Vtemp_147, __Vtemp_9, __Vtemp_146);
    VL_CONCAT_WWW(2200,88,2112, __Vtemp_148, __Vtemp_4, __Vtemp_147);
    VL_EXTEND_WW(2728,2200, __Vtemp_1, __Vtemp_148);
    VL_ASSIGN_W(2728,vlSelf->__PVT__gen_arbiter__DOT__data_nodes, __Vtemp_1);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                           & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                                                >> 1U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0x11U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0x10U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xfU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xeU)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xdU)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xcU)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 0xbU)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 0xaU)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 9U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 8U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                            >> 1U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                    >> 1U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                                                >> 2U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0x10U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xfU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xeU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xdU)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xcU)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xbU)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 0xaU)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 9U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 8U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 7U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                            >> 2U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[4U] 
                                                    >> 2U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                                                >> 3U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xfU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xeU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xdU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xcU)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xbU)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 0xaU)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 9U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 8U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 7U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 6U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                            >> 3U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[6U] 
                                                    >> 3U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                                                >> 4U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xeU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xdU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xcU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xbU)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 0xaU)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 9U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 8U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 7U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 6U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 5U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                            >> 4U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[8U] 
                                                    >> 4U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                                                >> 5U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xdU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xcU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xbU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 0xaU)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 9U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 8U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 7U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 6U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 5U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 4U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                            >> 5U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xaU] 
                                                    >> 5U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                                                >> 6U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xcU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xbU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 0xaU)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 9U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 8U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 7U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 6U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 5U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 4U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 3U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                            >> 6U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xcU] 
                                                    >> 6U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                                                >> 7U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xbU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 0xaU)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 9U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 8U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 7U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 6U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 5U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 4U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 3U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 2U)) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & ((vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                            >> 7U) & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__0__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0xeU] 
                                                    >> 7U)) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U])))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 0xaU)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 9U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 8U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 7U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 6U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 5U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 4U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 3U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 2U)) 
                                                                          | ((0x200U 
                                                                              & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                << 1U)) 
                                                                             | ((0x100U 
                                                                                & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)))))))))))))))))))));
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

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__10(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__10\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (0x1fU & ((1U & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U] 
                           & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))
                     ? ((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                         ? vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U]
                         : vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U])
                     : (IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___nba_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                   vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[0U]) 
                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__0\n"); );
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
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT____Vcellout__gen_tcdm_super_bank__BRA__1__KET____DOT__i_tcdm_mux__in_narrow_rsp_o[2U] 
                                                                                >> 1U))))))))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__9__KET____DOT__i_rr_arb_tree__1\n"); );
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
                                                      << 9U)) 
                                                  | ((0x20000U 
                                                      & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__17__KET____DOT__i_stream_demux__oup_valid_o 
                                                         << 8U)) 
                                                     | ((0x10000U 
                                                         & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__16__KET____DOT__i_stream_demux__oup_valid_o 
                                                            << 7U)) 
                                                        | ((0x8000U 
                                                            & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__15__KET____DOT__i_stream_demux__oup_valid_o 
                                                               << 6U)) 
                                                           | ((0x4000U 
                                                               & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__14__KET____DOT__i_stream_demux__oup_valid_o 
                                                                  << 5U)) 
                                                              | ((0x2000U 
                                                                  & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__13__KET____DOT__i_stream_demux__oup_valid_o 
                                                                     << 4U)) 
                                                                 | ((0x1000U 
                                                                     & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__12__KET____DOT__i_stream_demux__oup_valid_o 
                                                                        << 3U)) 
                                                                    | ((0x800U 
                                                                        & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__11__KET____DOT__i_stream_demux__oup_valid_o 
                                                                           << 2U)) 
                                                                       | ((0x400U 
                                                                           & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__10__KET____DOT__i_stream_demux__oup_valid_o 
                                                                              << 1U)) 
                                                                          | ((0x200U 
                                                                              & vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__9__KET____DOT__i_stream_demux__oup_valid_o) 
                                                                             | ((0x100U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__8__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__7__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__6__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__5__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__4__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__3__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__2__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__1__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP.testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT____Vcellout__gen_inps__BRA__0__KET____DOT__i_stream_demux__oup_valid_o 
                                                                                >> 9U)))))))))))))))))))));
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
