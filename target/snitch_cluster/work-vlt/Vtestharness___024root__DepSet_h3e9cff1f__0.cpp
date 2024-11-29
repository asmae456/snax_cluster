// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness___024root.h"

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__0(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
        = ((0xfffcffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum) 
           | ((0x20000U & (VL_REDXOR_16((0xc00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                           << 0x11U)) | (0x10000U & 
                                         (VL_REDXOR_16(
                                                       (0x300U 
                                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                                          << 0x10U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
        = ((0xfeffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum) 
           | (0x1000000U & (VL_REDXOR_32((0x30000U 
                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                            << 0x18U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfffff0ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | (((IData)((0xc0U == (0xc0U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
               << 0xbU) | (((IData)((0x30U == (0x30U 
                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                            << 0xaU) | (((IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                                         << 9U) | ((IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                                                   << 8U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfffcffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | (((IData)((0xc00U == (0xc00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
               << 0x11U) | ((IData)((0x300U == (0x300U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                            << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfeffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | ((IData)((0x30000U == (0x30000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit_early_is_onehot 
        = (1U & ((~ (IData)((0U != (0x1030f00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry)))) 
                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
                    >> 0x18U)));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__1(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
        = ((0xfffcffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum) 
           | ((0x20000U & (VL_REDXOR_16((0xc00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                           << 0x11U)) | (0x10000U & 
                                         (VL_REDXOR_16(
                                                       (0x300U 
                                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                                          << 0x10U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
        = ((0xfeffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum) 
           | (0x1000000U & (VL_REDXOR_32((0x30000U 
                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum)) 
                            << 0x18U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfffff0ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | (((IData)((0xc0U == (0xc0U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
               << 0xbU) | (((IData)((0x30U == (0x30U 
                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                            << 0xaU) | (((IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                                         << 9U) | ((IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                                                   << 8U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfffcffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | (((IData)((0xc00U == (0xc00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
               << 0x11U) | ((IData)((0x300U == (0x300U 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
                            << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry 
        = ((0xfeffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry) 
           | ((IData)((0x30000U == (0x30000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum))) 
              << 0x18U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit_early_is_onehot 
        = (1U & ((~ (IData)((0U != (0x1030f00U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__carry)))) 
                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__gen_multihit_detection__DOT__i_onehot_hit_early__DOT__gen_onehot__DOT__sum 
                    >> 0x18U)));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__2(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__3(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__4(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                >> 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__5(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__write_fifo_push));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__7(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__7\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_q) 
           & (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                >> 0x16U) == (0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                                        >> 0xbU))) 
              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                 | ((0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                               >> 0xcU)) == (0x3ffU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                                                >> 1U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_ready 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                 | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__8(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__8\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_valid_q) 
           & (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                >> 0x16U) == (0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                                        >> 0xbU))) 
              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                 | ((0x3ffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                               >> 0xcU)) == (0x3ffU 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
                                                >> 1U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_ready 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active)) 
                 | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__trans_active) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__is_4mega_exp 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__tag_q 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__pte_q 
           & (- (QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__gen_dtlb__DOT__i_snitch_l0_tlb_data__DOT__hit))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__9(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__9\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_d));
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_d));
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr = 0ULL;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q)))) {
        if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) {
            vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                = (0x3fffffffffffULL & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                        >> 2U));
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[0U] = 0xffffffffU;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U] = 0x7fffU;
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U] = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q)))) {
        if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_valid) 
               & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q))) 
              & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_free))) 
             & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_free)))) {
            if ((1U & (~ (((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) 
                           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_lock)) 
                          & ((0x3fffffffffffULL & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                   >> 2U)) 
                             == (0x3fffffffffffULL 
                                 & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                    >> 2U))))))) {
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U] 
                    = ((0x7fffU & vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U]) 
                       | ((IData)((1ULL | (0x7ffffffffffeULL 
                                           & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                              >> 1U)))) 
                          << 0xfU));
                vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U] 
                    = (0x3fffffffU & (((IData)((1ULL 
                                                | (0x7ffffffffffeULL 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                                      >> 1U)))) 
                                       >> 0x11U) | 
                                      ((IData)(((1ULL 
                                                 | (0x7ffffffffffeULL 
                                                    & (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
            }
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr = 0ULL;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_state_q)))) {
        if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) {
            vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_push_addr 
                = (0x3fffffffffffULL & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                        >> 2U));
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[0U] = 0xffffffffU;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U] = 0x7fffU;
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U] = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_state_q)))) {
        if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_valid) 
               & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_w_cmd_fifo__DOT__status_cnt_q))) 
              & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_b_status_queue__DOT__linked_data_free))) 
             & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_write_in_flight_queue__DOT__linked_data_free)))) {
            if ((1U & (~ (((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_valid) 
                           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_lock)) 
                          & ((0x3fffffffffffULL & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_ar_addr 
                                                   >> 2U)) 
                             == (0x3fffffffffffULL 
                                 & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                    >> 2U))))))) {
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_req = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U] 
                    = ((0x7fffU & vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[1U]) 
                       | ((IData)((1ULL | (0x7ffffffffffeULL 
                                           & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                              >> 1U)))) 
                          << 0xfU));
                vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__aw_wifq_exists_inp[2U] 
                    = (0x3fffffffU & (((IData)((1ULL 
                                                | (0x7ffffffffffeULL 
                                                   & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                                      >> 1U)))) 
                                       >> 0x11U) | 
                                      ((IData)(((1ULL 
                                                 | (0x7ffffffffffeULL 
                                                    & (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__int_axi_aw_addr 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
            }
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__10(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__10\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt = 0U;
    if (vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req) {
        vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__11(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__11\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_req) {
        vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt = 1U;
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__13(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__13\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0U] 
        = (4U | (((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])) 
                                            >> 1U)))) 
                  << 5U) | (((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])
                              ? 2U : 0U) << 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_resp[1U] 
        = (((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])) 
                                                 >> 1U)))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])) 
                                                    >> 1U))) 
                                  >> 0x20U)) << 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U] 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) 
            << 0x15U) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) 
                          << 0x14U) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__write_fifo_push) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h8aa27137_0_9) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_reflect_id) 
                                            << 0xeU) 
                                           | ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__write_resp_fifo_out)
                                                 ? 2U
                                                 : 0U) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h8aa27137_0_8) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id) 
                                                     << 5U) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U])) 
                                                                  << 0x3fU) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U])) 
                                                                     << 0x1fU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])) 
                                                                       >> 1U))) 
                                                                >> 0x20U)) 
                                                       >> 0x1bU)))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q)))) {
        if ((0x200U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 1U;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q)))) {
        if ((0x40000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 1U;
        }
    }
}

extern const VlWide<17>/*543:0*/ Vtestharness__ConstPool__CONST_h00a543f5_0;

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__14(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__14\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0U] 
        = ((0xfffffff8U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U] 
                           << 2U)) | ((((1U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U])
                                         ? 2U : 0U) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_read_resp__DOT__status_cnt_q))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[1U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[2U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[1U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[3U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[3U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[2U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[3U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[4U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[4U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[3U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[4U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[5U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[5U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[4U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[5U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[6U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[6U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[5U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[6U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[7U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[7U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[6U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[7U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[8U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[8U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[7U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[8U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[9U] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[9U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[8U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[9U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xaU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xaU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[9U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xaU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xbU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xbU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xaU] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xbU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xcU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xcU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xbU] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xcU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xdU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xdU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xcU] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xdU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xeU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xeU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xdU] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xeU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xfU] 
        = (((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xfU] 
                   << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xeU] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xfU] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0x10U] 
        = ((0x180U & ((- (IData)((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__write_fifo_push))) 
                      << 7U)) | ((((1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__mem_q) 
                                          >> (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__read_pointer_q)))
                                    ? 2U : 0U) << 5U) 
                                 | (((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__status_cnt_q)) 
                                     << 4U) | (((2U 
                                                 != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_read__DOT__status_cnt_q)) 
                                                << 3U) 
                                               | ((4U 
                                                   & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0x10U] 
                                                      << 2U)) 
                                                  | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__read_resp_fifo_out[0xfU] 
                                                     >> 0x1eU))))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[1U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[2U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[3U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[3U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[4U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[4U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[5U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[5U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[6U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[6U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[7U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[7U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[8U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[8U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[9U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[9U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xaU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xaU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xbU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xbU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xcU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xcU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xdU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xdU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xeU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xeU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xfU] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0xfU];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0x10U];
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h55367dcd_0_9 
        = ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
              >> 4U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h55367dcd_0_8 
        = ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U]);
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i 
        = ((0x80U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
              >> 3U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i 
        = ((0x80U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
              >> 8U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0U] 
        = (4U | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0U] 
                                 << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
                                           << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[1U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[1U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[1U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[2U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[3U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[2U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[3U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[3U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[3U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[4U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[3U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[4U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[3U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[4U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[4U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[5U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[4U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[5U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[4U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[5U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[5U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[6U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[5U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[6U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[5U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[6U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[6U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[7U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[6U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[7U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[6U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[7U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[7U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[8U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[7U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[8U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[7U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[8U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[8U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[9U] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[8U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[9U] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[8U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[9U] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[9U] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xaU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[9U] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xaU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[9U] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xaU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xaU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xbU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xaU] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xbU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xaU] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xbU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xbU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xcU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xbU] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xcU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xbU] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xcU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xcU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xdU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xcU] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xdU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xcU] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xdU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xdU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xeU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xdU] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xeU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xdU] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xeU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xeU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0xfU] 
        = (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xeU] 
             >> 0x1dU) & ((4U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xfU] 
                                 << 2U)) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xeU] 
                                            >> 0x1eU))) 
           | (0xfffffff8U & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0xfU] 
                              << 3U) & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xfU] 
                                        << 2U))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U] 
        = (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) 
            << 0x13U) | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) 
                          << 0x12U) | ((0x20000U & 
                                        (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
                                         << 0xaU)) 
                                       | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h55367dcd_0_9) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_reflect_id) 
                                              << 0xdU) 
                                             | ((0x1800U 
                                                 & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h55367dcd_0_8) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id) 
                                                       << 5U) 
                                                      | (((Vtestharness__ConstPool__CONST_h00a543f5_0[0xfU] 
                                                           >> 0x1dU) 
                                                          & ((4U 
                                                              & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
                                                                 << 2U)) 
                                                             | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0xfU] 
                                                                >> 0x1eU))) 
                                                         | (0xfffffff8U 
                                                            & ((Vtestharness__ConstPool__CONST_h00a543f5_0[0x10U] 
                                                                << 3U) 
                                                               & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0x10U] 
                                                                  << 2U))))))))))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q)))) {
        if ((0x100U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U])) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 1U;
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q)))) {
        if ((0x10000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0x10U])) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 1U;
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__16(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__16\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0U] 
        = (((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[0U])) 
                                                 >> 1U)))) 
            << 3U) | ((((1U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[0U])
                         ? 2U : 0U) << 1U) | (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_read_resp__DOT__status_cnt_q))));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[1U] 
        = (((IData)((((QData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[0U])) 
                                                 >> 1U)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[0U])) 
                                                    >> 1U))) 
                                  >> 0x20U)) << 3U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[2U] 
        = ((0x180U & ((- (IData)((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__write_fifo_push))) 
                      << 7U)) | ((((1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__mem_q) 
                                          >> (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__read_pointer_q)))
                                    ? 2U : 0U) << 5U) 
                                 | (((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_write_resp__DOT__status_cnt_q)) 
                                     << 4U) | (((2U 
                                                 != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT__i_fifo_read__DOT__status_cnt_q)) 
                                                << 3U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[2U])) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[1U])) 
                                                                << 0x1fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__i_axi_lite_to_reg__DOT____Vcellout__i_fifo_read_resp__data_o[0U])) 
                                                                  >> 1U))) 
                                                           >> 0x20U)) 
                                                  >> 0x1dU)))));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[0U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[1U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_lite_to_reg__DOT__axi_resp[2U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h4a43576e_0_9 
        = ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
              >> 4U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h4a43576e_0_8 
        = ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U]);
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i 
        = ((0x80U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
              >> 3U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i 
        = ((0x80U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
              >> 8U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[0U] 
        = (4U | (0xfffffff8U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
                                << 2U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[1U] 
        = (((4U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                   << 2U)) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[0U] 
                              >> 0x1eU)) | (0xfffffff8U 
                                            & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                                               << 2U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U] 
        = (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_aw_chan__ax_ready_i) 
            << 0x15U) | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) 
                          << 0x14U) | ((0x80000U & 
                                        (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                         << 0xcU)) 
                                       | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h4a43576e_0_9) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_reflect_id) 
                                              << 0xeU) 
                                             | ((0x3000U 
                                                 & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                                    << 7U)) 
                                                | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgRegularize_h4a43576e_0_8) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id) 
                                                       << 5U) 
                                                      | (((4U 
                                                           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                                              << 2U)) 
                                                          | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[1U] 
                                                             >> 0x1eU)) 
                                                         | (0x18U 
                                                            & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__lite_resp[2U] 
                                                               << 2U)))))))))));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_state_q)))) {
        if ((0x200U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__r_cnt_req = 1U;
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__b_state_q)))) {
        if ((0x40000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_resp[2U])) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__w_cnt_req = 1U;
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__24(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__24\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies 
        = ((0xffeU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 0x14U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx) 
                                    << 1U))) | (1U 
                                                & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx)) 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                      >> 0x15U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__25(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__25\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
             & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
            << 1U) | (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U])));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__27(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__27\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies 
        = ((0x1ffeU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                        >> 0x13U) & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx) 
                                     << 1U))) | (1U 
                                                 & ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx)) 
                                                    & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                       >> 0x14U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__28(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__28\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies 
        = (((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
             & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
            << 1U) | (1U & ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
                            & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U])));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__29(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__29\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies 
        = ((0xffeU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 0x14U) & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx) 
                                    << 1U))) | (1U 
                                                & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__b_idx)) 
                                                   & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                                                      >> 0x15U))));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__30(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__30\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies 
        = (((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
             & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
            << 1U) | (1U & ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__r_idx)) 
                            & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U])));
}

VL_INLINE_OPT void Vtestharness___024root___act_sequent__TOP__31(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_sequent__TOP__31\n"); );
    // Init
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_1;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_1 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_2;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_2 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_3;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_3 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_4;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_4 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_5;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_5 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_6;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_6 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_7;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_7 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_1;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_1 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_2;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_2 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_3;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_3 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_4;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_4 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_5;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_5 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_6;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_6 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_7;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_7 = 0;
    VlWide<8>/*255:0*/ __Vtemp_46;
    VlWide<8>/*255:0*/ __Vtemp_50;
    VlWide<8>/*255:0*/ __Vtemp_54;
    VlWide<8>/*255:0*/ __Vtemp_58;
    VlWide<8>/*255:0*/ __Vtemp_62;
    VlWide<8>/*255:0*/ __Vtemp_66;
    VlWide<8>/*255:0*/ __Vtemp_70;
    VlWide<8>/*255:0*/ __Vtemp_74;
    VlWide<8>/*255:0*/ __Vtemp_77;
    VlWide<8>/*255:0*/ __Vtemp_81;
    VlWide<8>/*255:0*/ __Vtemp_85;
    VlWide<8>/*255:0*/ __Vtemp_89;
    VlWide<8>/*255:0*/ __Vtemp_93;
    VlWide<8>/*255:0*/ __Vtemp_97;
    VlWide<8>/*255:0*/ __Vtemp_101;
    VlWide<8>/*255:0*/ __Vtemp_105;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U] 
        = (IData)((QData)((IData)((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U] 
        = (((IData)((QData)((IData)((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q)))) 
            << 4U) | (IData)(((QData)((IData)((0x3fffffU 
                                               & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))) 
                              >> 0x20U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[2U] 
        = ((0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                           << 0x10U)) | ((0xfffff00U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                             >> 4U)) 
                                         | (0xffU & 
                                            (((IData)((QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((QData)((IData)(
                                                                         (0x3fffffU 
                                                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))) 
                                                         >> 0x20U)) 
                                                << 4U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[3U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
            << 0x14U) | ((0x80000U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                                      << 0x12U)) | 
                         ((0x40000U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_arbiter_offload__inp_ready_o) 
                                       << 0x11U)) | 
                          ((0xffff0000U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_dtlb__DOT__i_snitch_l0_tlb_data__valid_o) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_itlb__DOT__i_snitch_l0_tlb_inst__valid_o) 
                                              << 0x10U))) 
                           | (0xfffffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                                            >> 0x10U))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[4U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[5U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[6U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[7U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[8U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[9U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xaU] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
            >> 0xcU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
                        << 0x14U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
        = (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o) 
            << 0xbU) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_cacheable_o) 
                         << 0xaU) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o) 
                                      << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
                                                >> 0xcU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU] 
        = (((IData)((QData)((IData)((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q)))) 
            << 0x1cU) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o) 
                          << 0x1bU) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o) 
                                        >> 0x15U) | 
                                       ((IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o 
                                                 >> 0x20U)) 
                                        << 0xbU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU] 
        = (((IData)((QData)((IData)((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q)))) 
            >> 4U) | ((IData)(((QData)((IData)((0x3fffffU 
                                                & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xeU] 
        = (((0xfffffffU & (IData)((QData)((IData)((0x3fffffU 
                                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))))) 
            | ((IData)(((QData)((IData)((0x3fffffU 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))) 
                        >> 0x20U)) >> 4U)) | (0xf0000000U 
                                              & (IData)((QData)((IData)(
                                                                        (0x3fffffU 
                                                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xfU] 
        = (((0xf000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                           << 0xcU)) | ((0xfffff0U 
                                         & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__pc_q 
                                            >> 8U)) 
                                        | (0xfU & (IData)(
                                                          ((QData)((IData)(
                                                                           (0x3fffffU 
                                                                            & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__satp_q))) 
                                                           >> 0x20U))))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                             << 0xcU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U] 
        = (((0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
                           << 0x10U)) | ((0x8000U & 
                                          ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_demux_offload__oup_valid_o) 
                                           << 0xeU)) 
                                         | ((0x4000U 
                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_stream_arbiter_offload__inp_ready_o) 
                                                << 0xdU)) 
                                            | ((0xffff000U 
                                                & ((0xfffe000U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_dtlb__DOT__i_snitch_l0_tlb_data__valid_o) 
                                                       << 0xdU)) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT____Vcellout__gen_itlb__DOT__i_snitch_l0_tlb_inst__valid_o) 
                                                         << 0xcU)))) 
                                               | (0xffffffU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_snitch__DOT__alu_result 
                                                     >> 0x14U)))))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x11U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[0U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x12U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[1U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x13U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[2U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x14U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[3U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x15U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[4U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x16U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[5U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x17U] 
        = (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[6U] 
             >> 0x10U) | (0xfff0000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
                                        << 0x10U))) 
           | (0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
                             << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U] 
        = (((0xfffff80U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o) 
                           << 7U)) | ((0xfffffc0U & 
                                       ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_cacheable_o) 
                                        << 6U)) | (
                                                   (0xfffffe0U 
                                                    & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_valid_o) 
                                                       << 5U)) 
                                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__acc_snitch_demux_q[7U] 
                                                      >> 0x10U)))) 
           | (0xf0000000U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o) 
                             << 7U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x19U] 
        = ((0xf800000U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__flush_i_valid_o) 
                          << 0x17U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o) 
                                         >> 0x19U) 
                                        | (0xfffff80U 
                                           & ((IData)(
                                                      (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT____Vcellout__i_snitch__inst_addr_o 
                                                       >> 0x20U)) 
                                              << 7U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[0U] 
        = (IData)((((QData)((IData)((0xfffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[2U] 
                                                 >> 8U)))) 
                    << 0x24U) | (0xfffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U]))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[1U] 
        = (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U]))))) 
            << 0x18U) | (IData)(((((QData)((IData)(
                                                   (0xfffffU 
                                                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[2U] 
                                                       >> 8U)))) 
                                   << 0x24U) | (0xfffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U]))))) 
                                 >> 0x20U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[2U] 
        = ((0xf0000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[2U] 
                           << 0x14U)) | (((IData)((0xfffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U]))))) 
                                          >> 8U) | 
                                         ((IData)((
                                                   (0xfffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0U])))) 
                                                   >> 0x20U)) 
                                          << 0x18U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[3U] 
        = (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                  >> 0x1cU)))) 
            << 0x10U) | (0xffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[2U] 
                                    >> 0xcU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[4U] 
        = ((0xfff00000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xfU] 
                           << 0x10U)) | (((IData)((0xfffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                         >> 0x1cU)))) 
                                          >> 0x10U) 
                                         | ((IData)(
                                                    ((0xfffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                                          << 4U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                            >> 0x1cU))) 
                                                     >> 0x20U)) 
                                            << 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[5U] 
        = (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                  >> 0x1cU)))) 
            << 8U) | (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xfU] 
                               >> 0x10U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT____Vcellinp__gen_rr_arb__DOT__i_arbiter__data_i[6U] 
        = ((0xfffff000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xfU] 
                           << 8U)) | (((IData)((0xfffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                      >> 0x1cU)))) 
                                       >> 0x18U) | 
                                      ((IData)(((0xfffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xdU])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                                       >> 0x1cU))) 
                                                >> 0x20U)) 
                                       << 8U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U] 
                      >> 9U)) | ((4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U] 
                                        >> 0xaU)) | 
                                 (3U & (- (IData)((1U 
                                                   & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[3U] 
                                                      >> 0x10U))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable 
        = ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U] 
                  >> 5U)) | (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
                                   >> 0xaU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U] 
                      >> 0xeU)) | (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[3U] 
                                         >> 0x13U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
        = (IData)((0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU])) 
                                           >> 0xbU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
        = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x19U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U])) 
                                             >> 7U)))) 
            << 0x10U) | (IData)(((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xcU])) 
                                      << 0x15U) | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU])) 
                                                   >> 0xbU))) 
                                 >> 0x20U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U] 
        = (((IData)((0xffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x19U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U])) 
                                             >> 7U)))) 
            >> 0x10U) | ((IData)(((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x19U])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U])) 
                                       >> 7U))) >> 0x20U)) 
                         << 0x10U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffff8U & (((3U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                  << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
                 | (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((0xfffffff8U & (((3U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | ((0xfffffffcU & (((2U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                               << 2U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
              | (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                 << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 2U)) | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                                 >> 3U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_valid 
        = ((2U & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                       >> 1U)) << 1U) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U] 
                                         >> 4U))) | 
           (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable)) 
                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
                     >> 9U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellinp__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__in_valid_i 
        = (IData)((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                    >> 1U) & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U] 
                              >> 5U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellinp__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__in_valid_i 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
                    >> 9U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_error 
        = (((IData)(((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                         >> 1U)) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_error) 
                                    >> 1U))) << 1U) 
           | (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable)) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_error))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu_valid 
        = (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)
            ? (0xffffffffffe0ULL & (((QData)((IData)(
                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                  >> 0x10U)))
            : (0xffffffffffe0ULL & (((QData)((IData)(
                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_7 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[9U] 
            >> 0x14U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[9U] 
                                   >> 0x15U)) == (0x7fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                                     >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_6 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[8U] 
            >> 8U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[8U] 
                                >> 9U)) == (0x7fU & 
                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                             >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_5 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[6U] 
            >> 0x1cU) & ((0x7fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[7U] 
                                    << 3U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[6U] 
                                              >> 0x1dU))) 
                         == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                      >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_4 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[5U] 
            >> 0x10U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[5U] 
                                   >> 0x11U)) == (0x7fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                                     >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_3 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[4U] 
            >> 4U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[4U] 
                                >> 5U)) == (0x7fU & 
                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                             >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_2 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[2U] 
            >> 0x18U) & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[2U] 
                          >> 0x19U) == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                                 >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_1 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[1U] 
            >> 0xcU) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[1U] 
                                  >> 0xdU)) == (0x7fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                                   >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_0 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[0U] 
           & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[0U] 
                        >> 1U)) == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                             >> 5U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_7 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[9U] 
            >> 0x14U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[9U] 
                                   >> 0x15U)) == (0x7fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                                     >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_6 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[8U] 
            >> 8U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[8U] 
                                >> 9U)) == (0x7fU & 
                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                             >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_5 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[6U] 
            >> 0x1cU) & ((0x7fU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[7U] 
                                    << 3U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[6U] 
                                              >> 0x1dU))) 
                         == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                      >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_4 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[5U] 
            >> 0x10U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[5U] 
                                   >> 0x11U)) == (0x7fU 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                                     >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_3 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[4U] 
            >> 4U) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[4U] 
                                >> 5U)) == (0x7fU & 
                                            (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                             >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_2 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[2U] 
            >> 0x18U) & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[2U] 
                          >> 0x19U) == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                                 >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_1 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[1U] 
            >> 0xcU) & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[1U] 
                                  >> 0xdU)) == (0x7fU 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                                   >> 0x15U))));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_0 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[0U] 
           & ((0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[0U] 
                        >> 1U)) == (0x7fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                             >> 0x15U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
        = ((0xcU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)) 
           | (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q)));
    if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                = (0xcU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d));
        } else if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__rsp_valid))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                = (3U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d));
        }
    } else if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
        if ((4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__rsp_fifo__DOT__status_cnt_q))) {
            if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__in_ready))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                    = (2U | (0xcU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)));
            }
        }
    } else if ((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_valid))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
            = (1U | (0xcU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
        = ((3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)) 
           | (0xcU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q)));
    if ((8U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
        if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                = (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d));
        } else if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__rsp_valid))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                = (0xcU | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d));
        }
    } else if ((4U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_q))) {
        if ((4U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__rsp_fifo__DOT__status_cnt_q))) {
            if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__in_ready))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
                    = (8U | (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)));
            }
        }
    } else if ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_valid))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d 
            = (4U | (3U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__state_d)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_shared_interconnect__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[0U] 
            = (IData)((0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x11U])) 
                                             << 0x10U) 
                                            | ((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U])) 
                                               >> 0x10U))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[1U] 
            = (IData)(((0xffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x11U])) 
                                              << 0x10U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x10U])) 
                                                >> 0x10U))) 
                       >> 0x20U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x12U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[3U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x13U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x14U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[5U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x15U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U] 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x16U];
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[7U] 
            = (0x20U | ((0xffffffc0U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x17U] 
                                        << 1U)) | (0x1fU 
                                                   & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x17U])));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[8U] 
            = (0x3fU & ((0x3eU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x18U] 
                                  << 1U)) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0x17U] 
                                             >> 0x1fU)));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[0U] 
            = (IData)((0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[5U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[4U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[3U])) 
                                                  >> 0x14U)))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[1U] 
            = (IData)(((0xffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[5U])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[4U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[3U])) 
                                                   >> 0x14U)))) 
                       >> 0x20U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[6U] 
                << 0x1cU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[5U] 
                             >> 4U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[3U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[7U] 
                << 0x1cU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[6U] 
                             >> 4U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[8U] 
                << 0x1cU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[7U] 
                             >> 4U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[5U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[9U] 
                << 0x1cU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[8U] 
                             >> 4U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U] 
            = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xaU] 
                << 0x1cU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[9U] 
                             >> 4U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[7U] 
            = ((0xffffffc0U & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
                                << 0x1dU) | (0x1fffffc0U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xaU] 
                                                >> 3U)))) 
               | (0x1fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xaU] 
                           >> 4U)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[8U] 
            = (0x3fU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__hive_req[0xbU] 
                        >> 3U));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__refill_req 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter_miss_refill__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)
            ? (1ULL | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_l0_to_bypass__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes 
                       << 2U)) : ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__i_handler__out_req_addr_o 
                                   << 2U) | (QData)((IData)(
                                                            ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__i_handler__out_req_id_o) 
                                                             << 1U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit_early 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_7) 
            << 7U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_6) 
                       << 6U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_5) 
                                  << 5U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_4) 
                                             << 4U) 
                                            | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_3) 
                                                << 3U) 
                                               | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_2) 
                                                   << 2U) 
                                                  | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_1) 
                                                      << 1U) 
                                                     | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_0))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit 
        = ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_7) 
             & ((0xfffffffffULL & (((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[0xaU])) 
                                    << 4U) | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[9U])) 
                                              >> 0x1cU))) 
                == (0xfffffffffULL & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                       << 0x14U) | 
                                      ((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                       >> 0xcU))))) 
            << 7U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_6) 
                        & ((0xfffffffffULL & (((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[9U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[8U])) 
                                                 >> 0x10U))) 
                           == (0xfffffffffULL & (((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                    >> 0xcU))))) 
                       << 6U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_5) 
                                   & ((0xfffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[8U])) 
                                           << 0x1cU) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[7U])) 
                                             >> 4U))) 
                                      == (0xfffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                >> 0xcU))))) 
                                  << 5U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_4) 
                                              & ((0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[6U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[5U])) 
                                                        >> 0x18U))) 
                                                 == 
                                                 (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                        >> 0xcU))))) 
                                             << 4U) 
                                            | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_3) 
                                                 & ((0xfffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[5U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[4U])) 
                                                           >> 0xcU))) 
                                                    == 
                                                    (0xfffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                           >> 0xcU))))) 
                                                << 3U) 
                                               | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_2) 
                                                    & ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[4U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[3U])))) 
                                                       == 
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                              >> 0xcU))))) 
                                                   << 2U) 
                                                  | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_1) 
                                                       & ((0xfffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[2U])) 
                                                               << 0xcU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[1U])) 
                                                                 >> 0x14U))) 
                                                          == 
                                                          (0xfffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                                 >> 0xcU))))) 
                                                      << 1U) 
                                                     | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_haa3c94fa_0_0) 
                                                        & ((0xfffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[1U])) 
                                                                << 0x18U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__tag[0U])) 
                                                                  >> 8U))) 
                                                           == 
                                                           (0xfffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U])) 
                                                                  >> 0xcU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit_early 
        = (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_7) 
            << 7U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_6) 
                       << 6U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_5) 
                                  << 5U) | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_4) 
                                             << 4U) 
                                            | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_3) 
                                                << 3U) 
                                               | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_2) 
                                                   << 2U) 
                                                  | (((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_1) 
                                                      << 1U) 
                                                     | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_0))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit 
        = ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_7) 
             & ((0xfffffffffULL & (((QData)((IData)(
                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[0xaU])) 
                                    << 4U) | ((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[9U])) 
                                              >> 0x1cU))) 
                == (0xfffffffffULL & (((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                 >> 0x1cU))))) 
            << 7U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_6) 
                        & ((0xfffffffffULL & (((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[9U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[8U])) 
                                                 >> 0x10U))) 
                           == (0xfffffffffULL & (((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                    >> 0x1cU))))) 
                       << 6U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_5) 
                                   & ((0xfffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[8U])) 
                                           << 0x1cU) 
                                          | ((QData)((IData)(
                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[7U])) 
                                             >> 4U))) 
                                      == (0xfffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                >> 0x1cU))))) 
                                  << 5U) | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_4) 
                                              & ((0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[6U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[5U])) 
                                                        >> 0x18U))) 
                                                 == 
                                                 (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                        >> 0x1cU))))) 
                                             << 4U) 
                                            | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_3) 
                                                 & ((0xfffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[5U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[4U])) 
                                                           >> 0xcU))) 
                                                    == 
                                                    (0xfffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                           >> 0x1cU))))) 
                                                << 3U) 
                                               | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_2) 
                                                    & ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[4U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[3U])))) 
                                                       == 
                                                       (0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                            << 4U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                              >> 0x1cU))))) 
                                                   << 2U) 
                                                  | ((((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_1) 
                                                       & ((0xfffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[2U])) 
                                                               << 0xcU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[1U])) 
                                                                 >> 0x14U))) 
                                                          == 
                                                          (0xfffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                               << 4U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                                 >> 0x1cU))))) 
                                                      << 1U) 
                                                     | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____VdfgRegularize_h2dce51e1_0_0) 
                                                        & ((0xfffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[1U])) 
                                                                << 0x18U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__tag[0U])) 
                                                                  >> 8U))) 
                                                           == 
                                                           (0xfffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                                                << 4U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                                  >> 0x1cU))))))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__illegal_instruction = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_multiplier__DOT__sign_a = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_multiplier__DOT__sign_b = 0U;
    if ((0x2001033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_multiplier__DOT__sign_a = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_multiplier__DOT__sign_b = 1U;
    } else if ((0x2003033U != (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
        if ((0x2002033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_multiplier__DOT__sign_a = 1U;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__mul_valid_op = 0U;
    if (((((0x2000033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])) 
           || (0x2001033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
          || (0x2002033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
         || (0x2003033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__mul_valid_op 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu_valid;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__rem = 0U;
    if ((0x2004033U != (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
        if ((0x2005033U != (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
            if ((0x2006033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__rem = 1U;
            } else if ((0x2007033U == (0xfe00707fU 
                                       & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__rem = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op = 0U;
    if ((0x2004033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op = 1U;
    } else if ((0x2005033U != (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
        if ((0x2006033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op = 1U;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__div_valid_op = 0U;
    if ((1U & (~ ((((0x2000033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])) 
                    || (0x2001033U == (0xfe00707fU 
                                       & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
                   || (0x2002033U == (0xfe00707fU & 
                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
                  || (0x2003033U == (0xfe00707fU & 
                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])))))) {
        if ((1U & (~ ((((0x2004033U == (0xfe00707fU 
                                        & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])) 
                        || (0x2005033U == (0xfe00707fU 
                                           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
                       || (0x2006033U == (0xfe00707fU 
                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
                      || (0x2007033U == (0xfe00707fU 
                                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__illegal_instruction = 1U;
        }
        if (((((0x2004033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])) 
               || (0x2005033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
              || (0x2006033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U]))) 
             || (0x2007033U == (0xfe00707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[6U])))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__div_valid_op 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu_valid;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__miss 
        = ((~ (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__pending_refill_q)) 
              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellinp__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__in_valid_i)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[1U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[2U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[3U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[4U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[5U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[6U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[7U]);
    __Vtemp_46[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[9U]));
    __Vtemp_46[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xaU]));
    __Vtemp_46[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xbU]));
    __Vtemp_46[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xcU]));
    __Vtemp_46[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xdU]));
    __Vtemp_46[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xeU]));
    __Vtemp_46[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0xfU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 1U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[8U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_46[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_46[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_46[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_46[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_46[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_46[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_46[7U];
    __Vtemp_50[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x11U]));
    __Vtemp_50[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x12U]));
    __Vtemp_50[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x13U]));
    __Vtemp_50[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x14U]));
    __Vtemp_50[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x15U]));
    __Vtemp_50[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x16U]));
    __Vtemp_50[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x17U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 2U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x10U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_50[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_50[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_50[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_50[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_50[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_50[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_50[7U];
    __Vtemp_54[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x19U]));
    __Vtemp_54[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1aU]));
    __Vtemp_54[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1bU]));
    __Vtemp_54[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1cU]));
    __Vtemp_54[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1dU]));
    __Vtemp_54[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1eU]));
    __Vtemp_54[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x1fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 3U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x18U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_54[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_54[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_54[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_54[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_54[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_54[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_54[7U];
    __Vtemp_58[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x21U]));
    __Vtemp_58[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x22U]));
    __Vtemp_58[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x23U]));
    __Vtemp_58[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x24U]));
    __Vtemp_58[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x25U]));
    __Vtemp_58[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x26U]));
    __Vtemp_58[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x27U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 4U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x20U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_58[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_58[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_58[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_58[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_58[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_58[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_58[7U];
    __Vtemp_62[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x29U]));
    __Vtemp_62[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2aU]));
    __Vtemp_62[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2bU]));
    __Vtemp_62[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2cU]));
    __Vtemp_62[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2dU]));
    __Vtemp_62[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2eU]));
    __Vtemp_62[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x2fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 5U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x28U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_62[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_62[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_62[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_62[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_62[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_62[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_62[7U];
    __Vtemp_66[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x31U]));
    __Vtemp_66[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x32U]));
    __Vtemp_66[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x33U]));
    __Vtemp_66[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x34U]));
    __Vtemp_66[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x35U]));
    __Vtemp_66[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x36U]));
    __Vtemp_66[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x37U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 6U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x30U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_66[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_66[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_66[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_66[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_66[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_66[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_66[7U];
    __Vtemp_70[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x39U]));
    __Vtemp_70[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3aU]));
    __Vtemp_70[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3bU]));
    __Vtemp_70[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3cU]));
    __Vtemp_70[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3dU]));
    __Vtemp_70[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3eU]));
    __Vtemp_70[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 7U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x3fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 7U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__data[0x38U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_70[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_70[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_70[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_70[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_70[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_70[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_70[7U];
    VL_SHIFTR_WWI(256,256,32, __Vtemp_74, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data, 
                  VL_SHIFTL_III(32,32,32, (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                                 >> 2U)), 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__in_data_o 
        = __Vtemp_74[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__miss 
        = ((~ (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__pending_refill_q)) 
              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellinp__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__in_valid_i)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_ready 
        = ((2U & (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                     >> 1U) & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit))) 
                   << 1U) | (0xfffffffeU & (((~ ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                                                 >> 1U)) 
                                             << 1U) 
                                            & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_ready))))) 
           | (1U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                     & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__hit))) 
                    | ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable)) 
                       & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_ready)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[1U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[2U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[3U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[4U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[5U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[6U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = ((- (IData)((1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit)))) 
           & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[7U]);
    __Vtemp_77[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[9U]));
    __Vtemp_77[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xaU]));
    __Vtemp_77[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xbU]));
    __Vtemp_77[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xcU]));
    __Vtemp_77[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xdU]));
    __Vtemp_77[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xeU]));
    __Vtemp_77[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 1U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0xfU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 1U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[8U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_77[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_77[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_77[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_77[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_77[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_77[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_77[7U];
    __Vtemp_81[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x11U]));
    __Vtemp_81[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x12U]));
    __Vtemp_81[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x13U]));
    __Vtemp_81[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x14U]));
    __Vtemp_81[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x15U]));
    __Vtemp_81[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x16U]));
    __Vtemp_81[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 2U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x17U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 2U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x10U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_81[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_81[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_81[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_81[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_81[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_81[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_81[7U];
    __Vtemp_85[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x19U]));
    __Vtemp_85[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1aU]));
    __Vtemp_85[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1bU]));
    __Vtemp_85[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1cU]));
    __Vtemp_85[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1dU]));
    __Vtemp_85[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1eU]));
    __Vtemp_85[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 3U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x1fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 3U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x18U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_85[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_85[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_85[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_85[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_85[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_85[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_85[7U];
    __Vtemp_89[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x21U]));
    __Vtemp_89[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x22U]));
    __Vtemp_89[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x23U]));
    __Vtemp_89[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x24U]));
    __Vtemp_89[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x25U]));
    __Vtemp_89[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x26U]));
    __Vtemp_89[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 4U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x27U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 4U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x20U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_89[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_89[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_89[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_89[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_89[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_89[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_89[7U];
    __Vtemp_93[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x29U]));
    __Vtemp_93[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2aU]));
    __Vtemp_93[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2bU]));
    __Vtemp_93[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2cU]));
    __Vtemp_93[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2dU]));
    __Vtemp_93[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2eU]));
    __Vtemp_93[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 5U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x2fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 5U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x28U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_93[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_93[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_93[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_93[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_93[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_93[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_93[7U];
    __Vtemp_97[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x31U]));
    __Vtemp_97[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x32U]));
    __Vtemp_97[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x33U]));
    __Vtemp_97[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x34U]));
    __Vtemp_97[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x35U]));
    __Vtemp_97[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x36U]));
    __Vtemp_97[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                      | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                           >> 6U)))) 
                         & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x37U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 6U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x30U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_97[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_97[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_97[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_97[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_97[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_97[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_97[7U];
    __Vtemp_101[1U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x39U]));
    __Vtemp_101[2U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3aU]));
    __Vtemp_101[3U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3bU]));
    __Vtemp_101[4U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3cU]));
    __Vtemp_101[5U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3dU]));
    __Vtemp_101[6U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3eU]));
    __Vtemp_101[7U] = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                       | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                            >> 7U)))) 
                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x3fU]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
        = (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
           | ((- (IData)((1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__hit) 
                                >> 7U)))) & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__data[0x38U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
        = __Vtemp_101[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
        = __Vtemp_101[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
        = __Vtemp_101[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
        = __Vtemp_101[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
        = __Vtemp_101[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
        = __Vtemp_101[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
        = __Vtemp_101[7U];
    VL_SHIFTR_WWI(256,256,32, __Vtemp_105, vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data, 
                  VL_SHIFTL_III(32,32,32, (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                                 >> 0x12U)), 5U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__in_data_o 
        = __Vtemp_105[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT____VdfgRegularize_h4450f92c_0_1 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op) 
           & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U] 
               ^ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U]) 
              >> 0x1fU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
        = (IData)((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op) 
                    & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U] 
                       >> 0x1fU)) ? ((QData)((IData)(
                                                     (~ 
                                                      vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U]))) 
                                     << 1U) : (QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[4U]))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT____VdfgRegularize_h4450f92c_0_0 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__signed_op) 
           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U] 
              >> 0x1fU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__out_req 
        = (0x1000000000000ULL | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__prefetch_req_addr_q);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__local_prefetch_req_valid 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__prefetch_req_vld_q;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__miss) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__out_req 
            = (0xffffffffffe0ULL & (((QData)((IData)(
                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U]))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__local_prefetch_req_valid 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__miss;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
                  >> 0x1fU));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (1U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                        >> 0x1eU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (2U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                        >> 0x1dU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (4U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                        >> 0x1cU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (8U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x10U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                           >> 0x1bU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x10U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x20U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                           >> 0x1aU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x20U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x40U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                           >> 0x19U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x40U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                           >> 0x18U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x80U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__out_req 
        = (0x1000000000000ULL | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__prefetch_req_addr_q);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__local_prefetch_req_valid 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__prefetch_req_vld_q;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__miss) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__out_req 
            = (0xffffffffffe0ULL & (((QData)((IData)(
                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U])) 
                                                  >> 0x10U)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__local_prefetch_req_valid 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__miss;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U] 
                  >> 0x1fU));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfeU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[0U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (1U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U] 
                        >> 0x1eU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfdU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[1U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (2U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U] 
                        >> 0x1dU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xfbU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[2U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (4U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U] 
                        >> 0x1cU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xf7U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[3U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (8U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x10U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U] 
                           >> 0x1bU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xefU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[4U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x10U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x20U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U] 
                           >> 0x1aU)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xdfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[5U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x20U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x40U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U] 
                           >> 0x19U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0xbfU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[6U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x40U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
        = (0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken));
    if (((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])) 
             || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
            || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
           || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
          || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
         || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken 
            = ((0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken)) 
               | (0x80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U] 
                           >> 0x18U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
        = (0x7fU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
    if ((1U & (~ ((((((0x63U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])) 
                      || (0x1063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                     || (0x4063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                    || (0x5063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                   || (0x6063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) 
                  || (0x7063U == (0x707fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U])))))) {
        if ((0x6fU == (0x7fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__ins_data[7U]))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal 
                = (0x80U | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT____Vcellout__i_snitch_icache__inst_data_o 
        = (((QData)((IData)((((IData)((0x1ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                                                                >> 1U))))))) 
                              & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__in_data_o) 
                             | ((~ (IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable) 
                                                                     >> 1U)))))))) 
                                & (IData)((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_data 
                                           >> 0x20U)))))) 
            << 0x20U) | (QData)((IData)((((IData)((0x1ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable))))))) 
                                          & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT____Vcellout__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__in_data_o) 
                                         | ((~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_cacheable)))))))) 
                                            & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__in_bypass_data))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                     >> 0x1bU)) | ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                          >> 0x1dU)) 
                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                      >> 0x1fU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffc7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                        >> 0x15U)) | ((0x10U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                               >> 0x19U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffe3fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                         >> 0xfU)) | ((0x80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                  >> 0x13U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff1ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                         >> 9U)) | ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                 >> 0xdU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff8fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                          >> 3U)) | ((0x2000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                   >> 7U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffc7fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                           << 3U)) | ((0x10000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                          >> 1U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffe3ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                         << 5U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff1fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                               << 0xbU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf8ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                 << 0x11U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0xc7ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                                  << 0x17U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_a__DOT__gen_lzc__DOT__in_tmp) 
           | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
               << 0x1fU) | (0x40000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_a_input 
                                           << 0x1dU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT____VdfgRegularize_h4450f92c_0_0)
            ? (~ vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U])
            : vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__acc_req_sfu[2U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT____Vcellinp__i_lzc_branch__in_i 
        = (((IData)(0xffU) << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[0U] 
                                     >> 2U))) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
                                                 | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__is_jal)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__local_prefetch_req_valid) 
                << 1U) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__local_prefetch_req_valid)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT____Vcellinp__i_lzc_branch__in_i 
        = (((IData)(0xffU) << (7U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__inst_addr[1U] 
                                     >> 0x12U))) & 
           ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_branch_taken) 
            | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__is_jal)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffff8U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((4U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                     >> 0x1bU)) | ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                          >> 0x1dU)) 
                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                      >> 0x1fU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffffffc7U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                        >> 0x15U)) | ((0x10U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                               >> 0x19U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffffe3fU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                         >> 0xfU)) | ((0x80U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                  >> 0x13U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffff1ffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                         >> 9U)) | ((0x400U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                 >> 0xdU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffff8fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                          >> 3U)) | ((0x2000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                   >> 7U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfffc7fffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                           << 3U)) | ((0x10000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                          >> 1U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xffe3ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x100000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                         << 5U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xff1fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x800000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                               << 0xbU)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xf8ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x4000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                 << 0x11U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0xc7ffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((0x20000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                                  << 0x17U)))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp) 
           | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
               << 0x1fU) | (0x40000000U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_shared_muldiv__DOT__i_div__DOT__lzc_b_input 
                                           << 0x1dU))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__prefetch_lookup_req_valid 
        = (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__prefetch_lookup_req 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)
            ? ((0x3fffffffffffcULL & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__out_req 
                                      << 2U)) | (QData)((IData)(
                                                                (2U 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__1__KET____DOT__i_snitch_icache_l0__DOT__out_req 
                                                                               >> 0x30U)))))))
            : ((0x3fffffffffffcULL & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__out_req 
                                      << 2U)) | (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__i_snitch_icache__DOT__gen_prefetcher__BRA__0__KET____DOT__i_snitch_icache_l0__DOT__out_req 
                                                                            >> 0x30U)))))));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__0(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_hive__BRA__0__KET____DOT__i_snitch_hive__DOT__gen_ptw__DOT__ptw_ready_out)));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__1(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xffffffc0U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  << 4U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                            << 6U))) 
                 | ((0x20U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                               << 3U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                         << 5U))) | 
                    ((0xfffffff0U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      << 3U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                << 4U))) 
                     | ((8U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                << 2U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          << 3U))) 
                        | ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                            << 2U) | ((2U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                             << 1U)) 
                                      | (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT____VdfgRegularize_h39b87e36_0_0))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__0__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__2(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0xffffffc0U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                  << 4U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                            << 6U))) 
                 | ((0x20U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                               << 3U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                         << 5U))) | 
                    ((0xfffffff0U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      << 3U) & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                << 4U))) 
                     | ((8U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                << 2U) & ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                          << 3U))) 
                        | ((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                             & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                            << 2U) | ((2U & (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                             << 1U)) 
                                      | (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_spill_register_acc_demux_resp__DOT____VdfgRegularize_h39b87e36_0_0))))))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__i_stream_arbiter_offload__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__6(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_gnt 
        = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__7(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__ar_wifq_exists_gnt 
        = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__wifq_exists_gnt) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__gen_atop_support__DOT__i_axi_riscv_atomics_wrap__DOT__i_atomics__DOT__i_lrsc__DOT__i_wifq_exists_arb__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o));
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__8(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__w_emitter_push) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__w_emitter_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__w_emitter_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__w_emitter_pop)) 
          & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_w_emitter__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__aw_emitter_push) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__aw_emitter_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__aw_emitter_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__aw_emitter_pop)) 
          & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_aw_emitter__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__ar_emitter_push) 
         & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__ar_emitter_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__ar_emitter_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__ar_emitter_pop)) 
          & (3U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__gen_core__BRA__1__KET____DOT__i_snitch_cc__DOT__gen_dma__DOT__i_axi_dma_tc_snitch_fe__DOT__i_axi_dma_backend__DOT__i_axi_dma_data_mover__DOT__i_fifo_ar_emitter__DOT__status_cnt_q;
    }
}

extern const VlWide<16>/*511:0*/ Vtestharness__ConstPool__CONST_h8016e4ec_0;

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__10(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__10\n"); );
    // Init
    VlWide<3>/*88:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0;
    VL_ZERO_W(89, testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0);
    VlWide<3>/*74:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0;
    VL_ZERO_W(75, testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0);
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0 = 0;
    VlWide<3>/*82:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0;
    VL_ZERO_W(83, testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0);
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_h42559c25__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_h42559c25__0 = 0;
    CData/*0:0*/ testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h25dca09a__0;
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h25dca09a__0 = 0;
    QData/*63:0*/ __Vtemp_23;
    QData/*63:0*/ __Vtemp_29;
    // Body
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[3U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[4U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[5U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[6U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[7U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[8U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[9U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xaU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xbU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xcU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xdU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xeU];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xfU];
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                         >> 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                         >> 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[2U] 
        = (0x1ffffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                         >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
              << 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((3U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
                  >> 0x1dU)) | ((4U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
                                       >> 0x1dU)) | 
                                (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                                 << 3U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xf0000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((3U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                     >> 0x1dU)) | ((4U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                                          >> 0x1dU)) 
                                   | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[2U] 
                                      << 3U))));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (4U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
            << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                      >> 0x17U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
            << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                      >> 0x17U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[2U] 
        = (0x7ffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                      << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                                >> 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0x3fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
              << 0x17U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x3fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
                         >> 9U)) | ((0x400000U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
                                                  >> 9U)) 
                                    | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                                       << 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x3fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                         >> 9U)) | ((0x400000U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                                                  >> 9U)) 
                                    | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[2U] 
                                       << 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (0x3fffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[2U] 
                           >> 9U)));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef31ac9f__1 
            = (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x16U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffbfffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef31ac9f__1) 
                  << 0x16U));
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffdfffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0) 
              << 0x15U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[2U] 
        = (0x7ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
              << 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
                  >> 0x1eU)) | ((2U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
                                       >> 0x1eU)) | 
                                (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                                 << 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffe00000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                     >> 0x1eU)) | ((2U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                                          >> 0x1eU)) 
                                   | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                         >> 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                         >> 3U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[2U] 
        = (0x1ffffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                         >> 3U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0x3fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
              << 0x1fU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0x3fffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
                           >> 1U)) | ((0x40000000U 
                                       & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[0U] 
                                          >> 1U)) | 
                                      (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                                       << 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0x3fffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                           >> 1U)) | ((0x40000000U 
                                       & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[1U] 
                                          >> 1U)) | 
                                      (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[2U] 
                                       << 0x1fU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = (0xffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h816ad4ee__0[2U] 
                        >> 1U));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x40000000U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
            << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                      >> 0x17U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
            << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                      >> 0x17U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[2U] 
        = (0x7ffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                      << 9U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                                >> 0x17U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0x3ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
              << 0x13U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0x3ffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
                        >> 0xdU)) | ((0x40000U & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[0U] 
                                                  >> 0xdU)) 
                                     | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                                        << 0x13U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xc0000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((0x3ffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                           >> 0xdU)) | ((0x40000U & 
                                         (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[1U] 
                                          >> 0xdU)) 
                                        | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h39782095__0[2U] 
                                           << 0x13U))));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef31ac9f__1 
            = (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x16U));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xfffbffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef31ac9f__1) 
                  << 0x12U));
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffdffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hef32a1b8__0) 
              << 0x11U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
        = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[2U] 
        = (0x7ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
              << 0x1eU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1fffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
                           >> 2U)) | ((0x20000000U 
                                       & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[0U] 
                                          >> 2U)) | 
                                      (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                                       << 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1fffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                           >> 2U)) | ((0x20000000U 
                                       & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[1U] 
                                          >> 2U)) | 
                                      (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[2U] 
                                       << 0x1eU)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffe0000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (0x1fffffffU & (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h37df7c68__0[2U] 
                             >> 2U)));
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x20000000U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xefffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h7bb218dc__0) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                     >> 0x11U));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q) {
        if ((0x10000000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) {
            if ((0U == (0xffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 0U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 1U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
              >> 0x1dU));
    testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_h42559c25__0 
        = (IData)((0x240000U == (0x240000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
              >> 0x1eU));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[3U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[4U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[5U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[5U]) 
           | (3U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = (0x2000000U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0xffbfffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0x400000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__state_q) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
        }
    } else if (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
                 >> 2U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_gnt))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_aw_chan__ax_valid_o = 1U;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] = 0U;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q) {
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                if ((0U == (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 0U;
                }
                if ((0U != (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                     >> 0x17U)))) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x807fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | (0x7f800000U & ((((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                << 9U) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                  >> 0x17U)) 
                                              - (IData)(1U)) 
                                             << 0x17U)));
                    if ((1U == (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                      >> 0x12U)))) {
                        __Vtemp_23 = (0xffffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                              << 1U) 
                                             | ((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                >> 0x1fU))) 
                                         + (1ULL << 
                                            (7U & (
                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                   >> 0x14U)))));
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                            = ((0x7fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((0xffffffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1fU))) 
                                              + (1ULL 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U] 
                                                     >> 0x14U)))))) 
                                  << 0x1fU));
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_23) 
                                >> 1U) | ((IData)((__Vtemp_23 
                                                   >> 0x20U)) 
                                          << 0x1fU));
                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                            = ((0x78000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                               | (0x7ffffU & ((IData)(
                                                      (__Vtemp_23 
                                                       >> 0x20U)) 
                                              >> 1U)));
                    }
                }
            }
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[0U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[1U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_q[2U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = (0x807fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
        }
    } else if (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                 >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_gnt))) {
        if ((0U != (0xffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                              << 7U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                        >> 0x19U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_d = 1U;
        }
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o = 1U;
        if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                              << 7U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                        >> 0x19U))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                    << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                 >> 2U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                    << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                 >> 2U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                = (0x7ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                               >> 2U));
        } else {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                    << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                 >> 2U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                = ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                    << 0x1eU) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                 >> 2U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                = (0x7ffffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
                               >> 2U));
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U];
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                = (0x807fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U]);
            if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                    = ((0x807fffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                       | (0x7f800000U & ((((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                            << 9U) 
                                           | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                              >> 0x17U)) 
                                          - (IData)(1U)) 
                                         << 0x17U)));
                if ((1U == (3U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                  >> 0x12U)))) {
                    __Vtemp_29 = (0xffffffffffffULL 
                                  & ((((QData)((IData)(
                                                       vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                  >> 0x1fU))) 
                                     + (1ULL << (7U 
                                                 & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                                    >> 0x14U)))));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                        = ((0x7fffffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U]) 
                           | ((IData)((0xffffffffffffULL 
                                       & ((((QData)((IData)(
                                                            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U])) 
                                            << 0x21U) 
                                           | (((QData)((IData)(
                                                               vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U])) 
                                               << 1U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U])) 
                                                 >> 0x1fU))) 
                                          + (1ULL << 
                                             (7U & 
                                              (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[0U] 
                                               >> 0x14U)))))) 
                              << 0x1fU));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[1U] 
                        = (((IData)(__Vtemp_29) >> 1U) 
                           | ((IData)((__Vtemp_29 >> 0x20U)) 
                              << 0x1fU));
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U] 
                        = ((0x78000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__ax_d[2U]) 
                           | (0x7ffffU & ((IData)((__Vtemp_29 
                                                   >> 0x20U)) 
                                          >> 1U)));
                }
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 0U;
    if ((1U & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__state_q)))) {
        if (((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_gnt))) {
            if ((0U == (0xffU & ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
                                  << 7U) | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
                                            >> 0x19U))))) {
                if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_ar_chan__ax_ready_i) {
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
                    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
                }
            } else {
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_ready_o = 1U;
                vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req = 1U;
            }
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_load) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_data));
    } else if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hbac6e3bd__0 
            = ((0xf00U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                          >> 5U)) | (0xffU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                              >> 0x15U)));
        if ((0xbU >= (0xfU & ((IData)(0xcU) * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(0xfffU) << (0xfU & 
                                            ((IData)(0xcU) 
                                             * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n)) 
                   | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hbac6e3bd__0) 
                                << (0xfU & ((IData)(0xcU) 
                                            * (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
        = (0xfU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U] 
        = ((1U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[0U]) 
           | ((vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
               << 2U) | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o) 
                         << 1U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[1U] 
        = (((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                   >> 0x1eU)) | ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_valid_o) 
                                 >> 0x1fU)) | ((2U 
                                                & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[0U] 
                                                   >> 0x1eU)) 
                                               | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                                                  << 2U)));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0xffe00000U & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | ((1U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                     >> 0x1eU)) | ((2U & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[1U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_ar_chan__ax_o[2U] 
                                      << 2U))));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__err_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_gnt))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h8b5658c4__0 = 0U;
        if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d 
                = (((~ ((IData)(1U) << (0U != (0x1ffU 
                                               & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d)) 
                   | (1U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h8b5658c4__0) 
                            << (0U != (0x1ffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))));
        }
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_set = 0U;
        testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h25dca09a__0 = 1U;
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_set = 0U;
        testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h25dca09a__0 = 0U;
    }
    if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_set 
            = (((~ ((IData)(1U) << (0U != (0x1ffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) 
                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_set)) 
               | (1U & ((IData)(testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_h25dca09a__0) 
                        << (0U != (0x1ffU & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))));
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__i_axi_burst_splitter_counters__DOT__idq_inp_req 
        = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_req) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_ar_chan__DOT__cnt_alloc_gnt));
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U] 
        = (0x37ffffU & vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_h42559c25__0) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U] 
            = (0x80000U | vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xfU & ((0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                   >> 0x14U)) << (3U 
                                                  & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
            = (0xfU & (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                       >> 0x14U));
        if (vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) {
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->testharness__DOT__i_snax_dream_cluster__DOT__i_cluster__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
}

extern const VlWide<48>/*1535:0*/ Vtestharness__ConstPool__CONST_hb98972d7_0;
extern const VlWide<19>/*607:0*/ Vtestharness__ConstPool__CONST_h7b110ce3_0;

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__11(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__11\n"); );
    // Init
    VlWide<3>/*87:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0;
    VL_ZERO_W(88, testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0);
    VlWide<19>/*578:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0;
    VL_ZERO_W(579, testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0);
    CData/*0:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0;
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0 = 0;
    VlWide<3>/*81:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0;
    VL_ZERO_W(82, testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0);
    CData/*0:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0;
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0 = 0;
    CData/*0:0*/ testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he82e4aa6__0;
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he82e4aa6__0 = 0;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2fU)) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[__Vilp1] 
            = Vtestharness__ConstPool__CONST_hb98972d7_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
            << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
                      >> 0x1aU));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x16U] 
            << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
                      >> 0x1aU));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
        = (0xffffffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x17U] 
                         << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x16U] 
                                   >> 0x1aU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0x1ffffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
              << 0x1aU));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x15U] 
        = ((0x1ffffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
                          >> 6U)) | ((0x2000000U & 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
                                       >> 6U)) | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                                                  << 0x1aU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x16U] 
        = ((0x1ffffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                          >> 6U)) | ((0x2000000U & 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                                       >> 6U)) | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
                                                  << 0x1aU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xfffc0000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (0x1ffffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
                            >> 6U)));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
            = (0x2000000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U]);
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[9U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xaU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[9U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xbU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xaU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xcU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xbU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xdU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xcU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xeU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xdU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xfU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xeU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x10U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xfU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x11U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x10U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x12U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x11U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x13U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x12U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x13U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
                           >> 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0x1fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
              << 0x16U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x12U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x13U] 
        = ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                         >> 0xaU)) | ((0x200000U & 
                                       (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                                        >> 0xaU)) | 
                                      (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                                       << 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U] 
        = ((0xfe000000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U]) 
           | ((0x1fffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                            >> 0xaU)) | ((0x200000U 
                                          & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                                             >> 0xaU)) 
                                         | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x12U] 
                                            << 0x16U))));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbc20abf2__1 
            = (1U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x15U));
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffdfffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbc20abf2__1) 
                  << 0x15U));
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffefffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0) 
              << 0x14U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[2U] 
        = (0x3ffffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
              << 2U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
                  >> 0x1eU)) | ((2U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
                                       >> 0x1eU)) | 
                                (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                                 << 2U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xfff00000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                     >> 0x1eU)) | ((2U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                                          >> 0x1eU)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
            << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
                      >> 0x1aU));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x16U] 
            << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
                      >> 0x1aU));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
        = (0xffffffU & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x17U] 
                         << 6U) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x16U] 
                                   >> 0x1aU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
        = ((0x7ffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
              << 0xcU));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2dU] 
        = ((0x7ffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
                      >> 0x14U)) | ((0x800U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[0U] 
                                               >> 0x14U)) 
                                    | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                                       << 0xcU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2eU] 
        = ((0x7ffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                      >> 0x14U)) | ((0x800U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[1U] 
                                               >> 0x14U)) 
                                    | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
                                       << 0xcU)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2fU] 
        = (0xfU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hf84ef7d9__0[2U] 
                   >> 0x14U));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
            = (0x800U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU]);
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[9U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xaU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[9U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xbU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xaU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xcU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xbU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xdU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xcU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xeU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xdU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xfU] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xeU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x10U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0xfU] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x11U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x10U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x12U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x11U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x13U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x12U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x13U] 
                           >> 0x16U)));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x12U] 
        = (Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
           & ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x15U] 
               << 0xaU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0x14U] 
                           >> 0x16U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0x7fU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
              << 8U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1bU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1cU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[1U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1dU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[2U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1eU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[3U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1fU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[4U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x20U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[5U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x21U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[6U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x22U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[7U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x23U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[8U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x24U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[9U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x25U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xaU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x26U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xbU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x27U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xcU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x28U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xdU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x29U] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xeU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2aU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0xfU] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2bU] 
        = ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                     >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x10U] 
                                             >> 0x18U)) 
                                   | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                                      << 8U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
        = ((0xfffff800U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU]) 
           | ((0x7fU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                        >> 0x18U)) | ((0x80U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x11U] 
                                                >> 0x18U)) 
                                      | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h5cc3d266__0[0x12U] 
                                         << 8U))));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbc20abf2__1 
            = (1U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x15U));
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
            = ((0xffffff7fU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
               | ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbc20abf2__1) 
                  << 7U));
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xffffffbfU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
           | ((IData)(testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hbbf77235__0) 
              << 6U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
        = ((vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[2U] 
        = (0x3ffffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0x7ffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
              << 0x14U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
        = ((0x7ffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
                        >> 0xcU)) | ((0x80000U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[0U] 
                                                  >> 0xcU)) 
                                     | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                                        << 0x14U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x19U] 
        = ((0x7ffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                        >> 0xcU)) | ((0x80000U & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[1U] 
                                                  >> 0xcU)) 
                                     | (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[2U] 
                                        << 0x14U)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
        = ((0xffffffc0U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU]) 
           | (0x7ffffU & (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_heeba9795__0[2U] 
                          >> 0xcU)));
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
            = (0x80000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U]);
    }
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
        = ((0xfffbffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U]) 
           | ((IData)(testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h12fe5936__0) 
              << 0x12U));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                     >> 6U));
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U])) {
            if ((0U == (0xffU & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 0U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 1U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x17U] 
              >> 0x13U));
    testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he82e4aa6__0 
        = (IData)((0x480U == (0x480U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0x3fffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[3U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[4U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[1U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[5U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[2U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[6U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[3U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[7U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[4U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[8U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[5U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[9U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[6U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xaU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[7U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xbU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[8U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xcU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[9U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xdU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xaU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xeU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xbU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0xfU] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xcU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x10U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xdU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x11U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xeU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x12U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0xfU] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x12U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x12U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x13U] 
        = ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0x10U] 
                          >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x13U])) 
           | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
                              << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x13U])));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x14U] 
        = ((0xfe000000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[0x14U]) 
           | ((0x3fffffU & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0x11U] 
                             >> 0xaU) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U])) 
              | (0xffc00000U & ((Vtestharness__ConstPool__CONST_h7b110ce3_0[0x12U] 
                                 << 0x16U) & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x14U]))));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = (0x1000000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0xffdfffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0x200000U & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2cU] 
              >> 0xbU));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_load) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_data));
    } else if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hc6c55e8c__0 
            = ((0x700U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x1aU] 
                          << 5U)) | (0xffU & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x18U] 
                                              >> 0xbU)));
        if ((0xaU >= (0xfU & ((IData)(0xbU) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(0x7ffU) << (0xfU & 
                                            ((IData)(0xbU) 
                                             * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n)) 
                   | (0x7ffU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hc6c55e8c__0) 
                                << (0xfU & ((IData)(0xbU) 
                                            * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
        = ((2U >= (3U & ((IData)(3U) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q))))
            ? (7U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                     >> (3U & ((IData)(3U) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[0x10U] 
        = (0xdffffU & vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[0x10U]);
    if (((~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he82e4aa6__0) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[0x10U] 
            = (0x20000U | vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[0x10U]);
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT____Vlvbound_h09987f3a__0 
            = (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2fU] 
                     >> 1U));
        if ((2U >= (3U & ((IData)(3U) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
                   | (7U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT____Vlvbound_h09987f3a__0) 
                            << (3U & ((IData)(3U) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))));
        }
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
            = (7U & (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x2fU] 
                     >> 1U));
        if (vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT____Vlvbound_haf8f5b60__0 
            = vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data;
        if ((5U >= (7U & ((IData)(3U) * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
                = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                              * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
                   | (0x3fU & ((IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT____Vlvbound_haf8f5b60__0) 
                               << (7U & ((IData)(3U) 
                                         * (IData)(vlSelf->testharness__DOT__i_dma__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))));
        }
    }
}

VL_INLINE_OPT void Vtestharness___024root___act_comb__TOP__12(Vtestharness___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root___act_comb__TOP__12\n"); );
    // Init
    VlWide<3>/*88:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0;
    VL_ZERO_W(89, testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0);
    VlWide<3>/*74:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0;
    VL_ZERO_W(75, testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0);
    CData/*0:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0;
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0 = 0;
    VlWide<3>/*82:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0;
    VL_ZERO_W(83, testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0);
    CData/*0:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0;
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0 = 0;
    CData/*0:0*/ testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he81e4e78__0;
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he81e4e78__0 = 0;
    // Body
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[1U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[2U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[3U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[4U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[5U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[6U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[7U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[8U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[9U];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xaU];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xbU];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xcU];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xdU];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xeU];
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vtestharness__ConstPool__CONST_h8016e4ec_0[0xfU];
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                         >> 3U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                         >> 3U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[2U] 
        = (0x1ffffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                         >> 3U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((3U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
              << 3U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((3U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
                  >> 0x1dU)) | ((4U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
                                       >> 0x1dU)) | 
                                (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                                 << 3U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xf0000000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((3U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                     >> 0x1dU)) | ((4U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                                          >> 0x1dU)) 
                                   | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[2U] 
                                      << 3U))));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (4U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
            << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                      >> 0x17U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
            << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                      >> 0x17U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[2U] 
        = (0x7ffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                      << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                                >> 0x17U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0x3fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
              << 0x17U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x3fffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
                         >> 9U)) | ((0x400000U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
                                                  >> 9U)) 
                                    | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                                       << 0x17U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x3fffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                         >> 9U)) | ((0x400000U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                                                  >> 9U)) 
                                    | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[2U] 
                                       << 0x17U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (0x3fffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[2U] 
                           >> 9U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d1036a3__1 
            = (1U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x16U));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
            = ((0xffbfffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d1036a3__1) 
                  << 0x16U));
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffdfffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((IData)(testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0) 
              << 0x15U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[2U] 
        = (0x7ffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
              << 2U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
                  >> 0x1eU)) | ((2U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
                                       >> 0x1eU)) | 
                                (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                                 << 2U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((0xffe00000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | ((1U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                     >> 0x1eU)) | ((2U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                                          >> 0x1eU)) 
                                   | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0 
        = (1U & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                         >> 3U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
            << 0x1dU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                         >> 3U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[2U] 
        = (0x1ffffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
                         >> 3U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0x3fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
              << 0x1fU));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0x3fffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
                           >> 1U)) | ((0x40000000U 
                                       & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[0U] 
                                          >> 1U)) | 
                                      (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                                       << 0x1fU)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0x3fffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                           >> 1U)) | ((0x40000000U 
                                       & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[1U] 
                                          >> 1U)) | 
                                      (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[2U] 
                                       << 0x1fU)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = (0xffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h44dfed2a__0[2U] 
                        >> 1U));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x40000000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
            << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                      >> 0x17U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
            << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                      >> 0x17U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[2U] 
        = (0x7ffU & ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                      << 9U) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
                                >> 0x17U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0x3ffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
              << 0x13U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0x3ffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
                        >> 0xdU)) | ((0x40000U & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[0U] 
                                                  >> 0xdU)) 
                                     | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                                        << 0x13U)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xc0000000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((0x3ffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                           >> 0xdU)) | ((0x40000U & 
                                         (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[1U] 
                                          >> 0xdU)) 
                                        | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_hfb0e9d39__0[2U] 
                                           << 0x13U))));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d1036a3__1 
            = (1U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                     >> 0x16U));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xfffbffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d1036a3__1) 
                  << 0x12U));
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffdffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h3d18b36c__0) 
              << 0x11U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                         >> 2U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
        = ((vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
            << 0x1eU) | (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
                         >> 2U));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[2U] 
        = (0x7ffffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
                       >> 2U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1fffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
              << 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0x1fffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
                           >> 2U)) | ((0x20000000U 
                                       & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[0U] 
                                          >> 2U)) | 
                                      (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                                       << 0x1eU)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0x1fffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                           >> 2U)) | ((0x20000000U 
                                       & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[1U] 
                                          >> 2U)) | 
                                      (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[2U] 
                                       << 0x1eU)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffe0000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | (0x1fffffffU & (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h123471ec__0[2U] 
                             >> 2U)));
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x20000000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0 
        = (1U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xefffffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vlvbound_h820680d0__0) 
              << 0x1cU));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                     >> 0x11U));
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_q) {
        if ((0x10000000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) {
            if ((0U == (0xffU & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 0U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_d = 1U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
              >> 0x1dU));
    testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he81e4e78__0 
        = (IData)((0x240000U == (0x240000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[3U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[4U] 
        = ((0x7fffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
           | (0xff800000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[5U] 
        = ((0xfffffffcU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[5U]) 
           | (3U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = (0x2000000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]);
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U] 
        = ((0xffbfffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__splitted_req[2U]) 
           | (0x400000U & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push 
        = ((1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
              >> 0x1eU));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_clear) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_load) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_cnt_en) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hbac6e3bd__0 
            = ((0xf00U & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                          >> 5U)) | (0xffU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                              >> 0x15U)));
        if ((0xbU >= (0xfU & ((IData)(0xcU) * (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(0xfffU) << (0xfU & 
                                            ((IData)(0xcU) 
                                             * (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__mem_n)) 
                   | (0xfffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT____Vlvbound_hbac6e3bd__0) 
                                << (0xfU & ((IData)(0xcU) 
                                            * (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
        = (0xfU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                   >> (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q), 2U))));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U] 
        = (0x37ffffU & vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if (testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT____VdfgExtracted_he81e4e78__0) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U] 
            = (0x80000U | vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (3U & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
               | (0xfU & ((0xfU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                   >> 0x14U)) << (3U 
                                                  & VL_SHIFTL_III(2,32,32, (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q), 2U)))));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop)) 
          & (1U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_push))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data 
            = (0xfU & (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                       >> 0x14U));
        if (vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_pop) {
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n 
            = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))) 
                & (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
               | (0xffU & ((IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__w_fifo_data) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->testharness__DOT__i_mem__DOT__i_axi_to_reg__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__i_b_fifo__DOT__write_pointer_q), 2U)))));
    }
}
