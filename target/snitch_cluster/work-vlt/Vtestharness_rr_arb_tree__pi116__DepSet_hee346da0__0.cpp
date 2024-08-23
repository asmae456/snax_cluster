// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_rr_arb_tree__pi116.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_sequent__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__0\n"); );
    // Body
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 1U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                 >> 2U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                           >> 4U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 3U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                 >> 4U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                           >> 3U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 5U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                 >> 6U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                           >> 3U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 7U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                 >> 8U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                           >> 2U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 9U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                 >> 0xaU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                             >> 2U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0xbU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                   >> 0xcU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                               >> 2U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0xdU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                   >> 0xeU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                               >> 2U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0xfU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                   >> 0x10U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x11U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x12U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x13U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x14U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x15U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x16U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x17U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x18U) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x19U)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x1aU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x1bU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x1cU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel 
        = (1U & ((~ (vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                     >> 0x1dU)) | ((vlSelf->__PVT__gen_arbiter__DOT__req_nodes 
                                    >> 0x1eU) & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__rr_q) 
                                                 >> 1U))));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__2\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x1000000U & (vlSelf->__PVT__gen_arbiter__DOT__req_d 
                                << 6U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30000U 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                            << 0x17U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000U 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                               << 0x16U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                  << 0x15U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                     << 0x14U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                        << 0x13U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc0U 
                                                                     & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                           << 0x12U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x30U 
                                                                        & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                              << 0x11U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xcU 
                                                                           & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                                 << 0x10U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & vlSelf->__PVT__gen_arbiter__DOT__req_d))) 
                                                                    << 0xfU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                       << 0xeU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                          << 0xdU) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                             << 0xcU) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 0xbU) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__req_nodes)))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__req_nodes = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__3\n"); );
    // Body
    vlSelf->gnt_o = ((0x40000U & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                  >> 6U)) | ((0x3fe0000U 
                                              & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                  >> 6U) 
                                                 & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel) 
                                                    << 0x11U))) 
                                             | ((0x10000U 
                                                 & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel)) 
                                                     << 0x10U) 
                                                    & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                       >> 7U))) 
                                                | ((0x1ff8000U 
                                                    & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                        >> 7U) 
                                                       & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                                                          << 0xfU))) 
                                                   | ((0x4000U 
                                                       & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel)) 
                                                           << 0xeU) 
                                                          & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                             >> 8U))) 
                                                      | ((0xffe000U 
                                                          & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                              >> 8U) 
                                                             & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                                                << 0xdU))) 
                                                         | ((0x1000U 
                                                             & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel)) 
                                                                 << 0xcU) 
                                                                & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                   >> 9U))) 
                                                            | ((0x7ff800U 
                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                    >> 9U) 
                                                                   & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                                      << 0xbU))) 
                                                               | ((0x400U 
                                                                   & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel)) 
                                                                       << 0xaU) 
                                                                      & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                         >> 0xaU))) 
                                                                  | ((0x3ffe00U 
                                                                      & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                          >> 0xaU) 
                                                                         & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                                            << 9U))) 
                                                                     | ((0x100U 
                                                                         & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel)) 
                                                                             << 8U) 
                                                                            & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                               >> 0xbU))) 
                                                                        | ((0x1fff80U 
                                                                            & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xbU) 
                                                                               & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                                                                                << 7U))) 
                                                                           | ((0x40U 
                                                                               & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel)) 
                                                                                << 6U) 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xcU))) 
                                                                              | ((0xfffe0U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                                                << 4U) 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xdU))) 
                                                                                | ((0x7fff8U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xeU))) 
                                                                                | ((0x3fffeU 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__gnt_nodes 
                                                                                >> 0xfU)))))))))))))))))))));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                                ? (2U 
                                                   | (1U 
                                                      & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                         >> 0x18U)))
                                                : (1U 
                                                   & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                      >> 0x13U))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                              ? 
                                                             (2U 
                                                              | (1U 
                                                                 & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))
                                                              : 
                                                             (1U 
                                                              & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                 >> 9U))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                                 ? 
                                                                (2U 
                                                                 | (1U 
                                                                    & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                       >> 4U)))
                                                                 : 
                                                                (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                 >> 0x1fU)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                    ? 
                                                                   (2U 
                                                                    | (1U 
                                                                       & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))
                                                                    : 
                                                                   (1U 
                                                                    & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                       >> 0x15U))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                       ? 
                                                                      (2U 
                                                                       | (1U 
                                                                          & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))
                                                                       : 
                                                                      (1U 
                                                                       & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                          >> 0xbU))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                                          ? 
                                                                         (4U 
                                                                          | (3U 
                                                                             & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                                >> 6U)))
                                                                          : 
                                                                         (3U 
                                                                          & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                             >> 1U))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                                             ? 
                                                                            (4U 
                                                                             | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x1cU)))
                                                                             : 
                                                                            (3U 
                                                                             & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x17U))) 
                                                                           << 0x19U) 
                                                                          | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                                ? 
                                                                               (4U 
                                                                                | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x12U)))
                                                                                : 
                                                                               (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0xdU))) 
                                                                              << 0x14U) 
                                                                             | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 8U)))
                                                                                 : 
                                                                                (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 3U))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                                 ? 
                                                                                (8U 
                                                                                | (7U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))))
                                                                                 : 
                                                                                (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x19U))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x14U)))
                                                                                 : 
                                                                                (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0xaU)))
                                                                                 : 
                                                                                (0xfU 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 5U)))))))))))))))));
    __Vtemp_2[1U] = ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)
                        ? (2U | (1U & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                       >> 2U))) : (1U 
                                                   & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                      >> 0x1dU))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__sel)
                                                               ? 
                                                              (2U 
                                                               | (1U 
                                                                  & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))
                                                               : 
                                                              (1U 
                                                               & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                  >> 0x13U))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                                  ? 
                                                                 (2U 
                                                                  | (1U 
                                                                     & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))
                                                                  : 
                                                                 (1U 
                                                                  & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                     >> 9U))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                                     ? 
                                                                    (2U 
                                                                     | (1U 
                                                                        & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                           >> 4U)))
                                                                     : 
                                                                    (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                     >> 0x1fU)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                        ? 
                                                                       (2U 
                                                                        | (1U 
                                                                           & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))
                                                                        : 
                                                                       (1U 
                                                                        & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                           >> 0x15U))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                           ? 
                                                                          (2U 
                                                                           | (1U 
                                                                              & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))
                                                                           : 
                                                                          (1U 
                                                                           & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                              >> 0xbU))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                                                                              ? 
                                                                             (4U 
                                                                              | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                                >> 6U)))
                                                                              : 
                                                                             (3U 
                                                                              & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
                                                                                >> 1U))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                                                                                 ? 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x1cU)))
                                                                                 : 
                                                                                (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x17U))) 
                                                                               << 0x19U) 
                                                                              | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                                 ? 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0x12U)))
                                                                                 : 
                                                                                (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 0xdU))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 8U)))
                                                                                 : 
                                                                                (3U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                >> 3U))) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                                                 ? 
                                                                                (8U 
                                                                                | (7U 
                                                                                & ((vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))))
                                                                                 : 
                                                                                (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x19U))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0x14U)))
                                                                                 : 
                                                                                (7U 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0xfU))) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                                                 ? 
                                                                                (0x10U 
                                                                                | (0xfU 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 0xaU)))
                                                                                 : 
                                                                                (0xfU 
                                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
                                                                                >> 5U)))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_8[2U] = (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__sel) 
                      << 0x1aU) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__sel) 
                                    << 0x15U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 0xbU) 
                                                    | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__sel)
                                                          ? 
                                                         (2U 
                                                          | (1U 
                                                             & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                                                >> 0x16U)))
                                                          : 
                                                         (1U 
                                                          & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                                             >> 0x11U))) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__sel)
                                                             ? 
                                                            (2U 
                                                             | (1U 
                                                                & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                                                   >> 0xcU)))
                                                             : 
                                                            (1U 
                                                             & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                                                >> 7U))) 
                                                           << 1U) 
                                                          | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__sel)
                                                               ? 
                                                              (2U 
                                                               | (1U 
                                                                  & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] 
                                                                     >> 2U)))
                                                               : 
                                                              (1U 
                                                               & (vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
                                                                  >> 0x1dU))) 
                                                             >> 4U)))))));
    vlSelf->__PVT__gen_arbiter__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__gen_arbiter__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__gen_arbiter__DOT__index_nodes[2U] 
        = (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
            << 0x1fU) | __Vtemp_8[2U]);
    vlSelf->__PVT__gen_arbiter__DOT__index_nodes[3U] 
        = (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__sel) 
            << 0x13U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__sel) 
                          << 0xeU) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__sel) 
                                       << 9U) | (((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__sel) 
                                                  << 4U) 
                                                 | ((IData)(vlSelf->__PVT__gen_arbiter__DOT__gen_levels__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__sel) 
                                                    >> 1U)))));
    vlSelf->__PVT__gen_arbiter__DOT__index_nodes[4U] = 0U;
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__6(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__6\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x1000000U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
                                << 6U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30000U 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                            << 0x17U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000U 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                               << 0x16U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                  << 0x15U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                     << 0x14U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                        << 0x13U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc0U 
                                                                     & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                           << 0x12U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x30U 
                                                                        & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                              << 0x11U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xcU 
                                                                           & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                                 << 0x10U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))) 
                                                                    << 0xfU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                       << 0xeU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                          << 0xdU) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                             << 0xcU) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__7(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__7\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                        ? ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[3U] 
        = (0x12000000U | ((((0x10000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                             ? 0x10U : 0x11U) << 0x13U) 
                          | ((((0x4000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | ((((0x1000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                   ? 0xcU : 0xdU) << 9U) 
                                | ((((0x400U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                      ? 0xaU : 0xbU) 
                                    << 4U) | (((0x100U 
                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)
                                                ? 8U
                                                : 9U) 
                                              >> 1U))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0xf8000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes[4U]);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__8(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                        ? ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[3U] 
        = (0x12000000U | ((((0x10000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                             ? 0x10U : 0x11U) << 0x13U) 
                          | ((((0x4000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | ((((0x1000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                   ? 0xcU : 0xdU) << 9U) 
                                | ((((0x400U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                      ? 0xaU : 0xbU) 
                                    << 4U) | (((0x100U 
                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)
                                                ? 8U
                                                : 9U) 
                                              >> 1U))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0xf8000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes[4U]);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__9(Vtestharness_rr_arb_tree__pi116* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__pi116___act_comb__TOP__testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_yes_snax_tcdm_interconnect__DOT__i_tcdm_interconnect__DOT__gen_xbar__DOT__i_stream_xbar__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__9\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x1000000U & (vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
                                << 6U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30000U 
                                                      & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                            << 0x17U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc000U 
                                                         & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                               << 0x16U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                  << 0x15U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                     << 0x14U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                        << 0x13U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc0U 
                                                                     & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                           << 0x12U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x30U 
                                                                        & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                              << 0x11U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xcU 
                                                                           & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                                 << 0x10U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))) 
                                                                    << 0xfU) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                       << 0xeU) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                          << 0xdU) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                             << 0xcU) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))));
    vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_1);
}
